#include<iostream>
using namespace std;
class Test
{
	private:
	int *p;
	public:
	Test()
	{
		p=new int[10];
		cout<<"constructor created";
	}
	~Test()
	{
		
		cout<<"destrcutor started";
		delete[] p;
		//delete p;
		cout<<"\n destrcutor";
		
	
	}
};

main()
{
	Test t;
	
}
