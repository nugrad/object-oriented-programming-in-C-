#include<iostream>
#include<string>
using namespace std;
class employee{
	string fname;
	string lname;
	int msal;
	int raise;
	int ysal1;
	int ysal2;
	public:
	void set_fname(string fn)
	{
		fname=fn;
	}
	void set_lname(string ln)
	{
		lname=ln;
	}
	void set_msal(int ms)
	{
		msal=ms;
	}
	void set_raise(int rs)
	{
		raise=rs;
	}
	void set_ysal1(int yl1)
	{
		ysal1=yl1;
	}
	void set_ysal2(int yl2)
	{
		ysal2=yl2;
	}
	string get_fname()
	{
		return fname;
	}
	string get_lname()
	{
		return lname;
	}
	int get_msal()
	{
		return msal;
	}
	int get_raise()
	{
		return raise;
	}
	int get_ysal1()
	{
		return ysal1;
	}
	int get_ysal2()
	{
		return ysal2;
	}
	void getinput(void);
        
        void setinput(void);
		void print_status(void);
};
void employee::getinput(void)
{
	cout<<"enter first name\n ";
	cin>>fname;
	cout<<"enter last name\n";
	cin>>lname;
	cout<<"enter monthly salary\n";
	cin>>msal;
	raise=0.2*msal;
	ysal1=msal*12;
	
	
}
void employee::setinput(void)
{
	cout<<"employee details\n";
	cout << "firstName:"<< fname << ",lastname:" << lname << ",monthlysalary:" << msal << ",raise:" << raise<<",yearly salary"<<ysal1;
}
void employee::print_status()
{
cout<<"firstname : "<<fname;
cout<<"\n";
cout<<"lastname : "	<<lname;
cout<<"\n";
if(msal<0)
{
	msal=0;
}
else{

cout<<"monthly salary : "<<msal;
}
cout<<"\n";
ysal1=msal*12;
cout<<"yearly salary is : "<<ysal1;
cout<<"\n";
raise=0.2*msal;
cout<<"raise is : "<<raise;
cout<<"\n";
ysal2=(msal+raise)*12;
cout<<"yearly salary after 20% raise is : "<<ysal2;
}
int main()
{
	employee e[5];
	int i;
	for(i=0;i<5;i++)
	{
		cout<<"get data for employee : "<<i+1;
		e[i].getinput();
		e[i].setinput();
		e[i].print_status();
	}
}
