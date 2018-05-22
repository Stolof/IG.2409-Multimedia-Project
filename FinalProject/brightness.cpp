#include <opencv2/opencv.hpp>
#include <iostream>
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


int main( int argc, char** argv )
{
    if (argc ==1){
	cout<<"Please specify the function you want to execute"<<endl;
    }
    if (strcmp(argv[1],"bright")==0){
    	double alpha = atof(argv[4]);
	double beta = atof(argv[5]);
	string srcName = argv[2];
	string dstName = argv[3];
	int bright = modifyBrightness(srcName,dstName,alpha,beta);
	if (bright ==1){
            cout<<"Brightness changed!"<<endl;	
	}else{
	    cout<<"An error occured"<<endl;
	}
    }

    return 0;
}
