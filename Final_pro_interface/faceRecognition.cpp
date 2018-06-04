#include "opencv2/opencv.hpp"
#include <iostream>
#include <msclr\marshal_cppstd.h>

using namespace std;
using namespace cv;

int faceRecogn() {

	try {

		// Create a VideoCapture object and use camera to capture the video
		VideoCapture cap(0);
		Mat image;

		// Check if camera opened successfully
		if (!cap.isOpened())
		{
			cout << "Error opening video stream or file" << endl;
			return 0;
		}

		// Cascades
		CascadeClassifier faceCascade, eyeCascade;

		// Load classifiers
		//eyeCascade.load("./haarcascade_eye.xml");
		faceCascade.load("./haarcascade_frontalface_default.xml");


		while (1) {

			Mat frame, gray, smalFrame;
			vector<Rect> faces, eyes;
			// Capture frame-by-frame
			cap >> frame;

			// If the frame is empty, break immediately
			if (frame.empty()) { break; }

			Mat frame1 = frame.clone();

			// Make it gray
			cvtColor(frame1, gray, COLOR_BGR2GRAY);

			// Then he calls for detect and draw

			// For the face
			faceCascade.detectMultiScale(
				gray,
				faces,
				1.1,
				5,
				CASCADE_SCALE_IMAGE,
				Size(30, 30)
			);

			// For the eyes
			/*eyeCascade.detectMultiScale(
			gray,
			eyes,
			1.1,
			2 , // Might need to change
			CASCADE_SCALE_IMAGE,
			Size(30, 30)
			); */

			// Resize

			// draw rectangle, this is for faces.
			for (int i = 0; i < faces.size(); i++)
			{
				Rect recFace = faces[i];
				Scalar colorFace = Scalar(255, 0, 0); // blue color RGB
				rectangle(frame1, recFace, colorFace, 2);

				// Draw eyes
				/*for(int j = 0; j < eyes.size(); j++){
				Rect recEye = eyes[j];
				Point center;
				int radius = cvRound((recEye.width + recEye.height) * 0.25);
				center.x = cvRound(recFace.x + recEye.x + recEye.width * 0.5); //
				center.y = cvRound(recFace.y + recEye.y + recEye.height * 0.5);
				Scalar colorEye = Scalar(0, 0 ,255); // blue color RGB
				circle(frame1, center, radius,colorEye, 2); // maybe remove the last two
				} */

			}

			// Name window
			namedWindow("Face Window", CV_WINDOW_AUTOSIZE);

			// Display the resulting frame
			imshow("Face Window", frame1);

			waitKey(1); // milisec delay WHY IS THIS NEEDED?

						// Press  ESC on keyboard to exit
			char c = (char)waitKey(25);
			if (c == 27) break;
		}

		// When everything done, release the video capture object
		cap.release();

		// Closes all the frames
		destroyAllWindows();

		return 1;
	}
	catch (const std::exception &e)
	{
		return 0;
	}
}