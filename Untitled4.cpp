using namespace std;
#include<iostream>
class DMA
{
	public:
		int *A;
		int size;
		void initalize(int s)
		{
			A=new int[s];
			size=s;
		}
		void fill()
		{
			for(int i = 0;i<size;i++)
			{ cout << "Enter the element"<< endl;
			cin>> A[i];
			
			}
			
		}
		void addelement(int q)
		{
			
		 	int* A1 = new int[size];
			for(int i = 0; i<size ;i++){
				 A1[i] = A[i];	 
			}
			
			A1[size] = q;
			size++;
		    
			A = A1;
			
			
		}
		void print()
		{
			for(int i=0;i<size;i++){
				cout<<A[i]<<" ,";
			}
		}	
	
};
int main(){
	DMA t ;
	t.initalize(5);
	t.fill();
	t.print();
	t.addelement(50);
	cout<<endl;
	t.print();
	return 0;
}
