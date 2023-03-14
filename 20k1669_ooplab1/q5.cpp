#include<iostream>
using namespace std;
struct direct{
	char name[20];
	int a_code;
	int t_no;
};
int main()
{
	direct s[5];
	int i;
	cout<<"enter the records\n";// input records
	for(i=0;i<10;i++)
	{
		cout<<"enter name\n";
		cin>>s[i].name;
		cout<<"enter the area code\n";
		cin>>s[i].a_code;
		cout<<"enter telephone number\n";
		cin>>s[i].t_no;
	}
	cout<<"records displayed\n";// displaying records
	cout<<"\n";
	cout<<"name"<<"\t"<<"area code"<<"\t"<<"number"<<"\n";
	cout<<"\n";
	for(i=0;i<10;i++)
	{
		
		cout<<s[i].name;
		cout<<"\t";
		cout<<s[i].a_code;
		cout<<"\t";
		cout<<"\t";
		cout<<s[i].t_no;
		cout<<"\n";
	}
}
