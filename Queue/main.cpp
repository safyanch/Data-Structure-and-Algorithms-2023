using namespace std;
#include<iostream>

#include "queue.h"
#include "queue.cpp"
#include "node.cpp"
#include "node.h"



int main()
{
	Queue<int> q;
	q.enqueue(10);
	q.enqueue(20);
	cout << q.peek() << endl;
	cout << q.dequeue() << endl;
	cout << q.peek() << endl;
	cout << q.dequeue() << endl;
	return 0;
}




