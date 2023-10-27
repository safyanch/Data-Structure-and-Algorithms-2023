using namespace std;
#include<iostream>
#include "queue.h"
template<class T>
Queue<T> :: Queue()
{
	head = NULL;
}

template<class T>	
Queue<T> ::~Queue()
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
void Queue<T> :: enqueue(T a)
{
	Node<T> *temp = new Node<T>(a);
	if(head == NULL)
	{
		head = temp;
	}
	else
	{
		Node<T>* current = head;
		while(current->getNextPtr() != NULL)
		{
			current = current->getNextPtr();
		}
		current->setNextPtr(temp);
	}
}
template<class T>
T Queue<T> :: dequeue()
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
T Queue<T> :: peek()
{
	if(head != NULL)
	{
		return head->getData();
	}
}
template<class T>
bool Queue<T> :: isEmpty()
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

