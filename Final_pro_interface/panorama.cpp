#include "panorama.h"


int Stitch(string folderName, string dstname) {
	try {

		String path(folderName + "/*.jpg");
		vector<String> folder;
		vector<Mat> images;
		glob(path, folder, true); // recurse
		for (int k = 0; k<folder.size(); ++k)
		{
			cout << "image found" << endl;
			Mat im = imread(folder[k]);
			if (im.empty()) continue;
			images.push_back(im);
		}
		Mat dest;
		Stitcher stitcher = Stitcher::createDefault(true);
		Stitcher::Status status = stitcher.stitch(images, dest);

		imwrite(dstname, dest);


		//Display window and show for the image

		namedWindow("Display Window Panorama", WINDOW_AUTOSIZE);
		imshow("Display Window Panorama", dest);

		waitKey(0);

		//destroy all opened windows
		destroyAllWindows();


		return 1;
	}
	catch (const std::exception &e) {
		return 0;
	}
}