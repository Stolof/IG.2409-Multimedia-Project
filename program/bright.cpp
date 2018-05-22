#include <opencv2/opencv.hpp>
#include <iostream>
#include "bright.h"
using namespace std;
using namespace cv;



int modifyBrightness(string srcName, string destName,double alpha, double beta){ 
    try { 
    Mat image,dest;
    image = imread(srcName);
    dest = Mat::zeros(image.cols, image.rows, CV_64F);
    image.Mat::convertTo( dest,  -1, alpha, beta );
    imwrite( destName, dest );
    return 1 ;
    } catch( const std::exception &e) {
    return 0;
    }
   
}
