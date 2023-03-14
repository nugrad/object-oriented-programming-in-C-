#include<iostream>
#include<string>
using namespace std;
class teacher{
	public:
	string name;
	int id;
	string instu;
	
		void setname(string n)
		{
			name=n;
		}
		void setid(int i)
		{
			id=i;
		}
		void setinstu(string ins)
		{
			instu=ins;
		}
		string getname()
		{
			return name;
		}
		int getid()
		{
			return id;
		}
		string getinstu()
		{
			return instu;
		}
};
class humani:public teacher{
	public:
		string field="humanities";
		string coursename;
		string designation;
		void in()
		{
			cout<<"enter name :";cin>>name;
			cout<<"enter id : ";cin>>id;
			cout<<"enter institute : ";cin>>instu;
			cout<<"enter course : ";cin>>coursename;
			cout<<"enter designation : ";cin>>designation;
		}
		void out()
		{
			cout<<"field : "<<field<<endl;
			cout<<"name : "<<name<<endl;
			cout<<"id : "<<id<<endl;
			cout<<"institute : "<<instu<<endl;
			cout<<"course : "<<coursename<<endl;
			cout<<"designation : "<<designation<<endl;
		}
	
};
class sci:public teacher{
	public:
		string field2="sciences";
		string coursename2;
		string designation2;
		void in2()
		{
			cout<<"enter name :";cin>>name;
			cout<<"enter id : ";cin>>id;
			cout<<"enter institute : ";cin>>instu;
			cout<<"enter course : ";cin>>coursename2;
			cout<<"enter designation : ";cin>>designation2;
		}
		void out2()
		{
			cout<<"field : "<<field2<<endl;
			cout<<"name : "<<name<<endl;
			cout<<"id : "<<id<<endl;
			cout<<"institute : "<<instu<<endl;
			cout<<"course : "<<coursename2<<endl;
			cout<<"designation : "<<designation2<<endl;
		}
	
};
class math:public teacher{
	public:
		string field3="mathematics";
		string coursename3;
		string designation3;
		void in3()
		{
			cout<<"enter name :";cin>>name;
			cout<<"enter id : ";cin>>id;
			cout<<"enter institute : ";cin>>instu;
			cout<<"enter course : ";cin>>coursename3;
			cout<<"enter designation : ";cin>>designation3;
		}
		void out3()
		{
			cout<<"field : "<<field3<<endl;
			cout<<"name : "<<name<<endl;
			cout<<"id : "<<id<<endl;
			cout<<"institute : "<<instu<<endl;
			cout<<"course : "<<coursename3<<endl;
			cout<<"designation : "<<designation3<<endl;
		}
	
};
int main()
{
	humani hm;
	hm.in();
	hm.out();
	cout<<"------------------"<<endl;
	sci sc;
	sc.in2();
	sc.out2();
	cout<<"---------------------"<<endl;
	math m;
	m.in3();
	m.out3();
}
