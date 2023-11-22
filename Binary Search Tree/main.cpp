using namespace std;

#include<iostream>
#include "bst.h"
#include "bst.cpp"
#include "node.cpp"
#include "node.h"
int main()
{
	BST<int> q;
	q.insert(10);
	q.insert(5);
	q.insert(19);
	q.insert(6);
	q.deleteNode(6);
	
    q.preOrder();
	cout << endl;
	
	q.inOrder();
	cout << endl;
	
	q.postOrder();
	cout << endl;
	
	cout << q.search(1);
	return 0;
}




