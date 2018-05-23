#include <opencv2/opencv.hpp>
#include <string>

using namespace std;
using namespace cv;

#include "bright.h"
#include "resize.h"
#include "dil.h"
#include "cannyEdge.h"


int main( int argc, char** argv )
{
    if (argc ==1){
	cout<<"No arguments passed, segmentation error expected"<<endl;
    }
	string srcName = argv[2];
	string dstName = argv[3];
    if (strcmp(argv[1],"bright")==0){
    	double alpha = atof(argv[4]);
	double beta = atof(argv[5]);
	int bright = modifyBrightness(srcName,dstName,alpha,beta);
	if (bright ==1){
            cout<<"Brightness changed!"<<endl;	
	}else{
	    cout<<"An error occured"<<endl;
	}
    }

    if (strcmp(argv[1],"resize")==0){
	// Scaling factors 0.1-3
	xwrong: cout << "Choose a scaling factor for the X axis between 0.1 and 3" << endl;
	double scaleX;
	cin >> scaleX;
	if (scaleX < 0.1 || scaleX >3)
	{
	cout << "The scaling factor for the X axis has to be between 0.1 and 3" << endl;
	goto xwrong;
	}
	
	ywrong: cout << "Choose a scaling factor for the Y axis between 0.1 and 3" << endl;
	double scaleY;
	cin >> scaleY;
	if (scaleY < 0.1 || scaleY >3)
	{
	cout << "The scaling factor for the Y axis has to be between 0.1 and 3" << endl;
	goto ywrong;
	}
	int res=resize(srcName, dstName, scaleX, scaleY);
	if (res ==1){
            cout<<"resized!"<<endl;	
	}else{
	    cout<<"An error occured"<<endl;
	}
    }

    if (strcmp(argv[1],"dilatationerosion")==0){
	
	int choiseParam;
	int sizeParam;
	cout << "Enter 1 for dilation and 0 for erosion" << endl;
	cin >> choiseParam;
	sizewrong: cout << "Choose the number of iterartions between 1-10" << endl;
	cin >> sizeParam;
	if (sizeParam < 1 || sizeParam > 10)
	{
	cout << "The number of iterations has to be between 1 and 10" << endl;
	goto sizewrong;
	}
	
	int dilatation=dil(srcName, dstName,choiseParam, sizeParam);
	if (dilatation==1){
            cout<<"changes applied"<<endl;	
	}else{
	    cout<<"An error occured"<<endl;
	}
    }


    if (strcmp(argv[1],"cannyEdge")==0)
    {
	int thr1, thr2, ker;
	cout << "Enter the low threshold" /*values?*/ << endl;
	cin >> thr1;
	cout << "Enter the max threshold" /*values?*/ << endl;
	cin >> thr2;
	cout << "Enter the size of the kernel" /*values?*/ << endl;
	cin >> ker;
	int canEdge = cannyEdge(srcName, dstName, thr1, thr2, ker);
	if (canEdge ==1)
        {
            cout<<"Canny Edge detection correctly performed"<<endl;	
        }
        else
        {
	     cout<<"An error occured"<<endl;
        }
    }	

    return 0;
}
