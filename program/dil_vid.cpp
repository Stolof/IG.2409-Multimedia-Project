#include <opencv2/opencv.hpp>
#include <iostream>
#include "dil_vid.h"

using namespace cv;
using namespace std;


//int main(int argc, char **argv)
int dil_vid(string srcName, string destName,int choiseParam, int sizeParam)
{
   try { 

      /*string srcName = "chaplin.mp4";
      string destName = "opencpp.avi";
      int choiseParam = 1;
      int sizeParam = 2;*/

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

      return 1;
   }

   catch( const std::exception &e) 
   {
      return 0;
   }

}
