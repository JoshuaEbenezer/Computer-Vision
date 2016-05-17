/*#include "stdafx.h"
#include <opencv2\opencv.hpp>

using namespace cv;
using namespace std;

int main()
{

	Mat im1 = imread("BatmanDarkKnightWallpaper1024.jpg", 1);
	namedWindow("test", WINDOW_AUTOSIZE);
	namedWindow("test1", WINDOW_AUTOSIZE);
	Mat im2 = imread("BatmanDarkKnightWallpaper1024.jpg", 1);


	int a=255, b=255, c=255;

	createTrackbar("R", "test1", &a, 255);
	createTrackbar("G", "test1", &b, 255);
	createTrackbar("B", "test1", &c, 255);
	imshow("test", im1);
	
	while (1)
	{
		for (int i = 0; i < im1.rows; i++)
		for (int j = 0; j < im1.cols; j++)
		{
			
			im2.at<Vec3b>(i, j)[0] = c/255.0 * im1.at<Vec3b>(i, j)[0];
			im2.at<Vec3b>(i, j)[2] = a / 255.0 * im1.at<Vec3b>(i, j)[2];
			im2.at<Vec3b>(i, j)[1] = b / 255.0 * im1.at<Vec3b>(i, j)[1];
		
		}
		imshow("test1", im2);
		char d = waitKey(5);
		if (d == 'q')
			break;
	}

}*/
