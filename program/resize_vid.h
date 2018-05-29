#ifndef __CPP_RESIZE_VID__
#define __CPP_RESIZE_VID__
#include <opencv2/opencv.hpp>
#include <string>

using namespace std;
using namespace cv;

int resize_vid(string srcName, string destName,double scaleX, double scaleY);

#endif
