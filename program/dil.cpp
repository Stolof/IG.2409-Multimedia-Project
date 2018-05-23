/*
**** This is for 2.1 dilation and erosion using opencv functions.
Author: Olof and Rafa
*/

#include <opencv2/opencv.hpp>
#include <iostream>

using namespace cv;
using namespace std;

int dil(string srcName, string destName,int choiseParam, int sizeParam){
try { 
  // Read the parameters
  //int sizeParam = argv[2];
  //int choiseParam = argv[0];

  Mat source, dest;

  // Read image
  source = imread(srcName ,IMREAD_COLOR); //"van_gogh.jpg"

  // Check for failure
  if(source.empty()){
    cout << "Error opening the file" << endl;
    return -1;
  }


  //dilate(inputArray, OutputArray, inputArray Kernel, Point anchor, int interations, bordertype, borderValue);
  //erode((inputArray, OutputArray, inputArray Kernel, Point anchor, int interations, bordertype, borderValue);

  // If statement for chosing which fucntion to use.
  if( choiseParam == 1){
    dilate(source, dest, Mat(), Point(-1, -1), sizeParam, 1, 1);
  } else {
    erode(source, dest, Mat(), Point(-1, -1), sizeParam, 1, 1);
  }

  imwrite( destName, dest );

  //Define names of the windows
  String orignalWindow = "Orignal Window";
  String resultWindow = "Result Window";

  // Create windows
  namedWindow(orignalWindow, CV_WINDOW_AUTOSIZE);
  namedWindow(resultWindow, CV_WINDOW_AUTOSIZE); // Could rename depending on function

  // show the windows
  imshow(orignalWindow, source);
  imshow(resultWindow, dest);

  //cout << "Press anykey to quit the program" << endl;
  // Wait for any keystroke in the window
  waitKey(0);

  // Destroy all opened windows
  destroyAllWindows();

  return 1;
    } catch( const std::exception &e) {
    return 0;
    }
}
