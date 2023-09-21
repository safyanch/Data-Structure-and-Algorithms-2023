#include<iostream>
#include"list.cpp"
using namespace std;
int main(){
	List<int> temp(20);
	temp.addElement(10);
	temp.addElement(20);
	temp.addElement(30);
	temp.addElement(40);
	cout<<temp<<endl;
	temp.addElement(25,2);
	cout<<temp;  
	temp.deleteElement(25);
	cout<<endl<<temp;
	return 0;
}
