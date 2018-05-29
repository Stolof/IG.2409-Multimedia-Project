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
	cout << "Image and Video application opened. Please choose one number corresponding to the following functions:"<< endl;
	opt: cout << "1) dilation/erosion\n2) resize\n3) brightness\n4) panorama stitching\n5) canny edge detection\n6) face recognition" << endl;
	int choice, imgvid, modify;
	cin >> choice;
	if (choice != 1 && choice != 2 && choice != 3 && choice != 4 && choice != 5 && choice != 6)
		{cout << "Please choose a number between:" << endl; goto opt;}
	switch (choice){
	case 1: imgvid=imagevideo(); modify = dil(imgvid); break;
	case 2: imgvid=imagevideo(); modify = resize(imgvid); break;
	case 3: imgvid=imagevideo(); modify = modifyBrightness(imgvid); break;
	case 4: modify = Stitch(); break;
	case 5: imgvid=imagevideo(); modify = cannyEdge(imgvid); break;
//	case 6: modify = facerecogn(imgvid);
	}

	if (modify==1) { cout<<"changes applied"<<endl; } else { cout<<"An error occured"<<endl; } 
	return 0;
}
