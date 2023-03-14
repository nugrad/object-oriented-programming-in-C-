#include<iostream>
#include<string>
using namespace std;
class membertype{
	string name;
	int id;
	int nob;// number of books bought
	int amt;
	int modnob;
	int modamt;
	public:
		void setmodnob(int  mnob)
		{
			modnob=mnob;
		}
		void setmodamt(int  mamt)
		{
			modamt=mamt;
		}
		void setname(string n)
		{
			name=n;
		}
		void setid(int k)
		{
			id=k;
		}
		void setnob(int no)
		{
			nob=no;
		}
		void setamt(int a)
		{
			amt=a;
		}
		int getmodnob()
		{
			return modnob;
		}
		int getmodamt()
		{
			return modamt;
		}
		string getname()
		{
			return name;
		}
		int getid()
		{
			return id;
		}
		int getnob()
		{
			return nob;
		}
		int getamt()
		{
			return amt;
		}
		void getdata(void);
		void setdata(void);
		void modify(void);
};
void membertype::getdata(void)
{
	cout<<"enter name : ";
	cin>>name;
	cout<<"enter id : ";
	cin>>id;
	cout<<"enter number of books bought : ";
	cin>>nob;
	cout<<"enter the amount : ";
	cin>>amt;
}
void membertype::setdata(void)
{
cout<<"name : "<<name;
cout<<"\n";
cout<<"id :"<<id;
cout<<"\n";
cout<<"number of books bought : "<<nob;
cout<<"\n";
cout<<"amount : "<<amt;	
cout<<"\n";
char x;
	cout<<"enter 1 to modify amount\n";
	cout<<"enter 2 to modify number of books\n";
	cin>>x;
	switch(x){
		case'1':{
			cout<<"enter updated amount\n";
			cin>>modamt;
			cout<<"updated amount :"<<modamt;
			break;
		}
		case'2':{
			cout<<"enter updated number of books\n";
			cin>>modnob;
			cout<<"updated number of books : "<<modnob;
			break;
		}
	}

//cout<<"updated number of books: "<<modnob;
//cout<<"\n";
//cout<<"updated amount : "<<modamt;
}
//void membertype::modify(void)
//{
//	char x;
//	cout<<"enter 1 to modify amount\n";
//	cout<<"enter 2 to modify number of books\n";
//	cin>>x;
//	switch(x){
//		case'1':{
//			cout<<"enter updated amount\n";
//			cin>>modamt;
//			break;
//		}
//		case'2':{
//			cout<<"enter updated number of books\n";
//			cin>>modnob;
//			break;
//		}
//	}
//}
int main()
{
	membertype mt;
	mt.getdata();
//	mt.modify();
	mt.setdata();
	
}
