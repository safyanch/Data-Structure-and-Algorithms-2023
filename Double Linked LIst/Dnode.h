
#ifndef DNODE_H_INCLUDED
#define DNODE_H_INCLUDED
#include<iostream>
using namespace std ;


template<class T>
class DNode
{

    template<class U>
	friend ostream &operator<<(ostream& , DNode<U>& );// displays the value stored in data


    public:

      
		DNode(T);//set nextPtr and prePtr to null and initialize the data with the value passed to constructor
     
		T getData()const;//return the value stored in the data variable
	
		DNode<T>* getNextPtr()const;//return the address stored in nextPtr variable
		
		DNode<T>* getPrePtr()const;//return the address stored in prePtr variable
		
		void setData(T);//set the passed value to the data variable
	
		void setNextPtr(DNode*);//set the passed value to the nextPtr variable
			
		void setPrePtr(DNode*);//set the passed value to the prePtr variable
	



	private:
		T data;
		DNode<T>* nextPtr;
		DNode<T>* prePtr;


};


#endif
