#include<iostream>
using namespace std;
template<class t>
class Cal{
	t num1;
	t num2;
	public:
		Cal(t n1,t n2)
		{
			num1=n1;
			num2=n2;
		}
		t add()
		{
			return num1+num2;
		}
		t sub()
		{
			return num1-num2;
		}
		t mul()
		{
			return num1*num2;
		}
		t div()
		{
			return num1/num2;
		}
		
};
int main()
{
	Cal<int>c(10,20);
	cout<<c.add()<<endl;
	cout<<c.sub()<<endl;
	cout<<c.mul()<<endl;
	cout<<c.div()<<endl;
}
