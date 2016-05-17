/*#include<opencv2\opencv.hpp>
#include "stdafx.h"
#include<iostream>
#include<math.h>

using namespace std;
using namespace cv;

int main()
{
//	Mat im1(480,640,CV_8UC1,Scalar(0)),im;
	Mat im1 = imread("shapes.png", 0);
	Mat im = imread("shapes.png", 1);
	int i, j;

//	VideoCapture cap(0);
	
	
//	while (1)
	
	//	cap >> im;
//		cvtColor(im, im1, CV_BGR2GRAY);

		for (i = 0; i < im1.rows; i++)
		for (j = 0; j < im1.cols; j++)
		{
			im1.at<uchar>(i, j) = 0;
			if (im.at<Vec3b>(i, j)[2] >= 80 && im.at<Vec3b>(i, j)[1] <= 100 && im.at<Vec3b>(i, j)[0] <= 100)
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
		waitKey(0);
	
}*/