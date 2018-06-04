#ifndef __CPP_RESIZE__
#define __CPP_RESIZE__
#include <opencv2/opencv.hpp>
#include <string>

using namespace std;
using namespace cv;

int resize(string srcName, string dstName, double scaleX, double scaleY, int img_vid);

#endif