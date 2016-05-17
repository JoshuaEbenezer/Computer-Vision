/*#include "stdafx.h"
#include <opencv2\opencv.hpp>
#include<math.h>
#include<queue>
#include<stack>
#include<iostream>


using namespace cv;
using namespace std;

int main()
{
	Mat im1 = imread("BlobRace.png", 0);
	Mat im2;
	blur(im1, im2, Size(3, 3));
	imshow("test1", im2);

	Mat im3;
	Canny(im2, im3, 200, 75, 3);
	imshow("test2", im3);



	vector<vector<Point> > contours;
	vector<Vec4i> hierarchy;
	findContours(im3, contours, hierarchy, CV_RETR_TREE, CV_CHAIN_APPROX_SIMPLE, Point(0, 0));

	Mat drawing = Mat::zeros(im3.size(), CV_8UC3);
	for (int i = 0; i< contours.size(); i++)
	{
		Scalar color = Scalar(0,0,255);
		drawContours(drawing, contours, i, color, 2, 8, hierarchy, 0, Point());
	}
	namedWindow("Contours", CV_WINDOW_AUTOSIZE);
	imshow("Contours", drawing);
	waitKey(0);
}*/