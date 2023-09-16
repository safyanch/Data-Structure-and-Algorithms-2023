using namespace std;
#include<iostream>
class DMA
{
	private:
		int *A;
		int size;
	public:
		void initialize(int s )
		{	size=s;
				A=new int [size];
		}
		void fill()
		{int a;
			for(int i=0;i<size;i++)
			{
				cout<<"enter the value at"<<i<<"index";
				cin>>A[i];
			}
		}
		void addelement(int a)
		{	
			int *A1=new int[size+1];
			for(int i=0;i<size;i++)
			{
				A1[i]=A[i];
				
			}
			A1[size]=a;
			size=size+1;
			A=A1;
		
		}
		void print()
		{
			for(int i=0;i<size;i++)
			{
				cout<<A[i]<<endl;
			}
		}
	
};
int main(){

DMA t;
t.initialize(5);
t.fill();
t.print();
t.addelement(200);
t.print();

return 0;
}
