#include <opencv2/opencv.hpp>
#include <string>

using namespace std;
using namespace cv;


#include "dil.h"
#include "resize.h"
#include "bright.h"

#include "cannyEdge.h"


int main( int argc, char** argv )
{
    if (argc ==1){
	cout<<"No arguments passed, segmentation error expected"<<endl;
    }
	string srcName = argv[2];
	string dstName = argv[3];

    if (strcmp(argv[1],"dilatationerosion")==0){
	
	int choiseParam;
	int sizeParam;
	cout << "Enter 1 for dilatation and 0 for erosion" << endl;
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

    if (strcmp(argv[1],"bright")==0){
    	double alpha;  /* atof(argv[4]); */
	double beta;
	
	scale: cout << "Choose a scale factor between 0.1 and 5" << endl;
	cin >> alpha;
	if (alpha < 0.1 || alpha >5)
	{
	cout << "The scale factor has to be between 0.1 and 5" << endl;
	goto scale;
	}

	shift: cout << "Choose a shift factor between -100 and 100" << endl;
	cin >> beta;
	if (beta < -100 || beta >100)
	{
	cout << "The shift factor has to be between -100 and 100" << endl;
	goto shift;
	}

	int bright = modifyBrightness(srcName,dstName,alpha,beta);
	if (bright ==1){
            cout<<"Brightness changed!"<<endl;	
	}else{
	    cout<<"An error occured"<<endl;
	}
    }

    if (strcmp(argv[1],"panoramastitch")==0)
    {
	
    }

    if (strcmp(argv[1],"cannyEdge")==0)
    {
	int thr1, thr2, ker;
	th1: cout << "Enter the low threshold between 50 and 150" << endl;
	cin >> thr1;
	if (thr1 < 50 || thr1 >150){ cout << "Please choose a threshold between 50 and 150" << endl; goto th1;}
	th2: cout << "Enter the max threshold between 150 and 450" << endl; /*because it's recommended to use max=3*low thresholds*/
	cin >> thr2;
	if (thr2 < 150 || thr2 >450){ cout << "Please choose a threshold between 150 and 450" << endl; goto th2;}
	k: cout << "Enter the size of the kernel between 3, 5 and 7" << endl;
	cin >> ker;
	if (ker != 3 && ker != 5 && ker != 7){ cout << "Please choose a size between 3, 5 and 7" << endl; goto k;}
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
