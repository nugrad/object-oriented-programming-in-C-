#include<iostream>
#include<string>
using namespace std;
class student{
	private:
		string name;
		int id;
		string depart;
		
		int t_marks=0;
		float perc;
		public:
			string subjects[3];
		int marks[3];
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
void student::setinput(void){
    cout << "Enter name: " ;
    cin >> name;
    cout << "Enter id: ";
    cin >> id;
    cout<<"enter department: ";
    cin>>depart;
    int i;
    
    for(i=0;i<3;i++)
    {
    	cout<<"enter name of subject"<<i+1;
    	cin>>subjects[i];
    	cout<<"enter marks in subject"<<i+1;
    	cin>>marks[i];
    	t_marks+=marks[i];
	}
    
     
    perc=(float)t_marks/300*100;
}
void student::getinput(void){
    cout << "Student details:\n";
    cout << "Name:"<< name << ",id:" << id << ",Total:" << t_marks << ",Percentage:" << perc;
    int j;
	for(j=0;j<3;j++)
	{
		cout<<"subject : "<<subjects[j];
		cout<<"\n";
		cout<<"marks : "<<marks[j];
		cout<<"\n";
	}
	
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
	int x;
	for(x=0;x<3;x++)
	{
	cout<<"for student "<<x+1<<endl;
	
	s.setinput();
	s.getinput();
	
	}
	
	
//	s.print_grade();

	
	
	
}
