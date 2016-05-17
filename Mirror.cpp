/*#include "stdafx.h"
#include <opencv2\opencv.hpp>

using namespace cv;
using namespace std;

int main()
{
	Mat color = imread("BatmanDarkKnightWallpaper1024.jpg", CV_LOAD_IMAGE_COLOR);
	namedWindow("color", WINDOW_AUTOSIZE);
	int a, b,c;

	imshow("color", color);

	Mat mirror = imread("BatmanDarkKnightWallpaper1024.jpg", CV_LOAD_IMAGE_COLOR);
	for (int i = 0; i < color.rows; i++)
	{
		for (int j = 0; j < color.cols; j++)
		{
			a = color.at<Vec3b>(i, (color.cols - j-1))[0];
			b = color.at<Vec3b>(i, (color.cols - j-1))[1];
			c = color.at<Vec3b>(i, (color.cols - j-1))[2];

			mirror.at<Vec3b>(i, j) = Vec3b(a,b,c);
		}
	}

	namedWindow("mirror", WINDOW_AUTOSIZE);

	imshow("mirror", mirror);
	waitKey(0);
	return 0;
}*/