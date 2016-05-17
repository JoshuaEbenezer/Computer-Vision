/*#include "stdafx.h"
#include <opencv2\opencv.hpp>

using namespace cv;
using namespace std;

int main()
{
	int a[256] = { 0 }, b[256] = { 0 }, c[256] = { 0 },k;
	Mat im1 = imread("BatmanDarkKnightWallpaper1024.jpg", 1);
	namedWindow("test", WINDOW_AUTOSIZE);
	
	Mat im2 = imread("BatmanDarkKnightWallpaper1024.jpg", 1);


	for (int i = 0; i < im2.rows; i++)
	for (int j = 0; j < im2.cols; j++)
	{
		a[im1.at<Vec3b>(i, j)[0]]++;
		b[im1.at<Vec3b>(i, j)[1]]++;

		c[im1.at<Vec3b>(i, j)[2]]++;


	}


	Mat im3(500, 256, CV_8UC3, Scalar(255, 255, 255));

	for (int i = 0; i < 256; i++)
	{
		int a1 = int(499-a[i] * 6000 / (1024 * 768));
		for (k = a1; k >0;k--)
		im3.at<Vec3b>(k, i) = Vec3b(255, 0, 0);

	}
	imshow("test", im3);
	waitKey(0);
}*/