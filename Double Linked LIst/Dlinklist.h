

#ifndef DLINKLIST_H_INCLUDED
#define DLINKLIST_H_INCLUDED

#include<iostream>
using namespace std;
#include "Dnode.h"

template<class T>
class DLinklist
{
	template<class U>
	friend ostream& operator<<(ostream&, DLinklist<U> &) ;//display all nodes' data elements
	
	
	
	private:
		int counter;
		DNode<T> *head;
		DNode<T> *current;
		
		void start();
		void end();
		void next();
		void pre();
	
	
	
	public:
		DLinklist();//set head to null and counter to 0
		
		~DLinklist();// ???
		
		void addElement(T);//add a new node at the end of linked list
		
		void addElementAt(int, T);//add a new node at specific location(if possible) in linklist
		
		void deleteElementAt(int);//delete a node at specific location
		
		void deleteElement(T);//delete a node when find the provided element in linked list
		
		bool findElement (T);//return true if provided element exists in linked list
		
		T getElementAT(int);//return the element at provided index
		
		void updateElementAt (int, T);//update the element at provided node location
		
		void makeEmpty();//de-allocate all nodes in linked list

		
};

#endif
