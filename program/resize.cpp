#include <iostream>

#include "resize.h"

//using namespace std;
//using namespace cv;

int resize(string srcName, string destName,double scaleX, double scaleY)
{
   try { 

      Mat source, dest;

      // Read source image
      source = imread(srcName, IMREAD_COLOR);

      // Check for failure
      if( source.empty() )
      {
          printf( " No image data \n " );
          return -1;
      }


      // Scaling the image
      resize(source, dest, Size(round(scaleX*source.cols), round(scaleY*source.rows)), scaleX, scaleY, INTER_LINEAR);
      imwrite(destName, dest);


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
}
