#include<iostream>
#include<string>
using namespace std;
class father{// parent class
	public:
		string fname="tariq";
		int x;
		void in(){
			cout<<"enter x ";cin>>x;
		}
};
class mother{// second parent class
	public:
		string mname="hanifa";
		int y;
		void gety(){
			cout<<"enter y ";cin>>y;
		}
};
class child:public father,public mother{// derived from two base classes
    public:
		string sname="hamza";
		void info(){
			cout<<"father name : "<<fname<<endl;
			cout<<"mother name : "<<mname<<endl;
			cout<<"son name    : "<<sname<<endl;
		}
		void prod()
		{
			cout<<"product of x and y : "<<x*y;
		}
};
int main()
{
	child s;
	s.info();
	s.in();
	s.gety();
	s.prod();
}
