/*#include<iostream>
#include<vector>
#include<string>
#include<cmath>
#include<stack>
#include<fstream>
#include<algorithm>
#include<stdio.h>
#include<iostream>

using namespace std;



void main()
{

	char a[] = { '1', '2', '3',' ' };
	char b[] = { '+', 'X' };
	char c[5];
	int k, l;
	do
	{
		do
		{
			k = 0;
			l = 0;
			for (int i = 0; i < 5; i++)
			{
				if (i % 2)
				{
					c[i] = b[k];
					k++;
				}
				else 
				{
					c[i] = a[l];
					l++;
				}
				cout << c[i] << " ";
			}
			
		} while (next_permutation(b, b + 2));
	} while (next_permutation(a, a + 3));
		getchar();
}*/