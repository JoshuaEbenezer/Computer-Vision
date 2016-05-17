/*#include "stdafx.h"
#include <opencv2\opencv.hpp>
#include<math.h>

using namespace cv;
using namespace std;

int main()
{


	Mat im1 = imread("shapes.png", 0);
	Mat im2(im1.rows, im1.cols, CV_8UC1, 22);
	namedWindow("test1", WINDOW_AUTOSIZE);
	namedWindow("test2", WINDOW_AUTOSIZE);

	int a, b, c, max, min;
	
	for (int i = 1; i < im1.rows - 1; i++)
	for (int j = 1; j < im1.cols - 1; j++)
	{
		for (int h = i - 1; h <= i + 1; h++)
		for (int k = j - 1; k <= j + 1; k++)
		{
			max = im1.at<uchar>(i - 1, j - 1);
			if (im1.at<uchar>(h, k)>max)
				max = im1.at<uchar>(h, k);
			min = im1.at<uchar>(i - 1, j - 1);
			if (im1.at<uchar>(h, k) < min)
				min = im1.at<uchar>(h, k);
		}
		if ((max - min) >= 50)
			im2.at<uchar>(i, j) = 255;
	}
	imshow("test1", im1);
	imshow("test2", im2);
	waitKey(0);
}*/



	