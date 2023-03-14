#include<iostream.>
#include<string>
using namespace std;
// claasees and objects
// basic example;
/*class my_class{// class defined
	public:
		int num; // dta memeber
		string name;
};
int main()
{
	my_class obj1;// object created;
	obj1.num=15;
	obj1.name="hamza";
	cout<<obj1.name;
	cout<<"\n";
	cout<<obj1.num;
	
}
*/
// example 2;
// using memeber functions
/*class bank{
	public:
	string name;
	long acc_num;
	int pin;
	void info()// member functions
	{
		cout<<"enter the account number\n";
		cin>>acc_num;
		cout<<"enter the customer name\n";
		cin>>name;
		cout<<"enter pin\n";
		cin>>pin;
	}
	void display()
	{
		cout<<name;
		cout<<acc_num;
		cout<<pin;
	}
};
int main()
{
	bank ob;
	ob.info();
	ob.display();
}
*/
//------------------------------------------------------------example 1--------------------------------------------------------------------
// basic area program 
/*class room{
	public:
		int l;
		int b;
		int w;
		int area()
		{
		 return l*w;	
		}
		int vol()
		{
			return l*w*b;
		}
		
};
int main()
{
	room r1;
	r1.l=42;
	r1.b=12;
	r1.w=29;
	cout<<"area"<<r1.area();
	cout<<"\n";
	cout<<"volume"<<r1.vol();
}
*/
// -----------------------------------------------------example 2-----------------------------------------------------------------------
// now we will learn to access private mebers
// private is an access specifier
/*class dista{
	private:// not neccessary to write private ,just define variable outside of public
	int feet;
	float inch;
	public:
		void setd(int ft,float in)// creating member funcvtion to use private memebers OR set get terimomly
		{
			feet=ft;
			inch=in;
		}
		int getd()
		{
			return feet;
			return inch;
		}
		//void showd()// remenber membert function can also be defined outside class
		//{
			//cout<<feet;
			//cout<<"\n";
			//cout<<inch;
	//	}
		
};
void dista::showd()
{
	cout<<feet;
	cout<<"\n";
	cout<<inch;
}
int main()
{
	dista d;
	d.setd(11,6.5);
	d.getd();
	d.showd();
}
*/
//----------------------------------------------example 3---------------------------------------------------------------------------------
/*class Demo{
	public:
	int salary;

	void setSalary(int s){
		salary=s;
	}
	int getSalary(){
		return salary;
	}
};
int main(){
	Demo *obj=new Demo;
	(*obj).setSalary(55000);
	cout<<(*obj).getSalary();
////	obj.
//	obj->setSalary(89000);
//	cout<<obj->getSalary();
	return 0;
}
*/
// -------------------------------------------------------example 4-------------------------------------------------------------------
//The meaning of Encapsulation, is to make sure that "sensitive" data is hidden from users. 
//To achieve this, you must declare class variables/attributes as private (cannot be accessed from outside the class). 
//If you want others to read or modify the value of a private member, you can provide public get and set methods.

/*class Employee {
  private:
    // Private attribute
    int salary;
    string name;

  public:
    // Setter
    void setSalary(int s) {
      salary = s;
    }
    void set_name(string nm){
    	if(nm.length()<15)
    		name=nm;
    	else
			name=nm.substr(5,15);	
	}
    // Getter
    int getSalary() {
      return salary;
    }
    string get_name(){
    	return name;
	}
};

int main() {
  Employee myObj;
  myObj.setSalary(50000);
  cout << myObj.getSalary();
  myObj.set_name("Zainabdsfdsjfhdsjfhds78r4uwrfcdxbvhdsbf");
  cout<<myObj.get_name();
  
  
  
  return 0;
}
*/
//---------------------------------------------------example 5--------------------------------------------------------------------------------
//----------------------------------------------the banking system----------------------------------------------------------------------------

//class account{
//	int acno;
//	string name;
//	long balance;
//	int time;
//	float rate;
//	float intre;
//	int count1;
//	public:
//		void openAccount(){
//			cout<<"Enter account number:\t";
//			cin>>acno;
//			cout<<"Enter Name:\t";
//			
//			cin>>name;
//			cout<<"Enter Balance:\t";
//			cin>>balance;
//			
//		}
//		void showAccounts(){
//			cout<<"Account Number: "<<acno<<"\tName: "<<name<<"\tBalance: "<<balance<<endl;
//		}
//		void deposit(){
//			long amt2;
//			int count1=0;
//			cout<<"Enter Amount you wanna deposit:\t";
//			cin>>amt2;
//			balance=balance+amt2;
//			cout<<"deposited amount : "<<amt2;
//			cout<<"new balalnce : "<<balance;
//			count1++;
////			cout<<"transaction : "<<count1;
//		}
//		void withdraw(){
//			long amt;
//			int count1=0;
//			cout<<"Enter Amount you wanna withdraw:\t";
//			cin>>amt;
//			if(amt<=balance)
//				balance =balance-amt;
//			else
//				cout<<"Less Balance..."<<endl;
//			cout<<"amount withdrew:"<<amt;
//			cout<<"remaining balalnce : "<<balance;	
//			count1++;
////			cout<<"transaction : "<<count1;
//			
//		}
//		void trans()
//		{
//			cout<<"number of transactions"<<count1;
//		}
//		void interest()
//		{
//			cout<<"enter time in years : ";
//			cin>>time;
//			cout<<"enter the rate : ";
//			cin>>rate;
//			intre=balance*rate*time/100;
//			cout<<"intrest : "<<intre;
//		}
//		
//		
//	
//};
//int main()
//{
//	account obj;
//	char ch;
//	do{
//		cout<<"\n\n1:\tmake account&display\n2:\t number of transactions\n3:\tDeposit\n4:\tWithdraw\n5:\tinterest"<<endl;
//		cout<<"Please ENter Your First Choice:\t";
//		cin>>ch;
//		switch(ch){
//			
//			case '1':
//				obj.openAccount();
//				obj.showAccounts();
//				break;
//			case '2':
//				
//            obj.trans();
//  
//				break;
//			case '3':
//				obj.deposit();
//				break;				
//			case '4':
//				obj.withdraw();
//						
//				break;
//			case '5':
//				obj.interest();
//				break;
//			default:
//				cout<<"Wrong Option"<<endl;				
//		}
//	}
//	while(ch!=5);
//	return 0;
//	
//	
//}
//--------------------------------------------------------------example 6: student marks-------------------------------------------------------

class student{
	private:
		string name;
		int id;
		string depart;
//		string subjects[6];
		//int marks[6];
		int t_marks=0;
		float perc;
		public:
		string subjects[6];
		int marks[6];	
		void set_name(string nm){// setters
    	  name=nm;
    	}
    	void set_id(int a)
	{
		id=a;
	}
	void set_depart(string c)
	{
		depart=c;
	}
//	void set_subjects(string x)
//	{
//		subjects=x;
//	}
//	void set_marks(int m)
//	{
//		marks=m;
//	}
	void set_percent(float p){
		perc=p;
	}
	float get_percent()
	{
		return perc;
	}
    	
	string get_name(){// geters
    	return name;
	}
	
	int get_id()
	{
		return id;
	}
	
	string get_depart()
	{
		return depart; 
	}
	
//	string get_subjects()
//	{
//		return subjects;
//	}
	
//	int get_marks()
//	{
//		return marks;
//	}
	//member function to get student's details
        void getinput(void);
        //member function to print student's details
//        void setinput(void);
        void print_status(void);
       // void print_grade(void);
		
};
void student::getinput(void){
    cout << "Enter name: " ;
    cin >> name;
    cout << "Enter id: ";
    cin >> id;
    cout<<"enter department: ";
    cin>>depart;
    int i;
    
    for(i=0;i<6;i++)
    {
    	cout<<"enter name of subject : "<<i+1;
    	cin>>subjects[i];
    	cout<<"enter marks in subject: "<<i+1;
    	cin>>marks[i];
    	t_marks+=marks[i];
	}
    
     
    perc=(float)t_marks/600*100;
}
//void student::setinput(void){
//    cout << "Student details:\n";
//    cout << "Name:"<< name << ",id:" << id << ",Total:" << t_marks << ",Percentage:" << perc;
//}

void student::print_status()
{
	cout<<"student name is : "<<name;
	cout<<"\n";
	cout<<"department : "<<depart;
	cout<<"\n";
	cout<<"ID : "<<id;
	cout<<"\n";
	cout<<"subjects and marks in subjects that he is enrolled";
	cout<<"\n";
	int j;
	for(j=0;j<6;j++)
	{
		cout<<"subject : "<<subjects[j];
		cout<<"\n";
		cout<<"marks : "<<marks[j];
		cout<<"\n";
	}
	cout<<"\n";
	cout<<"total marks out of 600 : "<<t_marks;
	cout<<"\n";
	cout<<"percentage : "<<perc;
	if (perc >= 80)
     {
     	cout<<"\nGrade A+";
	 }
	 else if ((perc>=70) && (perc<=70))
	 {
	 	cout<<"\nGrade A";
	 }
	 else if (perc>=60 && perc<=60)
{
	cout<<"\nGrade B";
}
else if (perc>=50 && perc<=50)
{
	cout<<"\nGrade C";
}
}

	

	




int main()
{
	student s;
	s.getinput();
//	s.setinput();
	s.print_status();
//	s.print_grade();

	
	
	
}
//-------------------------------------------------------------------------example 7: employee----------------------------------------------------

//class employee{
//	string fname;
//	string lname;
//	int msal;
//	int raise;
//	int ysal1;
//	int ysal2;
//	public:
//	void set_fname(string fn)
//	{
//		fname=fn;
//	}
//	void set_lname(string ln)
//	{
//		lname=ln;
//	}
//	void set_msal(int ms)
//	{
//		msal=ms;
//	}
//	void set_raise(int rs)
//	{
//		raise=rs;
//	}
//	void set_ysal1(int yl1)
//	{
//		ysal1=yl1;
//	}
//	void set_ysal2(int yl2)
//	{
//		ysal2=yl2;
//	}
//	string get_fname()
//	{
//		return fname;
//	}
//	string get_lname()
//	{
//		return lname;
//	}
//	int get_msal()
//	{
//		return msal;
//	}
//	int get_raise()
//	{
//		return raise;
//	}
//	int get_ysal1()
//	{
//		return ysal1;
//	}
//	int get_ysal2()
//	{
//		return ysal2;
//	}
//	void getinput(void);
//        
//        void setinput(void);
//		void print_status(void);
//};
//void employee::getinput(void)
//{
//	cout<<"enter first name\n ";
//	cin>>fname;
//	cout<<"enter last name\n";
//	cin>>lname;
//	cout<<"enter monthly salary\n";
//	cin>>msal;
//	raise=0.2*msal;
//	ysal1=msal*12;
//	
//	
//}
//void employee::setinput(void)
//{
//	cout<<"employee details\n";
//	cout << "firstName:"<< fname << ",lastname:" << lname << ",monthlysalary:" << msal << ",raise:" << raise<<",yearly salary"<<ysal1;
//}
//void employee::print_status()
//{
//cout<<"firstname : "<<fname;
//cout<<"\n";
//cout<<"lastname : "	<<lname;
//cout<<"\n";
//if(msal<0)
//{
//	msal=0;
//}
//else{
//
//cout<<"monthly salary : "<<msal;
//}
//cout<<"\n";
//ysal1=msal*12;
//cout<<"yearly salary is : "<<ysal1;
//cout<<"\n";
//raise=0.2*msal;
//cout<<"raise is : "<<raise;
//cout<<"\n";
//ysal2=(msal+raise)*12;
//cout<<"yearly salary after 20% raise is : "<<ysal2;
//}
//int main()
//{
//	employee e[5];
//	int i;
//	for(i=0;i<5;i++)
//	{
//		cout<<"get data for employee : "<<i+1;
//		e[i].getinput();
//		e[i].setinput();
//		e[i].print_status();
//	}
//}
//-----------------------------------------example 8: bank------------------------------------------------------------------------------------
//class bank{
//	
//		
//	 int pin=1234;
//	string name;
//	int age;
//	int cnic;
//	string address;
//	int bal;
//	int cbal;
//	int contact;
//	float tax;
//public:
//	void set_cbal(int cb)
//	{
//		cbal=cb;
//	}
//	void set_pin(int p)
//	{
//		pin=p;
//	}
//	void set_name(string n)
//	{
//		name=n;
//	}
//	void set_age(int a)
//	{
//		age=a;
//	}
//	void set_cnic(int cn)
//	{
//		cnic=cn;
//	}
//	void set_address(string add)
//	{
//		address=add;
//	}
//	void set_bal(int b)
//	{
//		bal=b;
//	}
//	void set_tax(float s)
//	{
//		tax=s;
//	}
//	void set_contact(int con)
//	{
//		contact=con;
//	}
//	int get_cbal()
//	{
//		return cbal;
//	}
//	float get_tax()
//	{
//		return tax;
//	}
//	string get_name()
//	{
//		return name;
//	}
//	int get_age()
//	{
//		return age;
//	}
//	int get_cnic()
//	{
//		return cnic;
//	}
//	string get_address()
//	{
//		return address;
//	}
//	int get_bal()
//	{
//		return bal;
//	}
//	int get_contact()
//	{
//		return contact;
//	}
//	
//	int get_pin() const
//	{
//	return pin;	
//	}
//	//member function to get student's details
//        void getinput(void);
//        //member function to print student's details
//        void setinput(void);
//		void print_status(void);	
//};
//void bank::getinput(void)
//{
//cout<<"enter name\n";
//cin>>name;
//cout<<"enter age\n";
//cin>>age;
//cout<<"enter cnic\n";
//cin>>cnic;
//cout<<"enter address\n";
//cin>>address;
//cout<<"enter balance\n";
//cin>>bal;
//cout<<"enter contact number\n";
//cin>>contact;
//cout<<"enter pin\n";
//cin>>pin;
//
//if(age>60)
//{
//	tax=(0.15/100)*bal;
//}
//else{
//	tax=(0.25/100)*bal;
//}	
//}
//void bank::setinput(void){
//    cout << "customer details:\n";
//    cout << "Name:"<< name << ",age:" << age << ",cnic:" << cnic << ",balance:" << bal<<",address"<<address<<",contact number"<<contact;
//}
//void bank::print_status()
//{
//cout<<"name is : "<<name;
//cout<<"\n";
//cout<<"age is : "<<age;
//cout<<"\n";
//cout<<"cnic is : "<<cnic;
//cout<<"\n";
//cout<<"balance is : "<<bal;
//cout<<"\n";
//cout<<"address : "<<address;
//cout<<"\n";
//cout<<"contact number"<<contact;
//cout<<"\n";
//cout<<"pin : "<<pin;
//cout<<"\n";
//cout<<"tax is :"<<tax;	
//cout<<"\n";
//cbal=bal-tax;
//cout<<"current balance:"<<cbal;
//}
//int main()
//{
//	bank obj[100];
//	int n;
//	cout<<"how many customer record you want ";
//	cin>>n;
//	int i;
//	
//	for(i=0;i<n;i++)
//	{
//		cout<<"taking record for customer"<<i+1;
//		obj[i].getinput();
//		obj[i].setinput();
//		obj[i].print_status();
//	}
//}
//--------------------------------------example 9: invoice---------------------------------------------------------------------------------------
//class invoice{// class
//	string partnumber;
//	string partdescrip;
//	int qty;
//	int price;
//	int invam;
//	public:
//		void set_invam(int im)// setters
//		{
//			invam=im;
//		}
//		void set_partnumber(string pn)
//		{
//			partnumber=pn;
//		}
//		void set_partdescrip(string pd)
//		{
//			partdescrip=pd;
//		}
//		void set_qty(int qt)
//		{
//			qty=qt;
//		}
//		void set_price(int p)
//		{
//			price=p;
//		}
//		int get_invam()// getters
//		{
//			return invam;
//		}
//		string get_partnumber()
//		{
//			return partnumber;
//		}
//		string get_partdescrip()
//		{
//			return partdescrip;
//		}
//		int get_qty()
//		{
//			return qty;
//		}
//		int get_price()
//		{
//			return price;
//		}
//		void getinput(void);// memeber function
//        
//        void setinput(void);
////		void print_status(void);
//};
//void invoice::getinput(void)// memeber fucntion
//{
//	cout<<"enter the partnumber\n ";
//	cin>>partnumber;
//	cout<<"enter the part description\n";
//	cin>>partdescrip;
//	cout<<"enter the quantity\n";
//	cin>>qty;
//	cout<<"enter the price\n";
//	cin>>price;
//}
//void invoice::setinput(void)
//{
//	cout<<"------invoice generated-------\n";
//	cout<<"part number : "<<partnumber;
//	cout<<"\n";
//	cout<<"part description : "<<partdescrip;
//	cout<<"\n";
//	if(qty<0){
//		qty=0;
//	}
//	else{
//		cout<<"quantity : "<<qty;
//	}
//	cout<<"\n";
//	if(price<0)
//	{
//		price=0;
//	}
//	else
//	{
//		cout<<"price : "<<price;
//	}
//	cout<<"\n";
//	invam=price*qty;
//	cout<<"invoice amount : "<<invam;
//	cout<<"\n";
//}
////void invoice::print_status()
////{
////	
////}
//int main()
//{
//	invoice e;// object
//	e.getinput();// invoice input
//	e.setinput();// invoice output
////	e.print_status();
//}
//------------------------------------------example 9:hospital--------------------------------------------------------------------------------
//class healthprofile{
//	string fname;
//	string lname;
//	string gender;
//	int day;
//	int month;
//	int year;
//	int height;
//	int weight;
//	int bmi;
//	int yeartoday;
//	//int birthyear;
//	public:
//		void set_fname(string fn)
//		{
//			fname=fn;
//		}
//		void set_lname(string ln)
//		{
//			lname=ln;
//		}
//		void set_gender(string g)
//		{
//			gender=g;
//		}
//		void set_day(int d)
//		{
//			day=d;
//		}
//		void set_month(int m)
//		{
//			month=m;
//		}
//		void set_year(int y)
//		{
//			year=y;
//		}
//		void set_weight(int w)
//		{
//			weight=w;
//		}
//		void set_height(int h)
//		{
//			height=h;
//		}
//		void set_bmi(int bm)
//		{
//			bmi=bm;
//		}
//		void set_yeartoday(int yt)
//		{
//			yeartoday=yt;
//		}
////		void set_birthyear(int by)
////		{
////			birthyear=by;
////		}
//		string get_fname()
//		{
//			return fname;
//		}
//		string get_lname()
//		{
//			return lname;
//		}
//		string get_gender()
//		{
//			return gender;
//		}
//		int get_day()
//		{
//			return day;
//		}
//		int get_month()
//		{
//			return month;
//		}
//		int get_year()
//		{
//			return year;
//		}
//		int get_weight()
//		{
//			return weight;
//		}
//		int get_height()
//		{
//			return height;
//		}
//		int get_bmi()
//		{
//			return bmi;
//		}
//		int get_yeartoday()
//		{
//			return yeartoday;
//		}
////		int get_birthyear()
////		{
////			return birthyear;
////		}
//		
//		void getinput(void);// memeber function
//        
//        void setinput(void);
//        void print_age(void);
//        void print_bmi(void);
//        void print_maxheartrate(void);
//        void print_targetrange(void);
//};
//void healthprofile::getinput(void)
//{
//cout<<"enter first name : ";
//cin>>fname;
//cout<<"enter last name : ";
//cin>>lname;
//cout<<"enter gender : ";
//cin>>gender;
//cout << "Enter your date of birth in format: month day year" << endl;
//cin >> month  >> day  >> year;	
//cout<<"enter your weight (in pounds) : ";
//cin>>weight;
//cout<<"enter your height (in inches) : ";
//cin>>height;
//cout<<"enter year today : ";
//cin>>yeartoday;
//bmi=(weight*703)/(height*height);
//}
//void healthprofile::setinput(void)
//{
//cout<<"first name : "<<fname;
//cout<<"\n";
//cout<<"last name : "<<lname;
//cout<<"\n";
//cout<<"gender : "<<gender;
//cout<<"\n";
//cout<<"DOB: month/day/year ="<<month<<"/"<<day<<"/"<<year;
//cout<<"\n";
//cout<<" weight : "<<weight;
//cout<<"\n";
//cout<<"height : "<<height;
//cout<<"\n";
//cout<<"year today : "<<yeartoday;	
//cout<<"\n";
//
//}
//void healthprofile::print_bmi()
//{
//	cout<<"BMI is : "<<bmi;
//	cout<<"\n";
//}
//
//void healthprofile::print_maxheartrate()
//{
//	cout << "Your maximum heart rate is : " << 220- (yeartoday - year) << endl;
//	cout<<"\n";
//	}
//
//void healthprofile::print_age()
//{
//	cout<<"your age is :"<<(yeartoday - year) <<endl;
//}
//void healthprofile::print_targetrange()
//{
//cout << "Your target heart rate range is: " << (0.5 * (220-(yeartoday - year)))	;
//cout<<"\n";
//}
//
//int main()
//{
//	healthprofile obj;
//	obj.getinput();
//	cout<<"------patient profile-------------\n";
//	obj.setinput();
//	obj.print_age();
//	obj.print_bmi();
//	obj.print_maxheartrate();
//	obj.print_targetrange();
//}

/*
                               END OF LECTURE
 By this time i can consider myself being aware of classes and objects and how to setter & getter functio
 NEXT STOP: CONSTRUCTORS/DESTRUCTORS!!!!!!    
 */                          
