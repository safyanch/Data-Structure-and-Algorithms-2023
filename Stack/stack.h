

#ifndef STACK_H_INCLUDED
#define STACK_H_INCLUDED

#include<iostream>
using namespace std;
#include "node.h"

template<class T>
class Stack
{

	
	
	private:
		
		Node<T> *head;
	
	
	public:
		Stack();//set head to null
		
		~Stack();// ???
		
		void push(T);//add a new node at the start of linked list with data provided as argument
		
		T pop();//return the data stored in first node and delete the first node
		
		T showTop();//return the data stored in first node
		
		bool isEmpty();//return true if there is no node in stack
		
		
};

#endif
