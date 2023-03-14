#include<iostream>
using namespace std;
class parent{
	public:
		parent()
		{
			cout<<"constructor in parent class"<<endl;
		}
};
class parent2{
	public:
		parent2()
		{
			cout<<"constructor in parent class 2"<<endl;
		}
};
class child:public parent,public parent2{
	public:
		child()
		{
			cout<<"constructor in child class";
		}
};
int main()
{
	child c;// the constructor of base class is not inherited but still it is called when the object of derived class is decared
}
