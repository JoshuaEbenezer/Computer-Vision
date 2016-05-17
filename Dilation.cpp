/*#include "stdafx.h"
#include <opencv2\opencv.hpp>
#include<math.h>

using namespace cv;
using namespace std;

int main()
{
	int gx, gy, g,c1,c2;

	Mat im1 = imread("shapes.png", 0);
	Mat im2(im1.rows, im1.cols, CV_8UC1, 22);
	Mat im3(im1.rows, im1.cols, CV_8UC1, 22);
	int ax[3][3] = { -1, 0, 1, -1, 0, 1, -1, 0, 1 };

	namedWindow("test2", WINDOW_AUTOSIZE);
	namedWindow("test3", WINDOW_AUTOSIZE);

	for (int i = 1; i < im1.rows - 1; i++)
	for (int j = 1; j < im1.cols - 1; j++)
	{
		gx = gy = 0;
		for (int h = 0; h <= 2; h++)
		for (int k = 0; k <= 2; k++)
		{
			gx += im1.at<uchar>(i + h - 1, k + j - 1)*ax[h][k];
			gy += im1.at<uchar>(i + h - 1, j + k - 1)*ax[k][h];
		}
		g = sqrt(pow(gx, 2) + pow(gy, 2));
		if (g>255)
			g = 255;
		
		im2.at<uchar>(i, j) = g;
	}

	for (int i = 1; i < im1.rows - 1; i++)
	for (int j = 1; j < im1.cols - 1; j++)
	{
		if (im2.at<uchar>(i, j)>127)
			im3.at<uchar>(i, j) = 255;
		else im3.at<uchar>(i, j) = 0;
	}
	
	for (int l = 0; l <= 100; l++)
	{
		for (int i = 1; i < im1.rows - 1; i++)
		for (int j = 1; j < im1.cols - 1; j++)
		{
			c1 = c2 = 0;
			for (int h = 0; h <= 2; h++)
			for (int k = 0; k <= 2; k++)
			{
				if (im3.at<uchar>(i + h - 1, j + h - 1) <= 127)
					c1++;
				else c2++;

			}
			if (c1 >= 4)
				im3.at<uchar>(i, j) = 0;
			else im3.at<uchar>(i, j) = 255;
		}
	}
	for (int l = 0; l <= 50; l++)
	{
		for (int i = 1; i < im1.rows - 1; i++)
		for (int j = 1; j < im1.cols - 1; j++)
		{
			c1 = c2 = 0;
			for (int h = 0; h <= 2; h++)
			for (int k = 0; k <= 2; k++)
			{
				if (im3.at<uchar>(i + h - 1, j + h - 1) ==0)
					c1++;
				else c2++;

			}
			if (c1 >= 4&&c2!=0)
				im3.at<uchar>(i, j) = 255;
			else if(c2>=4&&c1!=0)
				im3.at<uchar>(i, j) = 0;
			
		}
	}

	
	imshow("test2", im2);
	imshow("test3", im3);

	waitKey(0);
}*/