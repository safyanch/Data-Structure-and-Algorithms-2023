#include "node.cpp"

using namespace std;

int main()
{
	Node<int>* n1 = new Node<int>(10);	
	Node<int>* n2 = new Node<int>(20);
	Node<int>* n3 = new Node<int>(30);
	Node<int>* n4 = new Node<int>(40);
	Node<int>* n5 = new Node<int>(50);
	
	Node<int>* head = n1;
	Node<int>* current = head;
	
	n1->setNextPtr(n2);
	n2->setNextPtr(n3);
	n3->setNextPtr(n4);
	n4->setNextPtr(n5);
	n5->setNextPtr(NULL);
	
	int d;
	cout << "Enter Any Number";
	cin >> d;
	
	while(current != NULL)
	{
		if(current->getData() == d)
		{
			cout << current->getData();
			return 0;
		}
		current = current->getNextPtr();
	}
	cout << "Element Not Found";
}
