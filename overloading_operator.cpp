using namespace std;
#include<iostream>
#include "Box.h"
main()
{
	Box Box1;
	Box Box2;
	Box Box3;
	Box1.setlength(3);
	Box1.setwidth(5);
	Box1.setheight(6);
	Box2.setlength(10);
	Box2.setwidth(11);
	Box2.setheight(12);
	Box3=Box1+Box2;
	cout<<Box3.getvolum();
}
