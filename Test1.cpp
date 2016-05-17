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


typedef struct point{
	int x;
	int y;
} point;

const int MAX = 110;
// Function to convert Infix expression to postfix 
//string infixtopostfix(char expression[], int size);

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
					if(!store.empty()) store.pop();
				} while (preference(store.top()) >= preference(inpu[i]) && store.size() != 0);
				store.push(inpu[i]);
			}
		}
	}
	while (store.size()){
		postfix.push_back(store.top());
		if (!store.empty()) store.pop();
		for (int i = 0; i < postfix.size(); i++){

			output[i]= postfix[i];
		}
	}
	return output;
}

class postfix
{
private:

	int stack[MAX];
	int top, nn;
	char *s;
public:
	postfix();
	void setexpr(char* str);
	void push(int item);
	int pop();
	void calculate();
	int show();
};
postfix::postfix()
{
	top = -1;
}
void postfix::setexpr(char* str)
{
	s = str;
}
void postfix::push(int item)
{
	if (top == MAX - 1)
		cout << endl << "Stack is full";
	else
	{
		top++;
		stack[top] = item;
	}
}
int postfix::pop()
{
	if (top == -1)
	{
		cout << endl << "Stack is empty";
		return NULL;
	}
	int data = stack[top];
	top--;
	return data;
}
void postfix::calculate()
{
	int n1, n2, n3;
	while (*s)
	{
		if (*s == ' ' || *s == '\t')
		{
			s++;
			continue;
		}
		if (isdigit(*s))
		{
			nn = *s - '0';
			push(nn);
		}
		else
		{
			n1 = pop();
			n2 = pop();
			switch (*s)
			{
			case '+':
				n3 = n2 + n1;
				break;
			case '-':
				n3 = n2 - n1;
				break;
			case '/':
				n3 = n2 / n1;
				break;
			case '*':
				n3 = n2 * n1;
				break;
			case '^':
				n3 = pow(n2, n1);
				break;
			default:
				cout << "Unknown operator";
				exit(1);
			}

			push(n3);
		}
		s++;
	}
}
int postfix::show()
{
	nn = pop();
	return nn;
}

int main()
{


char numbers[50] = {' '};
char ops[50] = {' '};

	postfix q;
	char exp[100];
	char resexp[100];
	int a, maxout = -100;
	
	gets(numbers);
	gets(ops);



//	do
	//{
	//	do
		//{
			for (int l = 0; l < strlen(numbers); l++)
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
			q.setexpr(itp);
			q.calculate();
			a = q.show();
		
//		} while (next_permutation(ops, ops+49));
//	} while (next_permutation(numbers, numbers+49));


	
	
	
	cout << a;
    printf("%c",resexp);
	getchar();

}*/