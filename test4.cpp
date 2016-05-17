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

int preference(char inpu)
{
	switch (inpu){
	case '+':case '-':return 1; break;
	case '*':case '/':return 2; break;
	}
}



char* infixtopostfix(char inpu[], int size)
{
	stack<char> store;
	vector<char> postfix;
	char output[100];
	for (int i = 0; i<size; i++){
		if (inpu[i] <= '0' + 9 && inpu[i]>'0'){
			postfix.push_back(inpu[i]);
		}
		else{
			if (store.size() == 0){
				store.push(inpu[i]);
			}
			else if (preference(store.top()) <= preference(inpu[i])){
				store.push(inpu[i]);
			}
			else{
				do{
					postfix.push_back(store.top());
					if (!store.empty()) store.pop();
				} while (preference(store.top()) >= preference(inpu[i]) && store.size() != 0);
				store.push(inpu[i]);
			}
		}
	}
	while (store.size()){
		postfix.push_back(store.top());
		if (!store.empty()) store.pop();
		for (int i = 0; i < postfix.size(); i++){

			output[i] = postfix[i];
		}
	}
	return output;
}
char numbers[51];
char ops[51];

int main()
{
	char exp[100];
	char resexp[100];
    gets(numbers);
	gets(ops);

	//	do
	//{
	//	do
	//{
	for (int l = 0; l <50; l++)
	{
		exp[2 * l] = numbers[l];
		if (l == strlen(numbers) - 1)
			exp[2 * l + 1] = '\0';
		else
			exp[2 * l + 1] = ops[l];
	}
	//fn to convert infix to postfix

	//fn to evaluate postfix
	char itp[100];
	strcpy(itp, infixtopostfix(exp, 100));

	//		} while (next_permutation(ops, ops+49));
	//	} while (next_permutation(numbers, numbers+49));

	puts(itp);
	getchar();

}*/