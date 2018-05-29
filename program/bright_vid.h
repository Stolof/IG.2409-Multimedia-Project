#ifndef __CPP_BRIGHT_VID__
#define __CPP_BRIGHT_VID__
#include <opencv2/opencv.hpp>
#include <string>

using namespace std;
using namespace cv;

int modifyBrightness_vid(string srcName, string destName,double alpha, double beta);

#endif
