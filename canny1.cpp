/*#include "stdafx.h"
#include <opencv2\opencv.hpp>
#include<math.h>

using namespace cv;
using namespace std;

int main()
{

	Mat im1 = imread("download.png", 0);
	Mat im2(im1.rows, im1.cols, CV_8UC1);

	namedWindow("test1", WINDOW_AUTOSIZE);


	Canny(im1, im2, 100, 150, 3);
	imshow("test1", im2);
	waitKey(0);

}*/