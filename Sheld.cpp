/*#include "stdafx.h"
#include <opencv2\opencv.hpp>
#include<math.h>
#include<iostream>


using namespace cv;
using namespace std;


void main()
{

	Mat outp = imread("img2.jpg", 0);
	vector<vector<Point> > contours;
	vector<Vec4i> hierarchy;

	//	vector<Rect> rectangle;


	findContours(outp, contours, hierarchy, CV_RETR_EXTERNAL, CV_CHAIN_APPROX_SIMPLE, Point(0, 0));

	Mat chr(1200,1200, CV_8UC1, Scalar(255, 255, 255));


	//rectangle.push_back(react);
	Scalar color(0, 0, 0);

	//character.push_back(react);
	drawContours(chr, contours, -1, color);


	imshow("orig", outp);
	imshow("orig1",chr);
	waitKey(0);

}
*/