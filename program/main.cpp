#include <opencv2/opencv.hpp>
#include <iostream>
#include "bright.h"
#include "resize.h"

int main( int argc, char** argv )
{
    if (argc ==1){
	cout<<"Please specify the function you want to execute"<<endl;
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
	int res=resize(string srcName, string destName,double scaleX, double scaleY);
	if (res ==1){
            cout<<"resized!"<<endl;	
	}else{
	    cout<<"An error occured"<<endl;
	}
    }

	


    return 0;
}
