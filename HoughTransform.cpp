#include "stdafx.h"
#include <opencv2\opencv.hpp>
#include<math.h>

using namespace cv;
using namespace std;

int main()
{

	Mat im1 = imread("line1.png", 0);
	Mat im2(im1.rows, im1.cols, CV_8UC1);
	Mat im3(im1.rows, im1.cols, CV_8UC1,22);

	namedWindow("test1", WINDOW_AUTOSIZE);
	namedWindow("test2", WINDOW_AUTOSIZE);

	int dthresh = 10, a[800][200] = { 0 }, lthresh=500;
	Canny(im1, im2, 100, 150, 3);
	createTrackbar("Dist Thresh", "test2", &dthresh, 30);
	createTrackbar("Line Thresh", "test2", &lthresh, 2000);

	while (1)
	{

	for (int r = 1;r<708;r++)
	for (int theta = 0; theta < 180; theta++)
	{
		a[r][theta] = 0;
		for (int i = 0; i < im1.rows; i++)
		for (int j = 0; j < im1.cols; j++)
		{
			if (im2.at<uchar>(i, j) >= 225)
			{
				if (abs((j*cos(theta*3.1415 / 180.0) + i*sin(theta*3.1415 / 180.0)-r)) <= dthresh)
					a[r][theta]++;


			}
		}
	}
	for (int r = 1; r<708; r++)
	for (int theta = 0; theta < 180; theta++)
	{

		if (a[r][theta] >= lthresh)
		{
			for (int i = 0; i < im1.rows; i++)
			for (int j = 0; j < im1.cols; j++)
			{
				

				if (abs(j*cos(theta*3.1415 / 180.0) + i*sin(theta*3.1415 / 180.0) - r) <= dthresh)
				{
					im3.at<uchar>(i, j) = 255;
				
				}

				else im3.at<uchar>(i, j) = 0;


			}
			imshow("test3", im3);
			imshow("test1", im1);
			waitKey(30);
			//cout << r << " " << theta;
			}
	}



		
		
	}
}