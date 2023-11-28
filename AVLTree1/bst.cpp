using namespace std;
#include<iostream>
#include "bst.h"
template<class T>
BST<T> :: BST()
{
	head = NULL;
}
template<class T>
BST<T> :: ~BST()
{
	if(head != NULL)
	{
		makeEmpty(head->getLeftPtr());
		delete head->getLeftPtr();
		makeEmpty(head->getRightPtr());
		delete head->getRightPtr();
		delete head;
	}
}
template<class T>
void BST<T> :: makeEmpty(Node<T> *head)
{
	if(head != NULL)
	{
		makeEmpty(head->getLeftPtr());
		delete head->getLeftPtr();
		makeEmpty(head->getRightPtr());
		delete head->getRightPtr();
	}
}
template<class T>
void BST<T> :: insert(T data)
{
	if(head == NULL)
	{
		head = new Node<T>(data);
	}
	else
	{
		if(head -> getData() > data)
		{
			if(head->getLeftPtr() == NULL)
				head->setLeftPtr(new Node<T>(data));	
			
			else
				insert(data, head->getLeftPtr());
		}
		else
		{
			if(head->getRightPtr() == NULL)
				head->setRightPtr(new Node<T>(data));	
			
			else
				insert(data, head->getRightPtr());
		}
		int balance = getBalance(head);
	

        // Left Heavy
        if (balance > 1) {
            if (data < head->getLeftPtr()->getData()) {
                LLrotate(head);
            } else {
                LRrotate(head);
            }
        }
        // Right Heavy
        else if (balance < -1) {
            if (data > head->getRightPtr()->getData()) {
                RRrotate(head);
            } else {
                RLrotate(head);
            }
        }

	}
	
	
}
template<class T>
void BST<T> :: insert(T data, Node<T> *head)
{
	if(head -> getData() > data)
	{
		if(head->getLeftPtr() == NULL)
			head->setLeftPtr(new Node<T>(data));	
		
		else
			insert(data, head->getLeftPtr());
	}
 	else
	{
		if(head->getRightPtr() == NULL)
			head->setRightPtr(new Node<T>(data));	
		
		else
			insert(data, head->getRightPtr());
	}
	
}
template<class T>
void BST<T> :: preOrder()
{
	if(head != NULL)
	{
		cout << head->getData() << " ";
		preOrder(head->getLeftPtr());
		preOrder(head->getRightPtr());
	}
}

template<class T>
void BST<T> :: preOrder(Node<T> *head)
{
	if(head != NULL)
	{
		cout << head->getData() << " ";
		preOrder(head->getLeftPtr());
		preOrder(head->getRightPtr());
	}

}
template<class T>
 int BST<T> ::Height(Node<T>* head){
if (head == NULL) {
        return -1; // Height of an empty tree is -1
    }

    int left = Height(head->getLeftPtr());
    int right = Height(head->getRightPtr());

    return 1 + std::max(left, right);
}
template<class T>
void BST<T> ::LLrotate(Node<T>*  &head) {
    if (head == NULL || head->getLeftPtr() == NULL) {
        return; // Cannot perform LL rotation
    }

	Node<T>* A = head;
    Node<T>* B = A->getLeftPtr();

    A->setLeftPtr(B->getRightPtr());
    B->setRightPtr(A);
    head = B; 
    
}
template<class T>
void BST<T> ::RRrotate(Node<T>* &head) 
{
    if (head == NULL || head->getRightPtr() == NULL) 
	{
        return; // Cannot perform RR rotation
    }

    Node<T>* A = head;
    Node<T>* B = A->getRightPtr();
    A->setRightPtr(B->getLeftPtr());
    B->setLeftPtr(A);
    head = B; // Update the root of the subtree
}

template<class T>
void BST<T>::LRrotate(Node<T>* &head) {
    if (head == NULL || head->getLeftPtr() == NULL) {
        return; // Cannot perform LR rotation
    }

    // Perform left rotation on the left child
    Node<T>* temp = head->getLeftPtr();
	LLrotate(temp);

    // Perform right rotation on the root
    RRrotate(head);
}
template<class T>
void BST<T>::RLrotate(Node<T>* &head) {
    if ( head== NULL || head->getRightPtr() == NULL) {
        return; // Cannot perform RL rotation
    }

    // Perform right rotation on the right child
    Node<T>* temp = head->getRightPtr();
    RRrotate(temp);

    // Perform left rotation on the root
    LLrotate(head);
}

template<class T>
int BST<T>::getBalance(Node<T>* node) {
    if (node == NULL) {
        return 0;
    }
    return Height(node->getLeftPtr()) - Height(node->getRightPtr());
}

template<class T>
Node<T>*& BST<T> ::gethead()
{
return(head);
}

