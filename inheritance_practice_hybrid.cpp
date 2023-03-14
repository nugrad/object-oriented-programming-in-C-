#include<iostream>
using namespace std;
class A{
	public:
		int x;
};
class B:public A{// single inheritance
	public:
		B()
		{
			x=10;
		}
};
class C{
	public:
		int y;
		C()
		{
			y=4;
		}
};
class D:public B,public C{// multiple inheritance
	public:
		void sum()
		{
			cout<<"sum of x and y : "<<x+y;
		}
};
int main()
{
	D obj;
	obj.sum();
}
