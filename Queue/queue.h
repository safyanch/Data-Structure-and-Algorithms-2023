

#ifndef QUEUE_H_INCLUDED
#define QUEUE_H_INCLUDED

#include<iostream>
using namespace std;
#include "node.h"
template<class T>
class Queue
{
	private:
	
		Node<T> *head;
	
	
	public:
		Queue();//set head to null
		
		~Queue();// ???
		
		void enqueue(T);//add a new node at the end of linked list with data provided as argument
		
		T dequeue();//return the data stored in first node and delete the first node
		
		T peek();//return the data stored in first node
		
		bool isEmpty();//return true if there is no node in Queue
		
		
};

#endif
