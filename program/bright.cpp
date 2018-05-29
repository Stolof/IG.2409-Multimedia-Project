#include "bright.h"


int modifyBrightness(int img_vid){
   try {
    	string srcName, dstName;
    	cout << "Type the name of the source file:" << endl;
	cin >> srcName;
	cout << "Type the name of the destination file:" << endl;
	cin >> dstName;
	
	double alpha;
	double beta;
	scale: cout << "Choose a scale factor between 0.1 and 5" << endl;
	cin >> alpha;
	if (alpha < 0.1 || alpha >5)
	   {
	   cout << "The scale factor has to be between 0.1 and 5" << endl;
	   goto scale;
	   }

	shift: cout << "Choose a shift factor between -100 and 100" << endl;
	cin >> beta;
	if (beta < -100 || beta >100)
	   {
	   cout << "The shift factor has to be between -100 and 100" << endl;
	   goto shift;
	   }

     switch (img_vid)
     {
       case 0 :   //In the case we are working with an image
       {
            Mat source,dest;
            source = imread(srcName);
            dest = Mat::zeros(source.cols, source.rows, CV_64F);
            source.Mat::convertTo( dest,  -1, alpha, beta );
            imwrite( dstName, dest );


	    //Display windows and show for all four images
            namedWindow("Display Window", WINDOW_AUTOSIZE);
            imshow("Display Window", source);

            namedWindow("Display Window 2", WINDOW_AUTOSIZE);
            imshow("Display Window 2", dest);

            waitKey(0);

            //destroy all opened windows
            destroyAllWindows();

	 break;
        }
        case 1 :
        {
            VideoCapture cap(srcName);   
    
            // if not success, exit program
            if(!cap.isOpened()){
               cout << "Error opening video stream or file" << endl;
               return 0;
            }

            // Default resolutions of the frame are obtained.The default resolutions are system dependent.
            int frame_width = cap.get(CV_CAP_PROP_FRAME_WIDTH);
            int frame_height = cap.get(CV_CAP_PROP_FRAME_HEIGHT);

            Size S = Size(frame_width, frame_height);
            //VideoWriter movie;
            //int fcc = CV_FOURCC('M', 'J', 'P', 'G'); 

            // Define the codec and create VideoWriter object.The output is stored in 'outcpp.avi' file.
            VideoWriter movie;
            movie.open(dstName, CV_FOURCC('M', 'J', 'P', 'G'), 10, S, 0);

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
        }
   }
   return 1;
   }
   catch( const std::exception &e) 
   { return 0; }
}
