/*#include "stdafx.h"
#include <opencv2\opencv.hpp>

using namespace cv;
using namespace std;

int main()
{
	Mat im1(120,300,CV_8UC3,Scalar(0,0,0));
	int rows = im1.rows;
	int cols = im1.cols;
	for (int i = 0; i < (cols); i++)
	{
		for (int j = 0; j < (rows/3); j++)
			im1.at<Vec3b>(j,i) = Vec3b(0, 0, 255);
		for (int j = (rows / 3); j < ( 2* rows/3); j++)
			im1.at<Vec3b>(j,i) = Vec3b(255,0,0);
		for (int j = (2 * rows / 3); j < (rows); j++)
			im1.at<Vec3b>(j,i) = Vec3b(0, 255,0);


	}
	imshow("test", im1);
	waitKey(0);
	return 0;
}*/