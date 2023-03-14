#include<iostream>
using namespace std;
class A{
	int numA;
	friend class B;// class B is friend class of A so can access its private members
	public:
		A()
		{
			numA=12;
		}
};
class xyz{
	char ch='A';
	int num=11;
	public:
		friend class abc;
};
class abc{
	public:
		void disp()
		{
			xyz a;
			cout<<"chracter : "<<a.ch<<endl;
			cout<<"number : "<<a.num<<endl;
		}
};
class B{
	int numB;
	public:
		B()
		{
			numB=1;
		}
		int add()
		{
			A obj;// since B is friend to A ,so we can create objects of A inside class B
			return obj.numA+numB;
		}
};
int main()
{
	B obj2;
	cout<<"sum : "<<obj2.add()<<endl;
	abc m;
	m.disp();
}
