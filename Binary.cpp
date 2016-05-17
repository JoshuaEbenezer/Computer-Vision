/*#include<iostream>
#include<vector>
#include<string>
#include<cmath>
#include<stack>
#include"opencv2/opencv.hpp"
#include<fstream>
#include<algorithm>
#include<stdio.h>

using namespace std;
using namespace cv;

void main()
{
	Mat im = imread("im.jpg", 1);
	Mat im2 = imread("im.jpg", 0);

		
					namedWindow("Control", CV_WINDOW_AUTOSIZE); //create a window called "Control"

			int iLowH = 0;
			int iHighH = 179;

			int iLowS = 0;
			int iHighS = 255;

			int iLowV = 0;
			int iHighV = 255;

			//Create trackbars in "Control" window
			cvCreateTrackbar("LowH", "Control", &iLowH, 179); //Hue (0 - 179)
			cvCreateTrackbar("HighH", "Control", &iHighH, 179);

			cvCreateTrackbar("LowS", "Control", &iLowS, 255); //Saturation (0 - 255)
			cvCreateTrackbar("HighS", "Control", &iHighS, 255);

			cvCreateTrackbar("LowV", "Control", &iLowV, 255); //Value (0 - 255)
			cvCreateTrackbar("HighV", "Control", &iHighV, 255);

				Mat imgHSV;

				cvtColor(im, imgHSV, COLOR_BGR2HSV); //Convert the captured frame from BGR to HSV

				Mat imgThresholded;

				inRange(imgHSV, Scalar(iLowH, iLowS, iLowV), Scalar(iHighH, iHighS, iHighV), imgThresholded); //Threshold the image

				//morphological opening (remove small objects from the foreground)
				erode(imgThresholded, imgThresholded, getStructuringElement(MORPH_ELLIPSE, Size(5, 5)));
				dilate(imgThresholded, imgThresholded, getStructuringElement(MORPH_ELLIPSE, Size(5, 5)));

				//morphological closing (fill small holes in the foreground)
				dilate(imgThresholded, imgThresholded, getStructuringElement(MORPH_ELLIPSE, Size(5, 5)));
				erode(imgThresholded, imgThresholded, getStructuringElement(MORPH_ELLIPSE, Size(5, 5)));

				imshow("Thresholded Image", imgThresholded); //show the thresholded image
				imshow("Original", im); //show the original image

				waitKey(0);

			}


			*/