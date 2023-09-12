#include<iostream>
using namespace std;
class Box
{
	private:
		double length;
		double width;
		double height;
	public:
		void setlength(double l)
		{
			length=l;
		}
		void setwidth(double w)
		{
			width=w;
		}
		void setheight(double h)
		{
			height=h;
		}
		double getlength()
		{
			return(length);
		}
		double getwidth()
		{
			return(width);
		}
		double getheight()
		{
			return(height);
		}
		Box operator+(Box b)
		{
			Box box;
			box.length=this->length+b.length;
			box.width=this->width+b.width;
			box.height=this->height+b.height;
			return box;
		}
};
