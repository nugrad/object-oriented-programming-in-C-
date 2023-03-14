#include<iostream>
using namespace std;
class data{
	public:
		void func(int x){
			cout<<"value of x : "<<x<<endl;
		}
		void func(double x){
			cout<<"upon changing data type of x from int to double : "<<x<<endl;
		}
		void func(int x,int y)
		{
			cout<<"x : "<<x<<endl;
			cout<<"y : "<<y<<endl;
		}
		void func()
		{
			int x=3;
			cout<<"the value of x : "<<x<<endl;
		}
};
class number{
	public:
	int num1;
	int num2;
	int num3;
	int add(int num1,int num2){
		return num1+num2;
	}
	int add(int num1,int num2,int num3){
		return num1+num2+num3;
	}
	int sub(int num1,int num2){
		return num1-num2;
	}
	int sub(int num1,int num2,int num3){
		return num1-num2-num3;
	}
	int mul(int num1,int num2){
		return num1*num2;
	}
	int mul(int num1,int num2,int num3){
		return num1*num2*num3;
	}
	int div(int num1,int num2){
		return num1/num2;
	}
	int div(int num1,int num2,int num3){
		int c=num1/num2;
		return c/num3;
	}
	
	
	
		
};
int main()
{
	data d;
	d.func(10);
	d.func(9.8);
	d.func(9,83);
	d.func();
	number no;
	cout<<no.add(10,20)<<endl;
	cout<<no.add(10,20,30)<<endl;
	cout<<no.sub(10,20)<<endl;
	cout<<no.sub(10,20,30)<<endl;
	cout<<no.mul(10,20)<<endl;
	cout<<no.mul(10,20,30)<<endl;
	cout<<no.div(20,10)<<endl;
	cout<<no.div(20,10,1)<<endl;
}
