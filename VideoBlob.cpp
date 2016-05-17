/*#include "stdafx.h"
#include <opencv2\opencv.hpp>
#include<math.h>
#include<queue>
#include<stack>
#include<iostream>


using namespace cv;
using namespace std;

Mat im1;

typedef struct
{
	int x;
	int y;
}point;

int visited[500][500] = { 0 }, c = 0, a[4], cr = 0, cb = 1, cg = 2, cy = 3;
float mx[4] = { 0 }, n;

void dfs(point start, int cc,Mat im1)
{
	n = 0;
	c++;
	stack<point> s;
	s.push(start);
	while (!s.empty())
	{
		point A = s.top();
		s.pop();
		mx[cc] += A.y;
		n++;
		visited[A.x][A.y] = c;
		for (int h = A.x - 1; h <= A.x + 1; h++)
		for (int k = A.y - 1; k <= A.y + 1; k++)
		{
			point B;
			B.x = h;
			B.y = k;
			if ((im1.at<uchar>(h, k) == 255) && visited[B.x][B.y] == 0)
			{

				s.push(B);
				

			}

		}
	}
	mx[cc] = mx[cc] / n;

}


int main()
{


	namedWindow("test1", WINDOW_AUTOSIZE);

	VideoCapture cap(0);
	while (1)
	{
		mx[4] = { 0 };
		visited[500][500] = { 0 }, c = 0;
		cap >> im1;
		Mat im2(480, 640, CV_8UC1,Scalar(0));
		for (int i = 1; i < im1.rows - 1; i++)
		for (int j = 1; j < im1.cols - 1; j++)
		{
			if ((im1.at<Vec3b>(i, j)[0] >= 255) && visited[i][j] == 0)
			{
				point start;
				start.x = i;
				start.y = j;
				dfs(start, cb,im1);
			}
			if ((im1.at<Vec3b>(i, j)[2] >= 230) && (im1.at<Vec3b>(i, j)[1] >= 230) && visited[i][j] == 0)
			{
				point start;
				start.x = i;
				start.y = j;
				dfs(start, cy,im1);
			}
			if ((im1.at<Vec3b>(i, j)[1] >= 230) && visited[i][j] == 0)
			{
				point start;
				start.x = i;
				start.y = j;
				dfs(start, cg,im1);
			}


			if ((im1.at<Vec3b>(i, j)[2] >= 230) && visited[i][j] == 0)
			{
				point start;
				start.x = i;
				start.y = j;
				dfs(start, cr,im1);
			}



		}


		for (int i = 1; i < im1.rows-1; i++)
		for (int j = 1; j < im1.cols-1; j++)
		{
			if (visited[i][j] != 0)
				im2.at<uchar>(i, j) =255;
			else im2.at<uchar>(i, j) = 0;
		}
		


		imshow("test1", im2);
		if ( waitKey(30) == 27)
			break;

	}
	

	
}*/