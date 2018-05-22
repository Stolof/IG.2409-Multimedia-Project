/*
**** This is for 2.1 dilation and erosion using opencv functions.
Author: Olof and Rafa
*/

#include <opencv2/opencv.hpp>
#include <iostream>

using namespace cv;
using namespace std;

int main(int argc, char* argv[]) {

  // Read the parameters
  char* imageName = argv[1];
  //int sizeParam = argv[2];
  //int choiseParam = argv[0];

  Mat source, result;

  // Read image
  source = imread(imageName ,IMREAD_COLOR); //"van_gogh.jpg"

  // Check for failure
  if(source.empty()){
    cout << "Error opening the file" << endl;
    return -1;
  }

  // Maybe temporary for user inputs.
  int choiseParam;
  int sizeParam;
  cout << "Enter 1 for dilation and 0 for erosion" << endl;
  cin >> choiseParam;
  cout << "Choose the number of iterartions between 1-10" << endl;
  cin >> sizeParam;


  //dilate(inputArray, OutputArray, inputArray Kernel, Point anchor, int interations, bordertype, borderValue);
  //erode((inputArray, OutputArray, inputArray Kernel, Point anchor, int interations, bordertype, borderValue);

  // If statement for chosing which fucntion to use.
  if( choiseParam == 1){
    dilate(source, result, Mat(), Point(-1, -1), sizeParam, 1, 1);
  } else {
    erode(source, result, Mat(), Point(-1, -1), sizeParam, 1, 1);
  }


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

  return 0;
}
