#include<iostream>
#include<string>
using namespace std;
class A{
	int year;
	public:
		void setyear(int ye)
		{
			year=ye;
		}
		void getyear()
		{
			return year;
		}
		A(int y)
		{
		year=y;	
		}
};
class B:virtual public A{
	string type;
	public:
		void settype(string st)
		{
			type=st;
		}
		string gettype()
		{
			return type;
		}
		B(int y,string ty):A(y)
		{
			type=ty;
		}

};
class C:virtual public A{
	string egn;
	public:
		void setegn(string e)
		{
			egn=e;
		}
		string getegn()
		{
			return egn;
		}
		B(int y,string eg):A(y)
		{
			egn=eg;
		}

};
class D:public B,public C{
	public:
		D(int y,string ty,string eg):B(y,ty),C(y,eg),A(y)
		{}
		void disp()
		{
			cout<<getyear();
			cout<<gettype();
			cout<<getegn();
		}
};
int main()
{
	D d(2015,"car","hybrid");
	d.disp();
}
