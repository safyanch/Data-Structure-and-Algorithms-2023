using namespace std;
#include<iostream>
#include "linklist.h"
#include "linklist.cpp"
#include "node.h"
#include "node.cpp"




int main()
{
	Linklist<int> temp;
	temp.addElement(10);
	cout << temp << endl;
	
	temp.addElement(20);
	cout << temp << endl;
	
	temp.addElementAt(3,15);
	cout << temp << endl;

	cout << temp.getElementAT(2);
	cout<<endl; 
	cout<<temp;
temp.deleteElement(10)	;
cout<<endl; 
	cout<<temp;
	
	return 0;
}
