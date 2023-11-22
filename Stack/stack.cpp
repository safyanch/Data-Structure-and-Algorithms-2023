using namespace std;
#include<iostream>
#include "stack.h"



template<class T>
Stack<T> :: Stack()
{
	head = NULL;
}

template<class T>	
Stack<T> ::~Stack()
{
	Node<T>* current = head;
	while(current!= NULL)
	{
		Node<T> *temp = current;
		current = current->getNextPtr();
		delete temp;
	}
}


template<class T>	
void Stack<T> :: push(T a)
{
	Node<T> *temp = new Node<T>(a);
	temp->setNextPtr(head);
	head = temp;
}




template<class T>
T Stack<T> :: pop()
{
	if(head != NULL)
	{
		T temp_data = head->getData();
		Node<T> *temp = head;
		head = head->getNextPtr();
		delete temp;
		return temp_data;
	}
}



template<class T>
T Stack<T> :: showTop()
{
	if(head != NULL)
	{
		return head->getData();
	}
}


template<class T>
bool Stack<T> :: isEmpty()
{
	if(head != NULL)
	{
		return false;
	}
	else
	{
		return true;
	}
}

