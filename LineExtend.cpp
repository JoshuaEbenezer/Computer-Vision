/*#include "stdafx.h"
#include <opencv2\opencv.hpp>
#include<math.h>

using namespace cv;
using namespace std;

int main()
{
	int gx, gy, g,flag1=0,flag2=0,mflag=0,mflag1=0,flag3=0,flag4=0;

	Mat im1 = imread("line1.png", 0);
	Mat im2(im1.rows, im1.cols, CV_8UC1, 22);
	int ax[3][3] = { -1, 0, 1, -2, 0, 2, -1, 0, 1 };


	namedWindow("test2", WINDOW_AUTOSIZE);

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
		if (g >= 200 && mflag == 10)
		{
			flag3 = i;
			flag4 = j;
			
		}
		if (g == 255&&mflag==100)
		{
			flag1 =i;
			flag2 = j;
			
		
		}
		mflag++;
	
	}
    for (int i = 1; i < im1.rows - 1; i++)
	for (int j = 1; j < im1.cols - 1; j++)
	{
		if (j = ((flag4 - flag2) / (flag3 - flag1)*(i-flag3)+flag4))
		im2.at<uchar>(i, j) = 255;
	}
	cout << mflag;
	imshow("test2", im2);
	waitKey(0);
}*/