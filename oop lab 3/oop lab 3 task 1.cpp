#include<iostream>
#include<string>
using namespace std;
class student{
	private:
		string name;
		int id;
		string depart;
		string subjects[6];
		int marks[6];
		int t_marks=0;
		float perc;
		public:
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
        void setinput(void);
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
    	cout<<"enter name of subject"<<i+1;
    	cin>>subjects[i];
    	cout<<"enter marks in subject"<<i+1;
    	cin>>marks[i];
    	t_marks+=marks[i];
	}
    
     
    perc=(float)t_marks/600*100;
}
void student::setinput(void){
    cout << "Student details:\n";
    cout << "Name:"<< name << ",id:" << id << ",Total:" << t_marks << ",Percentage:" << perc;
}

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
	s.setinput();
	s.print_status();
//	s.print_grade();

	
	
	
}


