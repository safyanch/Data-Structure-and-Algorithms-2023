using namespace std;
#include<iostream>
class Test
{
	private:
		int *p;
	public:
		Test()
		{
			p=new int[10];
			cout<<"constructor created\n";
		}
		~Test()
		{
			delete p;
			cout<<"destrcutor";
		}
};
main()
{
	Test t;
}
