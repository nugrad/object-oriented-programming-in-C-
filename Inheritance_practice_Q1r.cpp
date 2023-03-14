#include<iostream>
#include<string>
using namespace std;
class teacher{
	private:
		string name;
		int age;
		string inst;
	public:
		void setname(string n){
			name=n;
		}
		void setage(int a){
			age=a;
		}
		void setinst(string it){
			inst=it;
		}
		string getname()
		{
			return name;
		}
		int getage()
		{
			return age;
		}
		string getinst()
		{
			return inst;
		}
		void setdata(void){
			cout<<"enter name : ";
			cin>>name;
			cout<<"enter age : ";
			cin>>age;
			cout<<"enter instituite : ";
			cin>>inst;
		}
		void getdata(){
			cout<<"name : "<<name<<endl;
			cout<<"age : "<<age<<endl;
			cout<<"institute : "<<inst<<endl;
		}
		
		
};
class humanities:public teacher{
	public:
		string field="humanities";
		string cname;
		string designation;
		void fdinfo(void){
			cout<<"enter the course name : ";
			cin>>cname;
			cout<<"enter the designation : ";
			cin>>designation;
		}
		void outdata()
		{
			cout<<"coursename : "<<cname<<endl;
			cout<<"designation : "<<designation<<endl;
		}
};
class sciences:public teacher{
	public:
		string field="sciences";
		string cname;
		string designation;
		void fdinfo(void){
			cout<<"enter the course name : ";
			cin>>cname;
			cout<<"enter the designation : ";
			cin>>designation;
		}
		void outdata()
		{
			cout<<"coursename : "<<cname<<endl;
			cout<<"designation : "<<designation<<endl;
		}
		
};
class maths:public teacher{
	public:
		string field="MATHS";
		string cname;
		string designation;
		void fdinfo(void){
			cout<<"enter the course name : ";
			cin>>cname;
			cout<<"enter the designation : ";
			cin>>designation;
		}
		void outdata()
		{
			cout<<"coursename : "<<cname<<endl;
			cout<<"designation : "<<designation<<endl;
		}
		
};
int main()
{
	teacher t;// object of base
	humanities h;// object of derived
	sciences s;
	maths m;
	t.setdata();// set private of base
	h.fdinfo();
	cout<<"------ humanities teacher details--------"<<endl;
	t.getdata();// get private of base
	cout<<"field : "<<h.field<<endl;
	h.outdata();
	cout<<"--------------------------------------------"<<endl;
	t.setdata();
	s.fdinfo();
	cout<<"---------sciences teacher details------------"<<endl;
	t.getdata();
	cout<<"field : "<<s.field<<endl;
	s.outdata();
	cout<<"------------------------------------------------"<<endl;
	t.setdata();
	m.fdinfo();
	cout<<"---------maths teacher details------------------------"<<endl;
	t.getdata();
	cout<<"field : "<<m.field<<endl;
	m.outdata();
	
	
	
	
}
