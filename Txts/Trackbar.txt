/*#include "stdafx.h"
#include <opencv2\opencv.hpp>

using namespace cv;
using namespace std;

int main()
{

Mat im1 = imread("BatmanDarkKnightWallpaper1024.jpg", 1);

namedWindow("test1", WINDOW_AUTOSIZE);

Mat im2 = imread("flasche_1024x768.jpg", 1);
int thresh=128;
createTrackbar("Threshold", "test1", &thresh, 100);

	while (1)
	{
		for (int i = 0; i < im1.rows; i++)
		for (int j = 0; j < im1.cols; j++)
		{
			if (im1.at<uchar>(i, j) >= thresh)
				im2.at<uchar>(i, j) = 255;
			else im2.at<uchar>(i, j) = 0;
		}
		imshow("test1", im2);
		char c = waitKey(5);
		if (c == 'q')
			break;
	}
}*/