/*#include "stdafx.h"
#include <opencv2\opencv.hpp>
#include<math.h>
#include<queue>
#include<stack>


using namespace cv;
using namespace std;




int main()
{
	Mat im1;
	VideoCapture cap(0);
	
	
	int i, j;
	Mat im2(480,640, CV_8UC1, Scalar(0));
	while (1)
	{
	
		cap >> im1;
		
		for (i = 0; i < im1.rows; i++)
		for (j = 0; j < im1.cols; j++)
		{
			im2.at<uchar>(i, j) = 0;
			if (im1.at<Vec3b>(i,j)[2] >= 80 && im1.at<Vec3b>(i,j)[1] <= 80 && im1.at<Vec3b>(i,j)[0] <= 80)
				im2.at<uchar>(i, j) = 255;
		}
				
	
		imshow("test1", im1);
		imshow("test2", im2);
		
		if (waitKey(30) == 27)
			break;
			
		
		}
		
	}*/
	