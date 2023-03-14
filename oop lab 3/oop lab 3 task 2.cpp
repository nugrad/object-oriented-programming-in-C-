#include<iostream>
#include<string>
using namespace std;

class bank{
	
		
	 int pin=1234;
	string name;
	int age;
	int cnic;
	string address;
	int bal;
	int cbal;
	int contact;
	float tax;
public:
	void set_cbal(int cb)
	{
		cbal=cb;
	}
	void set_pin(int p)
	{
		pin=p;
	}
	void set_name(string n)
	{
		name=n;
	}
	void set_age(int a)
	{
		age=a;
	}
	void set_cnic(int cn)
	{
		cnic=cn;
	}
	void set_address(string add)
	{
		address=add;
	}
	void set_bal(int b)
	{
		bal=b;
	}
	void set_tax(float s)
	{
		tax=s;
	}
	void set_contact(int con)
	{
		contact=con;
	}
	int get_cbal()
	{
		return cbal;
	}
	float get_tax()
	{
		return tax;
	}
	string get_name()
	{
		return name;
	}
	int get_age()
	{
		return age;
	}
	int get_cnic()
	{
		return cnic;
	}
	string get_address()
	{
		return address;
	}
	int get_bal()
	{
		return bal;
	}
	int get_contact()
	{
		return contact;
	}
	
	int get_pin() const
	{
	return pin;	
	}
	//member function to get student's details
        void getinput(void);
        //member function to print student's details
        void setinput(void);
		void print_status(void);	
};
void bank::getinput(void)
{
cout<<"enter name\n";
cin>>name;
cout<<"enter age\n";
cin>>age;
cout<<"enter cnic\n";
cin>>cnic;
cout<<"enter address\n";
cin>>address;
cout<<"enter balance\n";
cin>>bal;
cout<<"enter contact number\n";
cin>>contact;
cout<<"enter pin\n";
cin>>pin;

if(age>60)
{
	tax=(0.15/100)*bal;
}
else{
	tax=(0.25/100)*bal;
}	
}
void bank::setinput(void){
    cout << "customer details:\n";
    cout << "Name:"<< name << ",age:" << age << ",cnic:" << cnic << ",balance:" << bal<<",address"<<address<<",contact number"<<contact;
}
void bank::print_status()
{
cout<<"name is : "<<name;
cout<<"\n";
cout<<"age is : "<<age;
cout<<"\n";
cout<<"cnic is : "<<cnic;
cout<<"\n";
cout<<"balance is : "<<bal;
cout<<"\n";
cout<<"address : "<<address;
cout<<"\n";
cout<<"contact number"<<contact;
cout<<"\n";
cout<<"pin : "<<pin;
cout<<"\n";
cout<<"tax is :"<<tax;	
cout<<"\n";
cbal=bal-tax;
cout<<"current balance:"<<cbal;
}
int main()
{
	bank obj[100];
	int n;
	cout<<"how many customer record you want ";
	cin>>n;
	int i;
	
	for(i=0;i<n;i++)
	{
		cout<<"taking record for customer"<<i+1;
		obj[i].getinput();
		obj[i].setinput();
		obj[i].print_status();
	}
}
