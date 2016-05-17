/*#include "stdafx.h"
#include <opencv2\opencv.hpp>

using namespace cv;
using namespace std;

int main()
{
	Mat im1 = imread("flasche_1024x768.jpg", 0);
	namedWindow("test", WINDOW_AUTOSIZE);

	namedWindow("test2", WINDOW_AUTOSIZE);
	namedWindow("test3", WINDOW_AUTOSIZE);
	Mat im2 = imread("flasche_1024x768.jpg", 1);
	int a, b, c,d,max,min,e,i,j;
	Mat im3 = imread("flasche_1024x768.jpg", 0);
	Mat im4 = imread("flasche_1024x768.jpg", 0);
	for (i = 0; i < im2.rows;i++)
	for (j = 0; j < im2.cols; j++)
	{
		a = im2.at<Vec3b>(i, j)[0];
		b = im2.at<Vec3b>(i, j)[1];
		c = im2.at<Vec3b>(i, j)[2];
		d = (a + b + c) / 3;
		max = a;
		if (b > max)
			max = b;
		if (c > max)
			max = c;
		min = a;
		if (b < min)
			min = b;
		if (c < min)
			min = c;
		e = (max + min) / 2;
		im3.at<uchar>(i, j) = d;
		im4.at<uchar>(i, j) = e;
	}

	imshow("test", im1);
	imshow("test2", im3);
	imshow("test3", im4);
	waitKey(0);
}*/