/*#include "stdafx.h"
#include <opencv2\opencv.hpp>

using namespace cv;
using namespace std;

int main()
{
	int a[256] = { 0 };
	Mat im1 = imread("BatmanDarkKnightWallpaper1024.jpg", 0);
	namedWindow("test", WINDOW_AUTOSIZE);
	namedWindow("test2", WINDOW_AUTOSIZE);
	Mat im2 = imread("BatmanDarkKnightWallpaper1024.jpg", 0);


	for (int i = 0; i < im2.rows; i++)
	for (int j = 0; j < im2.cols; j++)
	{
		a[im1.at<uchar>(i, j)]++;
	}

	Mat im3(500,256, CV_8UC1, 22);
	
	for (int i = 0; i < 256; i++)
	{
		int b =499-int(a[i] * 6000 / (1024 * 768));
			im3.at<uchar>(b,i) = 255;
	
	}
	imshow("test", im3);
	





		
	
	int c = 0,flag;
	for (int i = 0; i <256; i++)
	{
		while (c < (1024*768/ 2))
		{
			c += a[i]; 
			flag = i;
		}
	}
	int thresh = flag;
	for (int i = 0; i < im2.rows; i++)
	for (int j = 0; j < im2.cols; j++)
	{
		if (im1.at<uchar>(i, j)>thresh)
			im2.at<uchar>(i,j)= 255;
		else
			im2.at<uchar>(i,j)= 0;
	}

	imshow("test2", im2);
	waitKey(0);
}*/