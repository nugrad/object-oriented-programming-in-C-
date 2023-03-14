#include<iostream>
using namespace std;
class A{
public:
//	void f1(){
//		cout<<"AF1"<<endl;
//	}
	virtual void f4(){
		cout<<"F4"<<endl;
	}
};
class B: public A{
public:
	void f4(int a){
		cout<<a<<endl;
	}
	void f1(){
		cout<<"BF1"<<endl;
	}
};
int main(){
	A *ptr=new B();
	ptr->f1();
//	ptr->f4();
//	ptr->f4(34);
}
