#ifndef __CPP_CANNYEDGE__
#define __CPP_CANNYEDGE__
#include <opencv2/opencv.hpp>
#include <string>

using namespace std;
using namespace cv;

int cannyEdge(string srcName, string dstName, int thr1, int thr2, int ker, int img_vid);

#endif