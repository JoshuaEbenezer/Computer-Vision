/*#include "stdafx.h"
#include <opencv2\opencv.hpp>

using namespace cv;
using namespace std;

int main()
{
	
	Mat im1 = imread("BatmanDarkKnightWallpaper1024.jpg", 1);
	namedWindow("test", WINDOW_AUTOSIZE);
	namedWindow("test1", WINDOW_AUTOSIZE);

	
	Mat im2(im1.rows*1.5,im1.cols*1.5, CV_8UC3);

	for (int i = 0; i < im1.rows*1.5; i++)
	for (int j = 0; j < im1.cols*1.5; j++)
	{
		im2.at<Vec3b>(i, j) = im1.at<Vec3b>(i/1.5, j/1.5);
	}
	imshow("test", im2);
	imshow("test1", im1);
	waitKey(0);
}*/
