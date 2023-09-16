using namespace std;
#include<iostream>

template <class t, class v>
class funtemp
{
	public:
	v add(t a, v b)
{
	return(a+b);
}
};
main()
{
	funtemp<int,float> *p=new funtemp<int, float>();

	cout<<p->add(4,5.9);
	
}
