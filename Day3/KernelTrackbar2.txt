/*#include "stdafx.h"
#include <opencv2\opencv.hpp>
#include<math.h>

using namespace cv;
using namespace std;

int main()
{

	Mat im1 = imread("12313952_200398140297017_5782334479556863167_n.jpg", 1);
	Mat im2 = imread("12313952_200398140297017_5782334479556863167_n.jpg", 1);

	namedWindow("test1", WINDOW_AUTOSIZE);

	int a, b, c;

	int sa = 1;
	createTrackbar("Threshold", "test1", &sa, 10);
	int s = 2 * sa + 1;
	while (1)
	{
		
		for (int i = sa; i < im1.rows-sa; i++)
		for (int j = sa; j < im1.cols-sa; j++)
		{
			a = b = c = 0;
			for (int h = (i - sa); h <= i + sa; h++)
			for (int k = j - sa; k <= j + sa; k++)

			{
				a += (im1.at<Vec3b>(h, k)[0])/pow(2*sa+1,2);
				b += (im1.at<Vec3b>(h, k)[1]) / pow(2*sa+1, 2);
				c += (im1.at<Vec3b>(h, k)[2]) / pow(2*sa+1, 2);
			}


			im2.at<Vec3b>(i, j)[0] = a ;
			im2.at<Vec3b>(i, j)[1] = (b );
			im2.at<Vec3b>(i, j)[2] = (c);


		}

		imshow("test1", im2);
		char c = waitKey(5);
		if (c == 'q')
			break;
	}
}

*/