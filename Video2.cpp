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
	Mat im1;

	VideoCapture cap(0);
	int f1 = 0;

	while (1)
	{
		cap >> im1;

		Mat im2;
		blur(im1, im2, Size(3, 3));
		imshow("test1", im2);

		Mat im3;
		Canny(im2, im3, 200, 75, 3);
		imshow("test2", im3);



		

		if (waitKey(30) == 27)
			break;


	}
}*/