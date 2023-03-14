#include<iostream>
#include<string>
using namespace std;
class base{// parent class
	public:
		int x;
		void getdata(){
			cout<<"enter the value of x : ";cin>>x;
		}
};
class derive1:public base{// derived from parent
	public:
		int y;
		void indata()
		{
			cout<<"enter the value of y :  ";cin>>y;
		}
};
class derive2:public derive1{// derived from derived class
	public:
		void sum(){
			cout<<"sum of x and y : "<<x+y;
		}
};
int main()
{
	derive2 d2;
	d2.getdata();
	d2.indata();
	d2.sum();
}
