#include <iostream>
#include <string>
#include "resize.h"

using namespace std;
using namespace cv;

void resize(string source)
{
Mat scaleD;

// Read source image
//source = imread("van_gogh.jpg", IMREAD_COLOR);

// Check for failure
if( source.empty() )
{
    printf( " No image data \n " );
    return -1;
}

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

// Scaling the image
 resize(source, scaleD, Size(round(scaleX*source.cols), round(scaleY*source.rows)), scaleX, scaleY, INTER_LINEAR);
 imwrite("scaleD.jpg", scaleD);


//Display windows and show for all four images
 namedWindow("Display Window", WINDOW_AUTOSIZE);
 imshow("Display Window", source);

 namedWindow("Display Window 2", WINDOW_AUTOSIZE);
 imshow("Display Window 2", scaleD);

 waitKey(0);

 //destroy all opened windows
 destroyAllWindows();
}
