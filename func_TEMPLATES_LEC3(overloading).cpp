#include<iostream>
using namespace std;
template<class X>
void func(X a){
	cout<<a<<endl;
}
template<class X,class Y>// differ in arguments
void func(X b,Y c)
{
	cout<<b<<endl;
	cout<<c<<endl;
}
int main()
{
	func(10);
	func(20,10.8);
}
