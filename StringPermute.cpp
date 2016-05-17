/*#include<iostream>
#include<vector>
#include<string>
#include<algorithm>
#include <stdlib.h>
#include <math.h>
#include <ctype.h>
#include<stdio.h>
#include<ctype.h>
#include<stack>

using namespace std;


char exp[100];



void permute(char a[], int i, int n)
{
	int j;
	if (i == n)
	{
		for (int k = 0; k < 3; k++)
			::exp[c] = a[k];
		c++;
	}

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


*/