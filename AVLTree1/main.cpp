using namespace std;

#include<iostream>
#include "bst.h"
#include "bst.cpp"
#include "node.cpp"
#include "node.h"
int main()
{
	BST<int> q;
	q.insert(30);
	q.insert(10);
	q.insert(20);
//	q.insert(6);
//	insert(10);
	//q.deleteNode(6);
	
    
q.preOrder();
//cout << endl<<q.Height(q.gethead());
//q.RRrotate(q.gethead());

//q.preOrder();
//cout << endl<<q.Height(q.gethead());
	
//	q.inOrder();
//	cout << endl;
	
//	q.postOrder();
//	cout << endl;
	
//	cout << q.search(1);
	return 0;
}




