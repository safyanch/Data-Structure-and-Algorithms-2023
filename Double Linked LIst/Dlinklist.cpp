using namespace std;
#include<iostream>
#include "Dlinklist.h"

template <class U>
ostream& operator<<(ostream &out, DLinklist<U> &d)
{
	d.start();
	for(int i=0; i<d.counter; i++)
	{
		out << *(d.current) << " ";
		d.next();
	}

	return out;
	
}


template<class T>
DLinklist<T> :: DLinklist()
{
	counter = 0;
	head = NULL;
	start();
}

template<class T>	
DLinklist<T> ::~DLinklist()
{
	makeEmpty();
}

template<class T>	
void DLinklist<T> :: addElement(T d)
{
	addElementAt(counter+1, d);
}

template<class T>	
void DLinklist<T> :: addElementAt(int ind, T a)
{
	if((ind <= 0) || (ind > counter+1))
	{
		cout << "Bad Index" << endl;
	}
	else if(ind == 1 && counter == 0)
	{
		DNode<T> *temp = new DNode<T>(a);
		head = temp;
		counter++;
	}
	else if(ind == 1 && counter > 0)
	{
		DNode<T> *temp = new DNode<T>(a);
		temp->setNextPtr(head);
		head->setPrePtr(temp);
		head = temp;
		counter++;
	}
	else if(ind == counter+1)
	{
		DNode<T> *temp = new DNode<T>(a);
		start();
		for(int i = 1; i < ind-1; i++)
		{
			next();
		}
		
		temp->setPrePtr(current);
		current->setNextPtr(temp);
		counter++;
	}
	else
	{
		
		DNode<T> *temp = new DNode<T>(a);
		start();
		for(int i = 1; i < ind-1; i++)
		{
			next();
		}
				
		temp->setNextPtr(current->getNextPtr());
		temp->setPrePtr(current);
		current->setNextPtr(temp);
		temp->getNextPtr()->setPrePtr(temp);
		counter++;
	}
}




template<class T>
void DLinklist<T> :: deleteElementAt(int ind)
{
	if(head == NULL)
	{
		return;
	}
	else if((ind <= 0) || (ind > counter+1))
	{
		cout << "Bad Index" << endl;
		return;
	}
	
	else if(ind == 1 && counter == 1)
	{
		DNode<T> *temp = head;
		head = NULL;
		counter--;
		delete temp;
		return;
	}
	else if(ind == 1 && counter > 1)
	{
		DNode<T> *temp = head;
		head = temp->getNextPtr();
		head->setPrePtr(NULL);
		counter--;
		delete temp;
		return;
	}
	else if(ind == counter)
	{
		start();
		DNode<T> *previous = NULL;
		for(int i = 1; i < ind; i++)
		{		
			previous = current;
			next();
		}
		previous->setNextPtr(NULL);
		counter--;
		delete current;
		return;
	}
	else
	{
		start();
		DNode<T> *previous = NULL;
		for(int i =1; i < ind; i++)
		{
			previous = current;
			next();
		}
		previous->setNextPtr(current->getNextPtr());
		previous->getNextPtr()->setPrePtr(previous);
		counter--;
		delete current;
		return;
	}
}


template<class T>	
void DLinklist<T> :: deleteElement(T d)
{
	
	if(head == NULL)
	{
		return;
	}
	else 
	{
		start();
		for(int i=1; i<=counter; i++)
		{
			if(current->getData() == d)
			{
				deleteElementAt(i);
				i = counter+1;
			}
			next();
		}
	}
}

template<class T>	
bool DLinklist<T> :: findElement (T d)
{
	if(head == NULL)
	{
		return false;
	}
	else if(d == (head->getData()))
	{
		return true;
	}
	else
	{
		start();
		for(int i=1; i<counter; i++)
		{
			next();
			if(d == (current->getData()))
			{
				return true;
			}
		}
		return false;
	}
}


template<class T>	
T DLinklist<T> :: getElementAT(int ind)
{
	if(head == NULL)
	{
		return 0;
	}
	else if((ind <= 0) || (ind > counter))
	{
		return 0;
	}
	else if(ind == 1)
	{
		return (head->getData());
	}
	else
	{
		start();
		for(int i = 1; i < ind; i++)
		{
			next();
		}
		return (current->getData());
	}
}



template<class T>	
void DLinklist<T> :: updateElementAt (int ind, T d)
{
	if(head == NULL)
	{
		return;
	}
	else if((ind <= 0) || (ind > counter))
	{
		cout << "Bad Index" << endl;
		return;
	}
	else if(ind == 1)
	{
		head->setData(d);
		return;
	}
	else
	{
		start();
		for(int i = 1; i < ind; i++)
		{
			next();
		}
		current->setData(d);
		return;
	}
}




template<class T>	
void DLinklist<T> :: makeEmpty()
{
	if(head != NULL)
	{
		start();
		DNode<T> *previous;
		for(int i=1; i<counter; i++)
		{
			previous = current;
			next();
			delete previous;
		}
		delete current;
		current = 0;
		counter = 0;
		head = NULL;
	}
}

template<class T>
void DLinklist<T> :: start()
{
	current = head;
}

template<class T>
void DLinklist<T> :: end()
{
	start();
	for(int i=1; i<counter; i++)
	{
		current = current -> getNextPtr();
	}
}

template<class T>
void DLinklist<T> :: next()
{
	current = current -> getNextPtr();
}

template<class T>
void DLinklist<T> :: pre()
{
	current = current -> getPrePtr();
}

