/*#include "stdafx.h"
#include <opencv2\opencv.hpp>
#include<math.h>

using namespace cv;
using namespace std; 
int main()
{
	Mat color = imread("flasche_1024x768.jpg", CV_LOAD_IMAGE_COLOR);
	int j;
	Mat im = imread("BatmanDarkKnightWallpaper1024.jpg", 1);
	for (int i = ((color.rows / 2) - 200); i <=(color.rows/2 + 200); i++)
	{
		j = color.cols / 2 - 200;
		while (j < color.cols / 2 + 200)
		{

			if ((pow((j - color.cols / 2), 2) + pow((i - color.rows / 2), 2)) <= 40000)
			{
				color.at<Vec3b>(i, j) = (im.at<Vec3b>(i, j));

			}
			j++;
		}
	
		
	}

	namedWindow("im", WINDOW_AUTOSIZE);
	imshow("im", color);
	waitKey(0);

}*/