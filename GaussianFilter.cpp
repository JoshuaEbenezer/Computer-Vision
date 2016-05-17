/*#include "stdafx.h"
#include <opencv2\opencv.hpp>
#include<math.h>

using namespace cv;
using namespace std;

int main()
{

	Mat im1 = imread("BatmanDarkKnightWallpaper1024.jpg", 1);
	Mat im2 = imread("BatmanDarkKnightWallpaper1024.jpg", 1);

	namedWindow("test1", WINDOW_AUTOSIZE);

	float a, b, c;
	float ar[3][3] = { { 1.0 / 16.0, 1.0 / 8.0, 1.0 / 16.0 }, { 1.0 / 8.0, 1.0 / 4.0, 1.0 / 8.0 }, { 1.0 / 16.0, 1.0 / 8.0, 1.0 / 16.0 } };
	for (int i = 1; i < im1.rows-1; i++)
	for (int j = 1; j < im1.cols-1; j++)
	{
		a = b = c = 0;
		if (i == 0 && j == 0)
		{

			for (int h = i; h <= i + 1; h++)
			for (int k = j; k <= j + 1; k++)
			{
				a += im1.at<Vec3b>(h, k)[0] / 9;
				b += im1.at<Vec3b>(h, k)[1] / 9;
				c += im1.at<Vec3b>(h, k)[2] / 9;
			}

		}


		else if (i == 0)
		{
			if (j == im1.cols - 1)
			{
				for (int h = i - 1; h <= i; h++)
				for (int k = j - 1; k <= j; k++)
				{
					a += im1.at<Vec3b>(h, k)[0] / 9.0;
					b += im1.at<Vec3b>(h, k)[1] / 9.0;
					c += im1.at<Vec3b>(h, k)[2] / 9.0;
				}

			}
			else
			{
				for (int h = i; h <= i + 1; h++)
				for (int k = j - 1; k <= j + 1; k++)
				{
					a += im1.at<Vec3b>(h, k)[0] / 9.0;
					b += im1.at<Vec3b>(h, k)[1] / 9.0;
					c += im1.at<Vec3b>(h, k)[2] / 9.0;
				}
			}
		}
		else if (j == 0)
		{

			if (i == im1.rows - 1)
			{
				for (int h = i - 1; h <= i; h++)
				for (int k = j; k <= j + 1; k++)
				{
					a += im1.at<Vec3b>(h, k)[0] / 9.0;
					b += im1.at<Vec3b>(h, k)[1] / 9.0;
					c += im1.at<Vec3b>(h, k)[2] / 9.0;
				}

			}

			else
			{
				for (int h = i - 1; h <= i; h++)
				for (int k = j - 1; k <= j + 1; k++)
				{
					a += im1.at<Vec3b>(h, k)[0] / 9.0;
					b += im1.at<Vec3b>(h, k)[1] / 9.0;
					c += im1.at<Vec3b>(h, k)[2] / 9.0;
				}
			}
		}
		else if (j == im1.cols - 1)
		{
			if (i == im1.rows - 1)
			{
				for (int h = i - 1; h < i; h++)
				for (int k = j - 1; k <= j; k++)
				{
					a += im1.at<Vec3b>(h, k)[0] / 9.0;
					b += im1.at<Vec3b>(h, k)[1] / 9.0;
					c += im1.at<Vec3b>(h, k)[2] / 9.0;
				}
			}
			else
			{

				for (int h = i - 1; h < i + 1; h++)
				for (int k = j - 1; k <= j; k++)
				{
					a += im1.at<Vec3b>(h, k)[0] / 9.0;
					b += im1.at<Vec3b>(h, k)[1] / 9.0;
					c += im1.at<Vec3b>(h, k)[2] / 9.0;
				}
			}
		}
		else if (i == im1.rows - 1)
		{
			for (int h = i - 1; h < i; h++)
			for (int k = j - 1; k <= j + 1; k++)
			{
				a += im1.at<Vec3b>(h, k)[0] / 9.0;
				b += im1.at<Vec3b>(h, k)[1] / 9.0;
				c += im1.at<Vec3b>(h, k)[2] / 9.0;
			}
		}
		else

		for (int h = 0; h <= 2; h++)
		for (int k = 0; k <= 2; k++)

		{
			a += im1.at<Vec3b>(i+h-1, j+k-1)[0]*ar[h][k];
			b += im1.at<Vec3b>(i + h - 1, j + k - 1)[1]*ar[h][k];
			c += im1.at<Vec3b>(i + h - 1, j + k - 1)[2]*ar[h][k];
		}

		im1.at<Vec3b>(i, j)[0] = int(a );
		im1.at<Vec3b>(i, j)[1] = int(b );
		im1.at<Vec3b>(i, j)[2] = int(c );
		
	}
	imshow("test1", im1);
	waitKey(0);
}
*/