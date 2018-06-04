#ifndef __CPP_BRIGHT__
#define __CPP_BRIGHT__
#include <opencv2/opencv.hpp>
#include <string>

using namespace std;
using namespace cv;

int modifyBrightness(string srcName, string dstName, double alpha, double beta, int img_vid);

#endif