/*
**** This is for 2.5 Canny Edge Detection using opencv function Canny
Author: Olof and Rafa
*/

#include <opencv2/opencv.hpp>
#include <iostream>
#include <string>
#include "cannyEdge.h"

using namespace cv;
using namespace std;

int cannyEdge(string srcName, string destName)
{
  try{

  // Read the parameters
  //char* imageName = argv[1];
  //int threshold1 = argv[2];
  //int threshold2 = argv[0];
  //int kernel = argv[0];

     Mat source, result;

     // Read image
     source = imread(srcName ,IMREAD_COLOR);

     // Check for failure
     if(source.empty())
     {
        cout << "Error opening the file" << endl;
        return -1;
     }

     // Maybe temporary for user inputs.
     int threshold1, threshold2, kernel;
     cout << "Enter the low threshold" << endl;
     cin >> threshold1;
     cout << "Enter the max threshold" << endl;
     cin >> threshold2;
     cout << "Enter the size of the kernel" << endl;
     cin >> kernel;

     //void Canny(InputArray image, OutputArray edges, double threshold1, double threshold2, int apertureSize=3, bool L2gradient=false )
     Canny(source, result, threshold1, threshold2, kernel);
     imwrite( destName, result );

     //Define names of the windows
     String orignalWindow = "Orignal Window";
     String resultWindow = "Result Window";

     // Create windows
     namedWindow(orignalWindow, CV_WINDOW_AUTOSIZE);
     namedWindow(resultWindow, CV_WINDOW_AUTOSIZE); // Could rename depending on function

     // show the windows
     imshow(orignalWindow, source);
     imshow(resultWindow, result);

     cout << "Press anykey to quit the program" << endl;
     // Wait for any keystroke in the window
     waitKey(0);

     // Destroy all opened windows
     destroyAllWindows();

     return 1 ;
  } 
  catch( const std::exception &e) 
  {
     return 0;
  }
}
