/*#include "stdafx.h"
#include <opencv2\opencv.hpp>
#include<math.h>
#include<algorithm>

using namespace cv;
using namespace std;

int main()
{

	Mat im1 = imread("BatmanDarkKnightWallpaper1024.jpg", 1);

	namedWindow("test1", WINDOW_AUTOSIZE);
	int ar1[9] = { 0 }, ar2[9] = { 0 }, ar3[9] = { 0 };
	int a, b, c,c1,c2,c3;
	for (int i = 1; i < im1.rows; i++)
	for (int j = 1; j < im1.cols; j++)
	{
		c1 = c2 = c3 = 0;
		a = b = c = 0;
		if (i == 0 && j == 0)
		{
			
			for (int h = i; h <= i + 1; h++)
			for (int k = j; k <= j + 1; k++)
			{
				
				ar1[c1++] = im1.at<Vec3b>(h, k)[0];
				ar2[c2++] = im1.at<Vec3b>(h, k)[1];
				ar3[c3++] = im1.at<Vec3b>(h, k)[2];
				sort(ar1, ar1 + c1);
				sort(ar2, ar2 + c2);
				sort(ar3, ar3 + c3);
				a = ar1[2];
				b = ar2[2];
				c = ar3[2];
			}

		}


		else if (i == 0)
		{
			if (j == im1.cols - 1)
			{
				for (int h = i - 1; h <= i; h++)
				for (int k = j - 1; k <= j; k++)
				{
					ar1[h, k] = im1.at<Vec3b>(h, k)[0];
					ar2[h, k] = im1.at<Vec3b>(h, k)[1];
					ar3[h, k] = im1.at<Vec3b>(h, k)[2];
					sort(ar1, ar1 + 9);
					sort(ar2, ar2 + 9);
					sort(ar3, ar3 + 9);
					a = ar1[5];
					b = ar2[5];
					c = ar3[5];
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

		for (int h = i - 1; h <= i + 1; h++)
		for (int k = j - 1; k <= j + 1; k++)

		{
			a += im1.at<Vec3b>(h, k)[0]/9.0;
			b += im1.at<Vec3b>(h, k)[1]/9.0;
			c += im1.at<Vec3b>(h, k)[2]/9.0;
		}

		im1.at<Vec3b>(i, j)[0] = int(a );
		im1.at<Vec3b>(i, j)[1] = int(b );
		im1.at<Vec3b>(i, j)[2] = int(c );

	}
	imshow("test1", im1);
	waitKey(0);
}

	*/	

		