using namespace std;
#include<iostream>
#include <cstring>
#include <cmath>

#include "stack.h"
#include "stack.cpp"
#include "node.cpp"
#include "node.h"


bool prcd(char a, char b)
{
	if(a == '(') 
	return false;
	
	if( (a != '(') && (b == ')') ) 
	return true;
	else 
	return false;
	
	if ( ( (a == '*') || (a == '/') ) && 
		( (b == '+') || (b == '-') ))
	return true;
	
	return false;
}



string infix_to_postfix(string eq)
{
	Stack<char> s;
	const char *input = eq.c_str();
	int input_length = eq.length();
	string output = "";
	
	for(int i=0; i<input_length; i++)
	{
		if((input[i] != '+') &&
			(input[i] != '-') &&
			(input[i] != '*') &&
			(input[i] != '/') &&
			(input[i] != '^') &&
			(input[i] != '(') &&
			(input[i] != ')'))
		{
			output += input[i];
		}
		else
		{
			while( !s.isEmpty() && prcd(s.showTop(), input[i]) )
			{
				output += s.pop();
			}
			if(s.isEmpty() || input[i] != ')')
				s.push(input[i]);
			else
				s.pop();
		}
		
	}
	while(!s.isEmpty())
	{
		output += s.pop();
	}
	return output;
}



double evaluate_postfix(string eq)
{
	Stack<double> s;
	const char *input = eq.c_str();
	int input_length = eq.length();
	
	for(int i=0; i<input_length; i++)
	{
		
		if((input[i] != '+') &&
			(input[i] != '-') &&
			(input[i] != '*') &&
			(input[i] != '/') &&
			(input[i] != '^'))
		{
			s.push(input[i]-48);
		}
		else
		{
			double b = s.pop();
			double a = s.pop();
			
			if(input[i] == '+')
			{
				s.push(a+b);
			}
			else if(input[i] == '-')
			{
				s.push(a-b);
			}
			else if(input[i] == '*')
			{
				s.push(a*b);
			}
			else if(input[i] == '/')
			{
				s.push(a/b);
			}
			else if(input[i] == '^')
			{
				s.push(pow(a,b));
			}
		}
	}
	return s.pop();
}


int main()
{
	cout << evaluate_postfix("6 3+-8 2/+*2^3+") << endl;
	cout << infix_to_postfix("((4+5)*8)*3");
	
	return 0;
}




