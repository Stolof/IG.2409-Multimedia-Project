#include <opencv2/opencv.hpp>
#include <iostream>
using namespace std;
using namespace cv;

int modifyBrightness(string srcName, string destName,double alpha, double beta){ 
    try { 
    Mat image,dest;
    image = imread(srcName);
    dest = Mat::zeros(image.cols, image.rows, CV_64F);
    double alpha,beta;
    //imshow("Original image",image);
    //imshow("Modified image", dest);
    imwrite( destName, dest );
    return 1 
    } catch( const std::exception &e) {
    return 0
    }
   
}


int main( int argc, char** argv )
{
                           /*< Simple contrast control */
                                     /*< Simple brightness control */
    //reading the image and creating a new image matrix
    Mat image,dest;
    image = imread("eco.jpg");
    dest = Mat::zeros(image.cols, image.rows, CV_64F);
    
    
    double alpha,beta;
    //asking for alpha [1.0-3.0] and beta values [0-100]
    cout<<"Enter alpha"<<endl;
    cin>>alpha;
    cout<<"Enter beta"<<endl;
    cin>>beta;
    int bright = modifyBrightness("eco.jpg","bright.jpg",alpha,beta);
    return 0;
}
