/*#include "stdafx.h"
#include <opencv2\opencv.hpp>
#include<math.h>

using namespace cv;
using namespace std;

int main()
{

	Mat im1 = imread("BatmanDarkKnightWallpaper1024.jpg", 1);

	namedWindow("test1");
	namedWindow("test2");

	Mat im2(im1.rows*3, im1.cols*3, CV_8UC3);

	int deg = 0;
	createTrackbar("Degrees", "test2", &deg, 360);
	imshow("test1", im1);


	while (1)
	{
		for (int i = 0; i < im1.rows*3; i++)
		for (int j = 0; j < im1.cols*3; j++)
		{
			int x = int(i*cos(deg*3.1415 / 180) - j*sin(deg*3.1415 / 180));
			int y = int(i*sin(deg*3.1415 / 180) + j*cos(deg*3.1415 / 180));
			if (x < im1.rows&&y < im1.cols)
				im2.at<Vec3b>(x,y) = im1.at<Vec3b>(i,j);
			else
				im2.at<Vec3b>(i, j) = Vec3b(0, 0, 0);

		}
		
			imshow("test2", im2);
		char c = waitKey(5);
		if (c == 'q')
			break;
	}
}*/
