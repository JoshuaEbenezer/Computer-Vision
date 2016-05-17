/*#include "stdafx.h"
#include <opencv2\opencv.hpp>
#include<math.h>
#include<queue>
#include<stack>
#include<iostream>


using namespace cv;
using namespace std;

Mat im1 = imread("blob.png", 0);
Mat im2(im1.rows, im1.cols, CV_8UC1);
typedef struct
{
	int x;
	int y;
}point;

int visited[500][500] = { 0 },c=0;

void dfs(point start)
{
	c++;
	stack<point> s;
	s.push(start);
	while (!s.empty())
	{
		point A = s.top();
		s.pop();
		visited[A.x][A.y] = c;
		for (int h = A.x-1 ; h <= A.x + 1;h++)
		for (int k = A.y-1 ; k <= A.y + 1; k++)
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
}


int main()
{


	namedWindow("test1", WINDOW_AUTOSIZE);


	for (int i = 1; i < im1.rows-1; i++)
	for (int j = 1; j < im1.cols-1; j++)
	{
		if ((im1.at<uchar>(i, j) == 255) && visited[i][j] == 0)
		{
			point start;
	        start.x = i;
		    start.y = j;
			dfs(start);
		}
	}
	for (int i = 0; i < im1.rows; i++)
	for (int j = 0; j < im1.cols; j++)
	{
		if (visited[i][j] != 0)
			im2.at<uchar>(i, j) =100;
		else im2.at<uchar>(i, j) = 0;
	}

	imshow("test1", im2);
	waitKey(0);

}*/