#include<iostream>
using namespace std;
class Test
{
public:
	
	int a[10];
void fill()
{
	for(int i=0; i<10; i++)
	a[i]=i+5;
}
friend ostream& operator<<(ostream& os, const Test& obj) {
        os << "[";
        for (int i = 0; i < 10; i++) {
            os << obj.a[i];
            if (i < 9)
                os << ", ";
        }
        os << "]";
        return os;
    }


};
main()
{
	Test t;
	
    t.fill();
	cout << t << endl;
}

