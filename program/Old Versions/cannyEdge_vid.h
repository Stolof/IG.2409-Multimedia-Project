#ifndef __CPP_CANNYEDGE_VID__
#define __CPP_CANNYEDGE_VID__
#include <opencv2/opencv.hpp>
#include <string>

using namespace std;
using namespace cv;

int cannyEdge_vid(string srcName, string destName, int threshold1, int threshold2, int kernel);

#endif

