#include<iostream>
#include<string>
using namespace std;
class student{
	int id;
	string name;
	int total=0;
	float avg;
	//string grade;
	public:
		string subjects[2];
		int marks[2];
		void setid(int ID)
		{
			id=ID;
		}
		void setname(string N)
		{
			name=N;
		}
		void settotal(int T)
		{
			total=T;
		}
		void setavg(float A)
		{
			avg=A;
		}
//		void setgrade(string G)
//		{
//			grade=G;
//		}
		int getid()
		{
			return id;
		}
		string getname()
		{
			return name;
		}
		int gettotal()
		{
			return total;
		}
		float getavg()
		{
			return avg;
		}
		void getinfo();
		void displayinfo();
		
		
		
};
void student::getinfo(){
	cout<<"enter the student id : ";
	cin>>id;
	cout<<"enter student name : ";
	cin>>name;
	int j;
	for(j=0;j<2;j++)
	{
		cout<<"enter name of subject :  "<<j+1<<endl;
		cin>>subjects[j];
		cout<<"enter marks in subject "<<j+1<<endl;
		cin>>marks[j];
		total=total+marks[j];
	}
	avg=total/2;
	
	
}
void student::displayinfo(){
	cout<<"ID : "<<id<<endl;
	cout<<"NAME : "<<name<<endl;
	int j;
	for(j=0;j<2;j++)
	{
		cout<<"name of subject  "<<subjects[j]<<endl;
		cout<<"marks in subject "<<marks[j]<<endl;
	}
	cout<<"TOTAL : "<<total<<endl;
	cout<<"Average : "<<avg<<endl;
	if(total>85){
		cout<<"GRADE : A ";
	}
	else if(total<=85){
		cout<<"GRADE : B ";
	}
	else{
		cout<<"GRADE : C";
	}
	
}
int main()
{
	student s[2];
	int i;
	for(i=0;i<2;i++)
	{
		s[i].getinfo();
		s[i].displayinfo();
	}
	
}
