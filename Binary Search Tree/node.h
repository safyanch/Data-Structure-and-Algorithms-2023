#ifndef NODE_H_INCLUDED
#define NODE_H_INCLUDED
#include<iostream>
using namespace std ;


template<class T>
class Node
{


    public:

      
		Node(T);//set nextPtr to null and initialize the data with the value passed to constructor
     
		T getData()const;//return the value stored in the data variable
	
		Node<T>* getLeftPtr()const;//return the address stored in leftPtr variable
	
		Node<T>* getRightPtr()const;//return the address stored in rightPtr variable
	
		void setData(T);//set the passed value to the data variable
	
		void setLeftPtr(Node<T>*);//set the passed value to the leftPtr variable
	
		void setRightPtr(Node<T>*);//set the passed value to the rightPtr variable
	


private:
		T data;
		Node<T>* leftPtr;
		Node<T>* rightPtr;


};


#endif
