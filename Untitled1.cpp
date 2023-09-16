using namespace std;
#include<iostream>
#include "list.h"

template<class T>
List<T> :: List(int n)
{
	ptr=arr=new T[n];
	filled_size=-1;
	total_size=n;
}
template<class T>	
List<T>:: ~List()
{
	delete []arr;
} 
template<class T>
void List<T>:: start()
{
ptr=arr;
 } 
template<class T>
void List<T>:: next()
{
ptr++;
 } 
