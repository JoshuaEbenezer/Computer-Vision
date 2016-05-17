/*#include<iostream>
#include<vector>
#include<string>
#include<cmath>
#include<stack>
#include<stdio.h>

using namespace std;


vector<char> numbers;
vector<char> ops;

typedef struct point{
	int x;
	int y;
} point;
//audrino
int fd;
/*void sendCommand(const char* command) {
write(fd, command, 1);
cout << "sending " << command[0] << endl;
}*/
//classification
/*void classify(vector<char> oper){
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
	int show();
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
			num.pop();
			n2 = num.top();
			num.pop();
			switch (su)
			{
			case '+':
				n3 = n2 + n1;
				break;
			case '-':
				n3 = n2 - n1;
				break;
			case '/':
				n3 = (float)n2 / (float)n1;
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
float postfix::show(){
	nn = num.top();
	return nn;
}
//preference
int preference(char inpu){
	switch (inpu){
	case '+':case '-':return 1; break;
	case '*':case '/':return 2; break;
	}
}
//infix to postfix
vector<char> infixtopostfix(vector<char> inpu){
	stack<char> store;
	vector<char> postfix;
	for (int i = 0; i<inpu.size(); i++){
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
					store.pop();
				} while (preference(store.top()) >= preference(inpu[i]) && store.size() != 0);
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
/*
int main(){
	/*	fd = open("/dev/ttyACM0", O_RDWR | O_NOCTTY);  //Opening device file
	printf("fd opened as %i\n", fd);
	int waste;
	float value;
	char det;
	float botangle;
	float charangle;
	Mat feed, feed0, outp;
	VideoCapture cap("0");
	point corupp, cordown, cor;
	point bothead;
	point bottail;
	vector<point> loca;
	vector<char> oper;
	vector<point> output;
	vector<char> expression;
	vector<char> infix;
	vector<char> resexp;
	//taking input from camera and filtering and creating output img
	do{
		cap >> feed0;
		feed0 = imread("ima.jpg", 1);
		Mat outp(feed0.rows, feed0.cols, CV_8UC1, 0);
		for (int i = 0; i<feed0.rows; i++){
			for (int j = 0; j<feed0.cols; j++){
				if (feed0.at<Vec3b>(i, j)[0]>245 && feed0.at<Vec3b>(i, j)[1]>245 && feed0.at<Vec3b>(i, j)[2]>245){
					outp.at<uchar>(i, j) = 255;
				}
				else{
					outp.at<uchar>(i, j) = 0;
				}
			}
		}
	} while (0);
	imwrite("tesser.jpg", outp);
	cin >> waste;
	//run tesseract in terminal and make a file out.box containning cordinate

	string filename = "out.box";
	//file contains the ocr output
	ifstream file(filename.c_str());
	while (file >> det >> corupp.x >> corupp.y >> cordown.x >> cordown.y >> waste){
		if (det != '~'){
			cor.x = (corupp.x + cordown.x) / 2;
			cor.y = (corupp.y + cordown.y) / 2;
			loca.push_back(cor);
			oper.push_back(det);
		}
	}
	classify(oper);
	//algorithm for max
	int k = 0, l = 0;

	vector<char> numcopy = numbers;
	vector<char> opscopy = ops;
	char linear1[numbers.size()];
	char linear2[ops.size()];
	for (int i = 0; i<numbers.size(); i++){
		linear1[i] = i;
	}
	for (int i = 0; i<ops.size(); i++){
		linear2[i] = i;
	}
	//making all permutaion of expressions and finding max
	int max = -50;
	do{
		do{
			for (int i = 0; i<numbers.size(); i++){
				numbers[i] = numcopy[linear1[i]];
			}
			for (int i = 0; i<ops.size(); i++){
				ops[i] = opscopy[linear2[i]];
			}
			for (int i = 0; i<oper.size(); i++){
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
	//getting cordinates of final expresiions
	for (int i = 0; i<oper.size(); i++){
		for (int j = 0; j<oper.size(); j++){
			if (resexp[i] == oper[j]){
				output.push_back(loca[j]);
				oper[j] = '~';
			}
		}
	}*/
	//bot position tracking
	/*int g=0;
	while(1){
	cap>>feed;
	bothead.x=0;bothead.y=0;
	bottail.x=0;bottail.y=0;
	int n=0,m=0;
	for(int i=0;i<feed.rows;i++){
	for(int j=0;j<feed.cols;j++){
	if(){
	bothead.y+=i;
	bothead.x+=j;
	n++;
	}
	if(){
	bottail.y+=i;
	bottail.x+=j;
	m++;
	}
	}
	}
	if((bothead.y-bottail.y)>0){
	botangle=acos((bothead.x-bottail.x)/sqrt((bothead.x-bottail.x)*(bothead.x-bottail.x)+(bothead.y-bottail.y)*(bothead.y-bottail.y)));
	}
	else{
	botangle=3.14+acos((bothead.x-bottail.x)/sqrt((bothead.x-bottail.x)*(bothead.x-bottail.x)+(bothead.y-bottail.y)*(bothead.y-bottail.y)));
	}
	if((bothead.y-output[g].y)>0){
	charangle=acos((bothead.x-output[g].x)/sqrt((bothead.x-output[g].x)*(bothead.x-output[g].x)+(bothead.y-output[g].y)*(bothead.y-output[g].y)));
	}
	else{
	charangle=3.14+acos((bothead.x-output[g].x)/sqrt((bothead.x-output[g].x)*(bothead.x-output[g].x)+(bothead.y-output[g].y)*(bothead.y-output[g].y)));
	}
	if(charangle<3.14){
	if(botangle>charangle+3.14 || botangle<charangle){
	if(abs(botangle-charangle)>0.01745){
	sendCommand("a");
	}
	else{
	sendCommand("w");
	}
	}
	else{
	if(abs(botangle-charangle)>0.01745){
	sendCommand("d");
	}
	else{
	sendCommand("w");
	}
	}
	}

	else{
	if(botangle<charangle-3.14 && botangle>charangle){
	if(abs(botangle-charangle)>0.01745){
	sendCommand("d");
	}
	else{
	sendCommand("w");
	}
	}
	else{
	if(abs(botangle-charangle>0.01745)){
	sendCommand("a");
	}
	else{
	sendCommand("w");
	}
	}
	}

	if((bothead.x-output[g].x<3)&&(bothead.x-output[g].x<3)){
	sendCommand("l");
	g++;
	}
	}*/
//}




