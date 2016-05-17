/*#include "stdafx.h"
#include <opencv2\opencv.hpp>
#include<math.h>

using namespace cv;
using namespace std;


int main()
{
	// Read image
	Mat im,im1(480,640,CV_8UC1,Scalar(0));
	int i, j;
	VideoCapture cap(0);
	while (1)
	{
		cap >> im;
		for (i = 0; i < im1.rows; i++)
		for (j = 0; j < im1.cols; j++)
		{
			im1.at<uchar>(i, j) = 0;
			if (im.at<Vec3b>(i, j)[2] >= 80 && im.at<Vec3b>(i, j)[1] <= 80 && im.at<Vec3b>(i, j)[0] <= 80)
				im1.at<uchar>(i, j) = 255;
		}


		// Set up the detector with default parameters.
		SimpleBlobDetector detector;

		// Detect blobs.
		std::vector<KeyPoint> keypoints;
		detector.detect(im1, keypoints);

		// Draw detected blobs as red circles.
		// DrawMatchesFlags::DRAW_RICH_KEYPOINTS flag ensures the size of the circle corresponds to the size of blob
		Mat im_with_keypoints;
		drawKeypoints(im1, keypoints, im_with_keypoints, Scalar(0, 0, 255), DrawMatchesFlags::DRAW_RICH_KEYPOINTS);

		// Show blobs
		imshow("keypoints", im_with_keypoints);
		if(waitKey(5)==27)
			break;

	}
}

*/