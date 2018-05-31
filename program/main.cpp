#include <opencv2/opencv.hpp>
#include <string>
#include <iostream>

using namespace std;
using namespace cv;

#include "dil.h"
#include "resize.h"
#include "bright.h"
#include "panorama.h"
#include "cannyEdge.h"
#include "faceRecognition.h"

int imagevideo(){
	int img_vid;
	cout << "If you want to edit an image, please type 0, if you want to edit a video, please type 1" << endl;
	start: cin >> img_vid;

	if (img_vid != 0 && img_vid != 1)
        {
           cout << "Please, choose between 0 for image and 1 for video" << endl;
           goto start;
        }
	return img_vid;
}

int main( void )
{
	string funname, srcName, dstName;
	cout << "Image and Video application opened." << endl;
	opt: cout << "Please choose one number corresponding to the following functions:"<< endl;
	cout << "1) dilation/erosion\n2) resize\n3) brightness" << endl;
	cout << "4) panorama stitching\n5) canny edge detection\n6) face recognition" << endl;
	int imgvid, modify; char choice, goback;
	cin >> choice;
	if (choice != '1' && choice != '2' && choice != '3' && choice != '4' && choice != '5' && choice != '6') {goto opt;}
	switch (choice){
	case '1': imgvid=imagevideo(); modify = dil(imgvid); break;
	case '2': imgvid=imagevideo(); modify = resize(imgvid); break;
	case '3': imgvid=imagevideo(); modify = modifyBrightness(imgvid); break;
	case '4': modify = Stitch(); break;
	case '5': imgvid=imagevideo(); modify = cannyEdge(imgvid); break;
	case '6': modify = faceRecogn();
	}

	if (modify==1) { cout<<"\nChanges applied\n"<<endl; } else { cout<<"\nAn error occured\n"<<endl; }
	cout << "Type 1 if you want to try a different function, anything else if you want to end" << endl;
	cin >> goback;
	if (goback=='1') { goto opt; }
	return 0;
}
