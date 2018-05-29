#include <opencv2/opencv.hpp>
#include <iostream>
#include <fstream>
#include "opencv2/stitching/stitcher.hpp"
using namespace std;
using namespace cv;

int Stitch(string folderName){ 
    try { 
    String path(folderName+"/*.jpg");
    vector<String> folder;
    vector<Mat> images;
    glob(path,folder,true); // recurse
    for (size_t k=0; k<folder.size(); ++k)
    {
	cout<<"image found"<<endl;
     	cv::Mat im = cv::imread(folder[k]);
     	if (im.empty()) continue; 
     	images.push_back(im);
    }
    Mat dest;
    Stitcher stitcher = Stitcher::createDefault(true);
    Stitcher::Status status = stitcher.stitch(images, dest);
    imwrite( "pano.jpg", dest );
    return 1 ;
    } catch( const std::exception &e) {
    return 0;
    }
   
}


int main( int argc, char** argv )
{
    Stitch("photos");

    return 0;
}
