using namespace std;
#include<iostream>
#include "list.h"
template<class T>
List<T>::List(int a)
{
	ptr=arr= new T[a];
	filled_size=-1;
	total_size=a;
}
template<class T>
List<T>::~List()
{
	delete arr;
}
template<class T>
void List<T>::start()
{
	ptr=arr;
}
template<class T>
void List<T>::end(){
	if(filled_size>-1){
		ptr=arr+filled_size;
	}
	else
	ptr=arr;
}
template<class T>
void List<T>::next(){
	ptr++;
}
template<class T>
void List<T>::previous(){
	ptr--;
}
template<class T>
void List<T>::addElement(T a,int index){
	if(index>filled_size+1||filled_size+1>total_size){
		cout<<"Array out of bound";
		return ;
	}
	else 
	{
		if(filled_size==-1){
			*ptr=a;
			filled_size++;
			return ;
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
	
}
template<class T>
 void List<T>::addElement(T a){
 	addElement(a,filled_size+1);
 	
 }
 template<class T>
 void List<T>::deleteElement(T a){
 	if(filled_size==-1){
 		cout<<"empty array";
 		return ;
	 }
	 else {
	 	start();
	 	for(int i=0;i<=filled_size;i++){
	 		if(a==*ptr){
	 			for(int j=i;j<filled_size;j++){
	 				*ptr=*(ptr+1);
	 				next();
				 }
				 filled_size--;
				 cout<<"element deleted"<<endl;
				 return ;
			 }
			 else{
			 	next();
			 } 
		 }
	 }
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

