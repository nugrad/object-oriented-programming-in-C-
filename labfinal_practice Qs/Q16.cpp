#include<iostream>
using namespace std;
class complex{
	public:
		int real,imag;
		void getvalue()
		{
			cout<<"enter real :";cin>>real;
			cout<<"enter imag: ";cin>>imag;
		}
//		complex operator +(complex obj)// member function
//		{
//			complex temp;
//			temp.real=real+obj.real;
//			temp.imag=imag+obj.imag;
//			return temp;
//		}
		void getout()
		{
			cout<<real<<"+"<<imag<<"i";
		}
		friend complex operator +(complex &c1,complex &c2);// friend function
};
complex operator +(complex &c1,complex &c2)
{
	complex temp;
	temp.real=c1.real+c2.real;
	temp.imag=c1.imag+c2.imag;
	return temp;
}
int main()
{
	complex c1,c2;
	complex result;
	c1.getvalue();
	c2.getvalue();
	result=c1+c2;
	result.getout();
}
