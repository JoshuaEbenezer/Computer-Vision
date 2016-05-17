/*#include "stdafx.h"
#include <opencv2\opencv.hpp>

using namespace cv;
using namespace std;

int main()
{

	Mat im1 = imread("shapes.png", 1);

	namedWindow("test1", WINDOW_AUTOSIZE);

	Mat im2(im1.rows, im1.cols, CV_8UC3, Scalar(0,0,0));

		int a = 0, b = 0, c = 0,t=20;

	createTrackbar("R", "test1", &a, 255);
	createTrackbar("G", "test1", &b, 255);
	createTrackbar("B", "test1", &c, 255);
	createTrackbar("Tolerance", "test1", &t, 255);

	while (1)
	{
		for (int i = 0; i < im1.rows; i++)
		for (int j = 0; j < im1.cols; j++)
		{
			if (im1.at<Vec3b>(i, j)[0] <= c + t && im1.at<Vec3b>(i, j)[0] >= c - t && im1.at<Vec3b>(i, j)[1] <= b + t && im1.at<Vec3b>(i, j)[1] >= b - t && im1.at<Vec3b>(i, j)[2] <= a + t && im1.at<Vec3b>(i, j)[2] >= a - t)
				im2.at<Vec3b>(i, j) = im1.at<Vec3b>(i, j);
			else im2.at<Vec3b>(i, j) = Vec3b(0, 0, 0);
		}
		imshow("test1", im2);
		char c = waitKey(5);
		if (c == 'q')
			break;
	}
}
*/