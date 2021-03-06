#include <iostream>

#include "resize_vid.h"


//int main(int argc, char **argv)
int resize_vid(string srcName, string destName,double scaleX, double scaleY)
{
   try { 
      
      /*string srcName = "chaplin.mp4";
      string destName = "opencpp.avi";
      double scaleX = 2;
      double scaleY = 2;*/


      // Open the video file for reading
      VideoCapture cap(srcName);
    
    
    
      // if not success, exit program
      if(!cap.isOpened()){
         cout << "Error opening video stream or file" << endl;
         return -1;
      }

      // Default resolutions of the frame are obtained.The default resolutions are system dependent.
      int frame_width = cap.get(CV_CAP_PROP_FRAME_WIDTH);
      int frame_height = cap.get(CV_CAP_PROP_FRAME_HEIGHT);
      frame_width = frame_width * scaleX;
      frame_height = frame_height * scaleY;

      Size S = Size(frame_width, frame_height);
      //VideoWriter movie;
      //int fcc = CV_FOURCC('M', 'J', 'P', 'G'); 

      // Define the codec and create VideoWriter object.The output is stored in 'outcpp.avi' file.
      VideoWriter movie;
      movie.open(destName, CV_FOURCC('M', 'J', 'P', 'G'), 10, S, 0);

      //Defining window names
      //Create and open windows for above window names
      string SourceWindow = "Display Window Original";
      string ResizeWindow = "Display Window Resized";

      namedWindow(SourceWindow, WINDOW_AUTOSIZE);
      namedWindow(ResizeWindow, WINDOW_AUTOSIZE);


      while (true)
      {
          Mat frame, resized;

          // read a new frame from video
          cap >> frame;

          //Breaking the while loop at the end of the video
          if(frame.empty()) break;      

          // Resize the image
          resize(frame, resized, Size(round(scaleX*frame.cols), round(scaleY*frame.rows)), scaleX, scaleY, INTER_LINEAR);
          movie.write(resized);


          //Show above frames inside the created windows.
          imshow(SourceWindow, frame);
          imshow(ResizeWindow, resized);

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
