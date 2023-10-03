#include<iostream>
#include "node.cpp"
main()
{
//	Node<int>* temp1=new Node<int>(30);
//	Node<int>* temp2=new Node<int>(40);
//	Node<int>* temp3=new Node<int>(50);
//	Node<int>*head=temp1;
//	Node<int>*current=head;
//	temp1->setNextPtr(temp2);
//	temp2->setNextPtr(temp3);
Node<int> temp1(30);
Node<int> temp2(40);
Node<int> temp3(50);
Node<int>head=temp1;
Node<int>current=head;
temp1.setNextPtr(&temp2);
temp2.setNextPtr(&temp3);

	while(current!=NULL)
	{
		cout<<*current;
		current=current->getNextPtr();
	}
	//cout<<*current;
}
