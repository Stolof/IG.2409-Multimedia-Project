#include <opencv2/opencv.hpp>
#include <iostream>
#include <string>
#include "cannyEdge_vid.h"

using namespace cv;
using namespace std;


//int main(int argc, char **argv)
int cannyEdge_vid(string srcName, string destName, int threshold1, int threshold2, int kernel)
{
  try{

      /*string srcName = "chaplin.mp4";
      string destName = "opencpp.avi";
      int threshold1 = 50;
      int threshold2 = 150;
      int kernel = 3;*/



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
          Canny(frame, canny, threshold1, threshold2, kernel);
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

      return 1;
   }

   catch( const std::exception &e) 
   {
      return 0;
   }

}
