/*#include "stdafx.h"
#include <opencv2\opencv.hpp>
#include<math.h>
#include<queue>
#include<stack>
#include<iostream>


using namespace cv;
using namespace std;

Mat im1 = imread("BlobRace2.png", 1);
Mat im2(im1.rows, im1.cols, CV_8UC3);
typedef struct
{
	int x;
	int y;
}point;

int visited[500][500] = { 0 }, c = 0, a[4], cr = 0, cb = 1, cg = 2, cy = 3;
float mx[4] = { 0 }, n;

void dfs(point start,int cc)
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
int maxi(float m[])
{
	int f=0;
	float max;
	max = m[0];
	for (int i = 0; i < 4; i++)
	{
		if (m[i]>max)
		{
			max = m[i];
			f = i;
		}
	}
	return f;


}

int main()
{


	namedWindow("test1", WINDOW_AUTOSIZE);


	for (int i = 1; i < im1.rows - 1; i++)
	for (int j = 1; j < im1.cols - 1; j++)
	{
		if ((im1.at<Vec3b>(i, j)[0] == 255) && (im1.at<Vec3b>(i, j)[1] == 0)&&visited[i][j] == 0)
		{
			point start;
			start.x = i;
			start.y = j;
			dfs(start,cb);
		}
		if ((im1.at<Vec3b>(i, j)[2] == 255) && (im1.at<Vec3b>(i, j)[1] == 255) && visited[i][j] == 0)
		{
			point start;
			start.x = i;
			start.y = j;
			dfs(start, cy);
		}
		if ((im1.at<Vec3b>(i, j)[1] == 255) && visited[i][j] == 0)
		{
			point start;
			start.x = i;
			start.y = j;
			dfs(start,cg);
		}
		
		
		if ((im1.at<Vec3b>(i, j)[2] == 255) && visited[i][j] == 0)
		{
			point start;
			start.x = i;
			start.y = j;
			dfs(start, cr);
		}

	
	
	}


	for (int i = 0; i < im1.rows; i++)
	for (int j = 0; j < im1.cols; j++)
	{
		if (visited[i][j] != 0)
			im2.at<Vec3b>(i, j) = Vec3b(100,100,100);
		else im2.at<Vec3b>(i, j) =Vec3b(0,0, 0);
	}
	
	int w = maxi(mx);
	
	cout << "Winner is " << w;


	imshow("test1", im2);
	waitKey(0);

}*/