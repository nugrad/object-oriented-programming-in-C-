#include<iostream>
#include<string>
using namespace std;
class adder{
	public:
		int add(int x,int y){
			return x+y;
		}
		int add(){
			string a="hamza";
			string b="jafri";
			string c=a+b;
			cout<<"upon concatenation : "<<c<<endl;
		}
};
int main()
{
	adder a;
	cout<<"addition : "<<a.add(10,20)<<endl;
	a.add();
}
