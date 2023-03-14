#include<iostream>
using namespace std;
class stu{
	public:
	string name;
	float cgpa;
	const int roll;
	rollno(){}
	void set(string n,float cg)
	{
		name=n;
		cgpa=cg;
	}
	void print()
	{
		cout<<name;
		cout<<"\n";
		cout<<roll;
		cout<<"\n";
		cout<<cgpa;
	}
	
	
	
};
int main()
{
	stu s(12);
	s.set("ahmed",4.0);
	s.print();
	
}
