#include<iostream>
#include<string>
using namespace std;
class parent{// base class
	public:
		int x;
		void getdata(){
			cout<<"enter value of x : ";
			cin>>x;
		}
};
class child:public parent{// derived class
	public:
		int y;
		void indata()
		{
			cout<<"enter the value of y :";
			cin>>y;
		}
		void product(){
			cout<<"product of x*y :"<<x*y;
		}
};
int main(){
	child c;
	c.getdata();
	c.indata();
	c.product();
}
