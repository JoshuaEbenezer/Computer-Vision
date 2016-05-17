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

#include <typeinfo>


using namespace std;




int preference(char inpu)
{
	switch (inpu){
	case '+':case '-':return 1; break;
	case '*':case '/':return 2; break;
	}
}

char* infixtopostfix(char inpu[], int size){
	stack<char> store;
	vector<char> postfix;
	char output[10];
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

int main()
{
	char exp[20];
	char resexp[20];

	gets(exp);
	strcpy(resexp, infixtopostfix(exp, 5));
	puts(resexp);
	getchar();
}*/