#include<iostream>
#include<string>
using namespace std;
class person{
	int id;
	string name;
	public:
		void setid(int i)
		{
			id=i;
		}
		void setname(string na)
		{
			name=na;
		}
		int getid()
		{
			return id;
		}
		string getname()
		{
			return name;
		}
		virtual void getdata()
		{
			cout<<"enter the id : ";
			cin>>id;
			cout<<"enter the name : ";
			cin>>name;
		}
		virtual void disp()
		{
			cout<<"id : "<<id<<endl;
			cout<<"name : "<<name<<endl;
		}
		virtual void bonus()
		{
		}
	
};
class admin:virtual public person{
	public:
		int sal1;
		void getdata()
		{
			cout<<"enter the admin salary : ";
			cin>>sal1;
		}
		void disp()
		{
			cout<<"admin salary : "<<sal1<<endl;
		}
		void bonus()
		{
			int bon1;
			bon1=sal1*0.15;
			cout<<"the bonus on the bases of salary is : "<<bon1<<endl;
		}
	
};
class account:virtual public person{
	public:
		int bal;
		void getdata()
		{
			cout<<"enter the account balance : ";
			cin>>bal;
		}
		void disp()
		{
			cout<<"account balance is : "<<bal<<endl;
		}
		void bonus()
		{
			int bon2;
			bon2=bal*0.10;
			cout<<"bonus on the basis of account balance : "<<bon2<<endl;
		}
	
};
class master:public admin,public account{
	public:
		void getdata()
		{
			admin::getdata();
			account::getdata();
		}
		void disp()
		{
			admin::disp();
			account::disp();
		}
		void bonus()
		{
			admin::bonus();
			account::bonus();
		}
};
void myfunc(person *p1)
{
	p1->getdata();
	p1->disp();
	p1->bonus();
}
int main()
{
	person *p=new person;
	admin *a=new admin;
	account *ac=new account;
	master *m=new master;
	myfunc(p);
	myfunc(a);
	myfunc(ac);
	myfunc(m);
}
