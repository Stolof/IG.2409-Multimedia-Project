#include "panorama.h"


int Stitch(){
    try {
	string folderName, out;
	cout << "Type the name of the folder containing the images:" << endl;
	cin >> folderName;
	cout << "Type the name of the destination image:" << endl;
	cin >> out;
	String path(folderName+"/*.jpg");
	vector<String> folder;
	vector<Mat> images;
	glob(path,folder,true); // recurse
	for (int k=0; k<folder.size(); ++k)
		{cout<<"image found"<<endl;
     		Mat im = imread(folder[k]);
     		if (im.empty()) continue; 
     		images.push_back(im);
		}
	Mat dest;
	Stitcher stitcher = Stitcher::createDefault(true);
	Stitcher::Status status = stitcher.stitch(images, dest);
	
	imwrite( out, dest);


	//Display window and show for the image

      namedWindow("Display Window 2", WINDOW_AUTOSIZE);
      imshow("Display Window 2", dest);

      waitKey(0);

      //destroy all opened windows
      destroyAllWindows();


    return 1 ;
    } catch( const std::exception &e) {
    return 0;
    }
}
