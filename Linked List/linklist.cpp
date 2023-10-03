using namespace std;
#include<iostream>
#include "linklist.h"

template<class T>
Linklist<T> :: Linklist()
{
	counter = 0;
	head = NULL;
}


template<class T>	
void Linklist<T> :: addElement(T d)
{
	return addElementAt(counter+1, d);
}

template<class T>	
void Linklist<T> :: addElementAt(int ind, T a)
{
	Node<T> *temp = new Node<T>(a);
	
	
	if((ind <= 0) || (ind > counter+1)) //ivalid index 
	{
		cout<<"invalid index";
	}
	else if(ind == 1)// first element
	{
		
//		temp->setNextPtr(head);
		temp->setNextPtr(NULL);
		head = temp;
		counter++;
		//return true;
	}
	else if(ind == counter+1)// add at tail
	{
		Node<T> *current = head;
		while(current->getNextPtr() != NULL)
		{
			current = current->getNextPtr();
		}
		current->setNextPtr(temp);
		temp->setNextPtr(NULL);
		counter++;
		//return true;
	}
	else// add in middle
	{
		
		Node<T> *current = head;
		for(int i = 2; i < ind; i++)
		{
			current = current->getNextPtr();
		}
		temp->setNextPtr(current->getNextPtr());
		current->setNextPtr(temp);
		counter++;
		return ;
	}
}




template<class T>
void Linklist<T> :: deleteElementAt(int ind)
{
	if(head == NULL)
	{
		cout<<"empty list";
	}
	else if((ind <= 0) || (ind > counter+1))
	{
		cout<<"ivalid index";
	}
	else if(ind == 1)
	{
		Node<T> *current = head;
		head = current->getNextPtr();
		counter--;
		delete current;
		return ;
	}
	else if(ind == counter)
	{
		Node<T> *current = head;
		Node<T> *previous = NULL;
		while(current->getNextPtr() != NULL)
		{
			previous = current;
			current = current->getNextPtr();
		}
		previous->setNextPtr(NULL);
		counter--;
		delete current;
		return ;
	}
	else
	{
		Node<T> *current = head;
		Node<T> *previous = NULL;
		for(int i =1; i < ind; i++)
		{
			previous = current;
			current = current->getNextPtr();
		}
		previous->setNextPtr(current->getNextPtr());
		counter--;
		delete current;
		return ;
	}
}


template<class T>	
void Linklist<T> :: deleteElement(T d)
{
	
	if(head == NULL)
	{
		cout<<"empty list";
	}
	else if(d == (head->getData()))
	{
		Node<T> *current = head;
		head = head->getNextPtr();
		delete current;
		return ;
	}
	
	else
	{
		Node<T> *current = head;
		Node<T> *previous;
		while(current->getNextPtr() != NULL)
		{
			previous = current;
			current = current->getNextPtr();
			if(d == (current->getData()))
			{
				previous->setNextPtr(current->getNextPtr());
				counter--;
				delete current;
				return ;
			}
			
		}
	}
	 return ;
}

template<class T>	
void Linklist<T> :: findElement (T d) const
{
	if(head == NULL)
	{
		cout<<"empty List" ;
	}
	else if(d == (head->getData()))
	{
		return ;
	}
	else
	{
		Node<T> *current = head;
		while(current->getNextPtr() != NULL)
		{
			current = current->getNextPtr();
			if(d == (current->getData()))
			{
				return ;
			}
		}
	}
	
}


template<class T>	
T Linklist<T> :: getElementAT(int ind) const
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
		Node<T> *current = head;
		for(int i = 2; i <= ind; i++)
		{
			current = current->getNextPtr();
		}
		return (current->getData());
	}
}



template<class T>	
void Linklist<T> :: updateElementAt (int ind, T d)
{
	if(head == NULL)
	{
		cout<<"empty list";
	}
	else if((ind <= 0) || (ind > counter))
	{
		cout<<"invalid index ";
	}
	else if(ind == 1)
	{
		head->setData(d);
		return ;
	}
	else
	{
		Node<T> *current = head;
		for(int i = 2; i <= ind; i++)
		{
			current = current->getNextPtr();
		}
		current->setData(d);
		return ;
	}
}


template<class T>	
Linklist<T> ::~Linklist()
{
	makeEmpty();
}


template<class T>	
void Linklist<T> :: makeEmpty()
{
	if(head != NULL)
	{
		Node<T> *current = head;
		Node<T> *previous;
		while(current->getNextPtr() != NULL)
		{
			previous = current;
			current = current->getNextPtr();
			delete previous;
		}
		delete current;
		counter = 0;
		head = NULL;
	}
}

template <class U>
ostream& operator<<(ostream &out,const Linklist<U> &d)
{
	Node<U> *current = d.head;
	while(current != NULL)
	{
		out << *(current) << " ";
		current = current->getNextPtr();
	}

	return out;
	
}

