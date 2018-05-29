#include "dil.h"


int dil(int img_vid)
{
   try {
	string srcName, dstName;
    	cout << "Type the name of the source file:" << endl;
	cin >> srcName;
	cout << "Type the name of the destination file:" << endl;
	cin >> dstName;
	int choiseParam;
	int sizeParam;
	cout << "Enter 1 for dilation and 0 for erosion" << endl;
	cin >> choiseParam;
	sizewrong: cout << "Choose the number of iterartions between 1-10" << endl;
	cin >> sizeParam;
	if (sizeParam < 1 || sizeParam > 10)
	   {
	   cout << "The number of iterations has to be between 1 and 10" << endl;
	   goto sizewrong;
	   }

     switch (img_vid)
     {
       case 0 :
       { 

             Mat source, dest;
 
             // Read image
             source = imread(srcName ,IMREAD_COLOR); //"van_gogh.jpg"

             // Check for failure
             if(source.empty())
             {
                cout << "Error opening the file" << endl;
                return 0;
             }


             //dilate(inputArray, OutputArray, inputArray Kernel, Point anchor, int interations, bordertype, borderValue);
             //erode((inputArray, OutputArray, inputArray Kernel, Point anchor, int interations, bordertype, borderValue);

             // If statement for chosing which fucntion to use.
             if( choiseParam == 1)
             {
                dilate(source, dest, Mat(), Point(-1, -1), sizeParam, 1, 1);
             } 
             else
             {
                erode(source, dest, Mat(), Point(-1, -1), sizeParam, 1, 1);
             }

             imwrite( dstName, dest );

             //Define names of the windows
             String orignalWindow = "Orignal Window";
             String resultWindow = "Result Window";

             // Create windows
             namedWindow(orignalWindow, CV_WINDOW_AUTOSIZE);
             namedWindow(resultWindow, CV_WINDOW_AUTOSIZE); // Could rename depending on function

             // show the windows
             imshow(orignalWindow, source);
             imshow(resultWindow, dest);

             //cout << "Press anykey to quit the program" << endl;
             // Wait for any keystroke in the window
             waitKey(0);

             // Destroy all opened windows
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
            string DilWindow = "Display Window Dilatate or Erosion";

            namedWindow(SourceWindow, WINDOW_AUTOSIZE);
            namedWindow(DilWindow, WINDOW_AUTOSIZE);

            while (true)
            {
                Mat frame, dilerod;


                // read a new frame from video
                cap >> frame;

                //Breaking the while loop at the end of the video
                if(frame.empty()) break;     

                // Dilatate or Erode
                if( choiseParam == 1)
                {
                   dilate(frame, dilerod, Mat(), Point(-1, -1), sizeParam, 1, 1);
                }
                else
                {
                   erode(frame, dilerod, Mat(), Point(-1, -1), sizeParam, 1, 1);
                }
                movie.write(dilerod);


                //Show above frames inside the created windows.
                imshow(SourceWindow, frame);
                imshow(DilWindow, dilerod);

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
