#include<iostream>
#include<string>
using namespace std;
class vehicle{
	int year;
	public:
		void setvehicle(int y)
		{
			year=y;
		}
		int getyear()
		{
			return year;
		}
		vehicle(int ye)
		{
			year=ye;
		}
};
class vtype:virtual public vehicle{
	string type;
	public:
		void settype(string t)
		{
			type=t;
		}
		string gettype()
		{
			return type;
		}
		vtype(int ye,string ty):vehicle(ye)
		{
			type=ty;
		}
	
};
class etype:virtual public vehicle{
	string engine;
	public:
		void setengine(string e)
		{
			engine=e;
		}
		string getengine()
		{
			return engine;
		}
		etype(int ye,string eg):vehicle(ye){
			engine=eg;
		}
};
class det:public vtype,public etype{
	public:
		det(int ye,string ty,string eg):vtype(ye,ty),etype(ye,eg),vehicle(ye){}
		void display(){
			cout<<getyear()<<endl;
			cout<<gettype()<<endl;
			cout<<getengine()<<endl;
		}
};
int main()
{
	det d(2015,"car","maual");
	d.display();
}
