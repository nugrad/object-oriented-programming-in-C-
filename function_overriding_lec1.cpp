#include<iostream>
using namespace std;
class base{
	public:
		void fun()
		{
			cout<<"base class"<<endl;
		}
};
class base2{
	public:
		void fun()
		{
			cout<<"base class 2"<<endl;
		}
};
class derived:public base,public base2{
	public:
		void fun()// overides the base class func with same name
		{
			cout<<"derived class"<<endl;
			base::fun();// another way to accees base class overidden function
		}
};
//class derived:public base{
//	public:
//		void fun()// overides the base class func with same name
//		{
//			cout<<"derived class"<<endl;
//			base::fun();// another way to accees base class overidden function
//		}
//};
int main()
{
	base b;// simplest to access fun() function of base class
	b.fun();
	derived d,d2;
	d.fun();
	d.base::fun();
	d.base2::fun();
	d2.base::fun();// to access the overidden function fun() in base class
	
}
