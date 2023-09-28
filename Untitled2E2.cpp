#include<iostream>
#include "Untitled1E1.cpp"
using namespace std;
int main(){
	List<int>temp(20);
	temp.addElement(20);
	temp.addElement(30);
	temp.addElement(40);
	temp.addElement(50);
	temp.addElement(60);
	cout<<temp<<endl;
	temp.addElement(100,2);
	cout<<temp<<endl;
	temp.deleteElement(100);
	cout<<temp;
}
