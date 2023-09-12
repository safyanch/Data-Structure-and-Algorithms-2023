using namespace std;
#include<iostream>

template <class t>
class funtemp
{
	public:
	t add(t a, t b)
{
	return(a+b);
}
};
main()
{
	funtemp<int> *p=new funtemp<int>();

	cout<<p->add(4,5);
	
}
