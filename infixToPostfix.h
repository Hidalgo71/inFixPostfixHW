#pragma once
#include <string>  
#include <fstream>
#include <stack>
using namespace std;

class infixToPostfix
{
public:
	void setInfix(string);
	void showInfix();
	void showPostfix();
private:
	void convertToPostfix();
	string  infx;
	string  pfx;
};

void infixToPostfix::setInfix(string)
{
	stack<string> stackA;					//Creating stack for txt
	while ()


}

void infixToPostfix::showPostfix()
{

}