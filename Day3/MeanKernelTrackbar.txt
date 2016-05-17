/*#include "stdafx.h"
#include <opencv2\opencv.hpp>
#include<math.h>

using namespace cv;
using namespace std;

int main()
{

	Mat im1 = imread("BatmanDarkKnightWallpaper1024.jpg", 1);
	Mat im2(im1.rows, im1.cols, CV_8UC3);

	namedWindow("test1", WINDOW_AUTOSIZE);

	int a, b, c;
	
	int sa =0;
	createTrackbar("Threshold", "test1", &sa, 10);
  
	while (1)
	{
		
		for (int i = 0; i < im1.rows; i++)
		for (int j = 0; j < im1.cols; j++)
		{
			a = b = c = 0;
			if (i == 0 && j == 0)
			{

			for (int h = i; h <= i + sa; h++)
			for (int k = j; k <= j + sa; k++)
			{
			a += im1.at<Vec3b>(h, k)[0] ;
			b += im1.at<Vec3b>(h, k)[1] ;
			c += im1.at<Vec3b>(h, k)[2] ;
			}

			}


			else if (i == 0)
			{
			if (j == im1.cols - 1)
			{
				for (int h = i; h <= i + sa; h++)
				for (int k = j - sa ; k <= j; k++)
			{
			a += im1.at<Vec3b>(h, k)[0] ;
			b += im1.at<Vec3b>(h, k)[1] ;
			c += im1.at<Vec3b>(h, k)[2];
			}

			}
			else
			{
			for (int h = i; h <= i + sa; h++)
			for (int k = j - sa; k <= j + sa; k++)
			{
			a += im1.at<Vec3b>(h, k)[0];
			b += im1.at<Vec3b>(h, k)[1] ;
			c += im1.at<Vec3b>(h, k)[2] ;
			}
			}
			}
			else if (j == 0)
			{

			if (i == im1.rows - 1)
			{
			for (int h = i - sa; h <= i; h++)
			for (int k = j; k <= j + sa; k++)
			{
				a += im1.at<Vec3b>(h, k)[0];
			b += im1.at<Vec3b>(h, k)[1] ;
			c += im1.at<Vec3b>(h, k)[2] ;
			}

			}

			else
			{
			for (int h = i - sa; h <= i+sa; h++)
			for (int k = j; k <= j + sa; k++)
			{
				a += im1.at<Vec3b>(h, k)[0] ;
				b += im1.at<Vec3b>(h, k)[1] ;
				c += im1.at<Vec3b>(h, k)[2] ;
			}
			}
			}
			else if (j == im1.cols - 1)
			{
			if (i == im1.rows - 1)
			{
			for (int h = i - sa; h <=i; h++)
			for (int k = j - sa; k <= j; k++)
			{
				a += im1.at<Vec3b>(h, k)[0];
				b += im1.at<Vec3b>(h, k)[1] ;
				c += im1.at<Vec3b>(h, k)[2] ;
			}
			}
			else
			{

				for (int h = i - sa; h <= i + sa; h++)
				for (int k = j - sa; k <= j; k++)
			{
					a += im1.at<Vec3b>(h, k)[0] ;
					b += im1.at<Vec3b>(h, k)[1] ;
					c += im1.at<Vec3b>(h, k)[2] ;
			}
			}
			}
			else if (i == im1.rows - 1)
			{
				for (int h = i - sa; h <= i; h++)
				for (int k = j - sa; k <= j + sa; k++)
			{
					a += im1.at<Vec3b>(h, k)[0] ;
					b += im1.at<Vec3b>(h, k)[1] ;
					c += im1.at<Vec3b>(h, k)[2] ;
			}
			}
			else




			for (int h = i - sa; h <= i + sa; h++)
			for (int k = j - sa; k <= j + sa; k++)

			{
				a += im1.at<Vec3b>(h, k)[0] ;
				b += im1.at<Vec3b>(h, k)[1] ;
				c += im1.at<Vec3b>(h, k)[2];
			}

		
			im2.at<Vec3b>(i, j)[0] = int(a / pow(2*sa+1,2));
			im2.at<Vec3b>(i, j)[1] = int(b/pow(2*sa+1,2));
			im2.at<Vec3b>(i, j)[2] = int(c/pow(2*sa+1,2));
			
			
		}
		
		imshow("test1", im2);
		char c = waitKey(5);
		if (c == 'q')
			break;
	}
}*/
