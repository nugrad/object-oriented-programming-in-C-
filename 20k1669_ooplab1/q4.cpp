#include<iostream>
using namespace std;
struct house_item{
	int item;
	int qty;
};
int main()
{
	house_item s1[3];
	int i;
	cout<<"enter item and quantity\n";
	for(i=0;i<3;i++)
	{
		cout<<"enter item number\n";
		cin>>s1[i].item;
		cout<<"enter quantity\n";
		cin>>s1[i].qty;
	}
	cout<<"\n";
	cout<<"displayed records:\n";
	cout<<"\n";
	cout<<"item"<<"\t"<<"qty"<<"\n";
	for(i=0;i<3;i++)
	{
		
		cout<<s1[i].item;
		cout<<"\t";
		cout<<s1[i].qty;
		cout<<"\n";
	}
}
