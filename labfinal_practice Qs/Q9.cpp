#include<iostream>
#include<string>
using namespace std;
class calculator{
	public:
		int num1;
		int num2;
		int num3;
		int add(int num1,int num2)
		{
			return num1+num2;
		}
		int add(int num1,int num2,int num3)
		{
			return num1+num2+num3;
		}
		int sub(int num1,int num2)
		{
			return num1-num2;
		}
		int sub(int num1,int num2,int num3)
		{
			return num1-num2-num3;
		}
		int mul(int num1,int num2)
		{
			return num1*num2;
		}
		int mul(int num1,int num2,int num3)
		{
			return num1*num2*num3;
		}
		int div(int num1,int num2)
		{
			return num1/num2;
		}
		int div(int num1,int num2,int num3)
		{
			return (num1/num2)/num3;
		}
};
int main()
{
	calculator c;
	cout<<c.add(10,20)<<endl;
	cout<<c.add(10,20,30)<<endl;
	cout<<c.sub(10,20)<<endl;
	cout<<c.sub(10,20,30)<<endl;
	cout<<c.mul(10,20)<<endl;
	cout<<c.mul(10,20,30)<<endl;
	cout<<c.div(10,20)<<endl;
	cout<<c.div(10,20,30)<<endl;
}
