using namespace std;
#include<iostream>
#include "node.h"
template<class T>
Node<T> :: Node (T a)
{
	data = a;
	leftPtr = rightPtr = NULL;
}
template<class T>
void Node<T> :: setData(T a)
{
	data = a;
}
template<class T>
void Node<T> :: setLeftPtr (Node<T> *p)
{
	leftPtr = p;
}
template<class T>
void Node<T> :: setRightPtr (Node<T> *p)
{
	rightPtr = p;
}
template<class T>
T Node<T> :: getData() const
{
	return data;
}
template<class T>
Node<T> * Node<T> :: getLeftPtr() const
{
	return leftPtr;
}
template<class T>
Node<T> * Node<T> :: getRightPtr() const
{
	return rightPtr;
}
