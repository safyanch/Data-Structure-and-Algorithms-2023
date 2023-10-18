using namespace std;
#include<iostream>
#include "Dnode.h"

template<class U>
ostream &operator<<(ostream &out, DNode<U> &p)
{
	out << (p.getData());
	return out;
}

template<class T>

DNode<T> :: DNode (T a)
{
	data = a;
	nextPtr = NULL;
	prePtr = NULL;
}


template<class T>
void DNode<T> :: setData(T a)
{
	data = a;
}

template<class T>
void DNode<T> :: setNextPtr (DNode<T> *p)
{
	nextPtr = p;
}

template<class T>
void DNode<T> :: setPrePtr (DNode<T> *p)
{
	prePtr = p;
}

template<class T>
T DNode<T> :: getData() const
{
	return data;
}

template<class T>
DNode<T> * DNode<T> :: getNextPtr() const
{
	return nextPtr;
}

template<class T>
DNode<T> * DNode<T> :: getPrePtr() const
{
	return prePtr;
}

