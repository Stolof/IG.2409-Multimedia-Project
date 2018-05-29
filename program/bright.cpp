#include "bright.h"



int modifyBrightness(string srcName, string destName,double alpha, double beta){ 
    try { 
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


    return 1 ;
    } catch( const std::exception &e) {
    return 0;
    }
   
}
