#ifndef __CPP_CANNYEDGE__
#define __CPP_CANNYEDGE__
#include <opencv2/opencv.hpp>
#include <string>

using namespace std;
using namespace cv;

int cannyEdge(string srcName, string destName, int threshold1, int threshold2, int kernel);

#endif
