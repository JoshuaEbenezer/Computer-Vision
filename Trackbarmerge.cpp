/*#include "stdafx.h"
#include <opencv2\opencv.hpp>

using namespace cv;
using namespace std;

int main()
{

	Mat im1 = imread("BatmanDarkKnightWallpaper1024.jpg", 1);
	
	namedWindow("test1", WINDOW_AUTOSIZE);

	Mat im2 = imread("flasche_1024x768.jpg", 1);

	Mat im3 = imread("BatmanDarkKnightWallpaper1024.jpg", 1);

	int per = 0;
	createTrackbar("Percentage", "test1", &per, 100);
	

	while (1)
	{
		for (int i = 0; i < im1.rows; i++)
		for (int j = 0; j < im1.cols; j++)
		{
			im3.at<Vec3b>(i, j) = (per / 100.0 * im2.at<Vec3b>(i, j) + (1 - per / 100.0)*im1.at<Vec3b>(i, j));
		}
		imshow("test1", im3);
		char c = waitKey(5);
		if (c == 'q')
			break;
	}

}*/