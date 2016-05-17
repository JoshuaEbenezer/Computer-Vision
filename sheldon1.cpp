/*#include<iostream>
#include<vector>
#include<string>
#include<cmath>
#include<stack>
#include"opencv/cv.h"
#include"opencv2/ml/ml.hpp"
#include<fstream>
#include<algorithm>
#include<stdio.h>

using namespace std;

void main()
{

	do{
		do{
			for (int i = 0; i < numbers.size(); i++){
				numbers[i] = numcopy[linear1[i]];
			}
			for (int i = 0; i < ops.size(); i++){
				ops[i] = opscopy[linear2[i]];
			}
			for (int i = 0; i < oper.size(); i++){
				if (!(i % 2)){
					expression.push_back(numbers[k]);
					k++;
				}
				else{
					expression.push_back(ops[l]);
					l++;
				}
			}
			infix = infixtopostfix(expression);
			postfix ant;
			ant.calculate(infix);
			value = ant.show();
			if (max<value){
				max = value;
				resexp = expression;
				}
		} while (next_permutation(linear1, linear1 + numbers.size()));
	} while (next_permutation(linear2, linear2 + ops.size()));
}*/