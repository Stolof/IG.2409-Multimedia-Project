#include "bright.h"


//int modifyBrightness(string srcName, string destName,double alpha, double beta);      Old version, so you know what parameters we missing
//  MAYBE THE CATCH AND TRY CAN BE REDUCED TO ONLY ONE FOR THE WHOLE PROGRAM !!!!!
int modifyBrightness(int img_vid){

    // HERE YOU ASK FOR THE SOURCE AND DESTINATION FILES I GUESS

   switch (img_vid)
   {
      case 0 :   //In the case we are working with an image
      {
         try
	 { 
            Mat source,dest;
            source = imread(srcName);
            dest = Mat::zeros(source.cols, source.rows, CV_64F);
            source.Mat::convertTo( dest,  -1, alpha, beta );
            imwrite( destName, dest );


	    //Display windows and show for all four images
            namedWindow("Display Window", WINDOW_AUTOSIZE);
            imshow("Display Window", source);

            namedWindow("Display Window 2", WINDOW_AUTOSIZE);
            imshow("Display Window 2", dest);

            waitKey(0);

            //destroy all opened windows
            destroyAllWindows();


            return 1;
	 }

         catch( const std::exception &e)
         {
            return 0;
         }
	 break;
      }
      case 1 :
      {
         try
         {
            VideoCapture cap(srcName);   
    
            // if not success, exit program
            if(!cap.isOpened()){
               cout << "Error opening video stream or file" << endl;
               return -1;
            }

            // Default resolutions of the frame are obtained.The default resolutions are system dependent.
            int frame_width = cap.get(CV_CAP_PROP_FRAME_WIDTH);
            int frame_height = cap.get(CV_CAP_PROP_FRAME_HEIGHT);

            Size S = Size(frame_width, frame_height);
            //VideoWriter movie;
            //int fcc = CV_FOURCC('M', 'J', 'P', 'G'); 

            // Define the codec and create VideoWriter object.The output is stored in 'outcpp.avi' file.
            VideoWriter movie;
            movie.open(destName, CV_FOURCC('M', 'J', 'P', 'G'), 10, S, 0);

            //Defining window names
            //Create and open windows for above window names
            string SourceWindow = "Display Window Original";
            string BrightWindow = "Display Window different Brightness";

            namedWindow(SourceWindow, WINDOW_AUTOSIZE);
            namedWindow(BrightWindow, WINDOW_AUTOSIZE);

            while (true)
            {
                Mat frame, bright;


                // read a new frame from video
                cap >> frame;

                //Breaking the while loop at the end of the video
                if(frame.empty()) break;  

                bright = Mat::zeros(frame.cols, frame.rows, CV_64F);    

                // Increase the brightness
                frame.convertTo( bright,  -1, alpha, beta );
                movie.write(bright);


                //Show above frames inside the created windows.
                imshow(SourceWindow, frame);
                imshow(BrightWindow, bright);

                //wait for for 10 ms until any key is pressed.
                //If the 'Esc' key is pressed, break the while loop.
                //If the any other key is pressed, continue the loop
                //If any key is not pressed withing 10 ms, continue the loop
                if (waitKey(10) == 27)
                {
                    cout << "Esc key is pressed by user. Stoppig the video" << endl;
                    break;
                }
            }
    
            cap.release();
            movie.release();
 
            destroyAllWindows();

            return 1;
         }

         catch( const std::exception &e) 
         {
            return 0;
         }
         break;
      }
   }
   
}
