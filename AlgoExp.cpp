/*#include<iostream>
#include<vector>
#include<string>
#include<cmath>
#include<stack>
#include<fstream>
#include<algorithm>
#include<stdio.h>

using namespace std;


vector<char> numbers;
vector<char> ops;

typedef struct point
{
	int x;
	int y;
} point;

void classify(vector<char> oper){
	for (int i = 0; i<oper.size(); i++){
		switch (oper[i]){
		case '+':ops.push_back('+'); break;
		case '-':ops.push_back('-'); break;
		case '/':ops.push_back('/'); break;
		case '*':ops.push_back('*'); break;
		default:numbers.push_back(oper[i]); break;
		}
	}
}
//caluculation of postfix
class postfix{
private:
	stack<float> num;
	float nn, s;
	char su;
public:
	postfix();
	void calculate(vector<char> str);
	float show();
};
postfix::postfix(){
	s = 0;
}
void postfix::calculate(vector<char> str)
{
	float n1, n2, n3;
	while (s<str.size()){
		su = str[s];
		if (su == ' ' || su == '\t')
		{
			s++;
			continue;
		}
		if ((su) >= '0' && su <= '0' + 9)
		{
			nn = su - '0';
			num.push(nn);
		}
		else
		{
			n1 = num.top();
            if(!num.empty()) num.pop();
			n2 = num.top();
			if(!num.empty()) num.pop();
			switch (su)
			{
			case '+':
				n3 = n2 + n1;
				break;
			case '-':
				n3 = n2 - n1;
				break;
			case '/':
				n3 = (float)n2 /(float) n1;
				break;
			case '*':
				n3 = n2 * n1;
				break;
			case '^':
				n3 = pow(n2, n1);
				break;
			default:
				cout << "Unknown operator";
			}

			num.push(n3);
		}
		s++;
	}
}
int preference(char inpu){
	switch (inpu){
	case '-':{
				 return 1;
				 break;
	}
	case '+':{
				 return 2;
				 break; }
	case '*':{
				 return 3;
				 break;
	}
	case '/':
	{return 4;
	break; }
	}
}
//infix to postfix
vector<char> infixtopostfix(vector<char> inpu){
	stack<char> store;
	vector<char> postfix;
	for (int i = 0; i<inpu.size(); i++)
	{
		if (inpu[i] <= '0' + 9 && inpu[i]>'0')
		{
			postfix.push_back(inpu[i]);
		}
		else{
			if (store.size() == 0)
			{
				store.push(inpu[i]);
			}
			else if (preference(store.top()) <= preference(inpu[i]))
			{
				store.push(inpu[i]);
			}
			else{
				do
				{
					postfix.push_back(store.top());
					store.pop();
				} while (store.size() != 0);
				store.push(inpu[i]);
			}
		}
	}
	while (store.size()){
		postfix.push_back(store.top());
		store.pop();
	}
	return postfix;
}
float postfix::show(){
	nn = num.top();
	return nn;
}


void main()
{
	int k = 0, l = 0;
	float value;
	vector<char> oper;
	vector<char> numcopy = numbers;
	vector<char> opscopy = ops;
	vector<char> expression;
	vector<char> infix;
	vector<char> resexp;

	char c;

	for (int i = 0; i < 7; i++)
	{
		cin >> c;
		expression.push_back(c);
	}
	
	
	
	

	infix = infixtopostfix(expression);
			
	
	postfix ant;
			ant.calculate(infix);
			value = ant.show();
			cout << value;
			getchar();
			getchar();
		
	
}
*/