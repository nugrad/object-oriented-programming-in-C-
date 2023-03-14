#include<iostream>
using namespace std;
class B;// forward declaration as friend function is using class B and we have not defined it till this point
class A{
	int numA;
	friend int add(A,B);// friend function declared in both classes as it is accessing private memebers of both class
	public:
		A()
		{
		numA=12;	
		}
};
class B{
	int numB;
	friend int add(A,B);// friend function declared in both classes as it is accessing private memebers of both class
	public:
		B()
		{
			numB=13;
		}
};
int add(A a,B b)
{
	return a.numA+b.numB;
}
int main()
{
	A obj;
	B obj2;
	cout<<add(obj,obj2);
}
