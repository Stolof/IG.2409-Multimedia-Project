#include "cannyEdge.h"

using namespace cv;
using namespace std;


int cannyEdge(int img_vid)
{
   try {
	string srcName, dstName;
    	cout << "Type the name of the source file:" << endl;
	cin >> srcName;
	cout << "Type the name of the destination file:" << endl;
	cin >> dstName;
	int thr1, thr2, ker;
	th1: cout << "Enter the low threshold between 50 and 150" << endl;
	cin >> thr1;
	if (thr1 < 50 || thr1 >150){ cout << "Please choose a threshold between 50 and 150" << endl; goto th1;}
	th2: cout << "Enter the max threshold between 150 and 450" << endl; /*because it's recommended to use max=3*low thresholds*/
	cin >> thr2;
	if (thr2 < 150 || thr2 >450){ cout << "Please choose a threshold between 150 and 450" << endl; goto th2;}
	k: cout << "Enter the size of the kernel between 3, 5 and 7" << endl;
	cin >> ker;
	if (ker != 3 && ker != 5 && ker != 7){ cout << "Please choose a size between 3, 5 and 7" << endl; goto k;}

     switch (img_vid)
     {
       case 0 :
       {
      
            Mat source, result;

            // Read image
            source = imread(srcName ,IMREAD_COLOR);

            // Check for failure
            if(source.empty())
            {
               cout << "Error opening the file" << endl;
               return 0;
            }

            //void Canny(InputArray image, OutputArray edges, double threshold1, double threshold2, int apertureSize=3, bool L2gradient=false )
            Canny(source, result, thr1, thr2, ker);
            imwrite( dstName, result );

            //Define names of the windows
            String orignalWindow = "Display Window Orignal";
            String resultWindow = "Display CannyEdge Window";
   
            // Create windows
            namedWindow(orignalWindow, CV_WINDOW_AUTOSIZE);
            namedWindow(resultWindow, CV_WINDOW_AUTOSIZE); // Could rename depending on function

             // show the windows
             imshow(orignalWindow, source);
             imshow(resultWindow, result);

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

             // Define the codec and create VideoWriter object.
             VideoWriter movie;
             movie.open(dstName, CV_FOURCC('M', 'J', 'P', 'G'), cap.get(CV_CAP_PROP_FPS), S);

             //Defining window names
             //Create and open windows for above window names
             string SourceWindow = "Display Window Original";
             string CannyWindow = "Display CannyEdge Window";

             namedWindow(SourceWindow, WINDOW_AUTOSIZE);
             namedWindow(CannyWindow, WINDOW_AUTOSIZE);

             while (true)
             {
                 Mat frame, canny;


                 // read a new frame from video
                 cap >> frame;

                 //Breaking the while loop at the end of the video
                 if(frame.empty()) break;     

                 // Canny Edge
                 Canny(frame, canny, thr1, thr2, ker);
                 movie.write(canny);


                 //Show above frames inside the created windows.
                 imshow(SourceWindow, frame);
                 imshow(CannyWindow, canny);

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
