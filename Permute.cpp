/*#include<iostream>
#include"stdafx.h"
#include<opencv2/opencv.hpp>
#include<stdio.h>
#include<algorithm>


using namespace std;


void permute(char a[],int i, int n)
{
	cout << "\n";
	int j;
	if (i == n)
	{
		for (int k = 0; k < 3;k++)
		exp[k]=a[k];
	

	else
	{
		for (j = i; j <= n; j++)
		{
			swap(a[i], a[j]);
			permute(a, i + 1, n);
			swap(a[i], a[j]);
		}
	
	}
}


void main()
{

	char a[] = { '1', '2', '3' };

	permute(a, 0, 2);

	getchar();
}*/