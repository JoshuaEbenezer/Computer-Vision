/*#include "stdafx.h"
#include <opencv2\opencv.hpp>
#include<math.h>

using namespace cv;
using namespace std;

int main()
{
	int gx, gy, g;

	Mat im1 = imread("line.png", 0);
	Mat im2(im1.rows, im1.cols, CV_8UC1, 22);
	int ax[3][3] = { -1, 0, 1, -1, 0, 1, -1, 0, 1 };

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
		if (gy != 0)

			im2.at<uchar>(i, j) = g*abs(atan(gx / gy));
		else if (g <= 10)

			im2.at<uchar>(i, j) = g;
		else im2.at<uchar>(i, j) = g*3.1415 / 2;

	}
	imshow("test2", im2);
	waitKey(0);
}*/