#include<iostream>
#include"list.h"
using namespace std;
template<class T>
List<T>::List(int size){
	total_size=size;
	filled_size=-1;
	ptr=arr= new T[size];
}
template<class T>
List<T>:: ~List()
{
	delete arr;
}
template<class T>
void List<T>::start()
{
	ptr=arr;
}
template<typename T>
void List<T>::end(){
	if(filled_size>-1){
		ptr=arr+filled_size;
}
	else
	ptr=arr;
}
template<typename T>
void List<T>::next(){
	ptr++;
}
template<typename T>
void List<T>::previous(){
	ptr--;
}
template <typename T>
void List<T>::addElement(T a, int index){
	if(index>filled_size+1||filled_size+1>total_size){
		cout<<"\n Array Out of Bound Error \n";
		return;
	}	
	else if(filled_size==-1)
	{
		*ptr=a; 
		filled_size++; 
		return;
	}
	end();
	for(int i=filled_size;i>=index;i--){
		*(ptr+1)=*ptr;
		previous();
	} 
	next();
	*ptr=a;
	filled_size++;
}
template <typename T>
void List<T>::addElement(T a){
	addElement(a, filled_size+1);

}
template <typename T>
void List<T>::deleteElement(T a){
	if(filled_size==-1){
		cout<<"\n Array is Empty\n";
		return;
	}
	start();
	for(int i=0;i<filled_size;i++){
		if(*ptr==a){
			for(int j=i;j<filled_size; j++){
				*ptr=*(ptr+1); 
				next();
			}
			filled_size--;
			cout<<"\nThe element "<<a <<" has been deleted.\n";
			return;
		}
		next();
	}
	cout<<"\nElement is not in the list.\n";
}

template<class U>
std::ostream& operator<<(std::ostream& out, List<U>& p)
{
	
	p.start();
	for(int i=0; i<=p.filled_size; i++)
	{
		
		out << *(p.ptr) << " ";
		p.next();
	}
	return out;
}



