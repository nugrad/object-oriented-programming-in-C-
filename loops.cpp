// today we will discuss looping in cpp
// not new and same concept as c
// just for logic recall and sake of syntax we will practice some Q's
#include<iostream>
using namespace std;
int main()
{
	// PROGRAM 1
	// length of a number
	/*int num;
	int rem;
	int i;
	cout<<"enter the number\n";
	cin>>num;
	for(i=0;rem=num%10;i++)
	{
		num=num/10;
		
	}
	cout<<"number of digits are\n"<<i;
	*/
	// PROGRAM 2
	// palindrome
	/*int num;
	int rem;
	int rev=0;
	cout<<"enter the number\n";
	cin>>num;
	while(num!=0)
	{
		rem=num%10;
		rev=rev*10+rem;
		num=num/10;
	}
	if(num==rev)
	{
		cout<<"in palindrome\n"<<num;
	}
	else
	{
		cout<<"not in palindrome\n";
	}
	*/
	// PROGRAM 3
	// factorial
	/*int num;
	int fac=1;
	int i=1;
	cout<<"enter the number\n";
	cin>>num;
	while(i<=num)
	{
		fac=fac*i;
		i=i+1;
	}
	cout<<"factorial is \n"<<fac;
	*/
	// PROGRAM 4
	// fibonacci
/*	int a=0;
	int b=1;
	int i=1;
	int range;
	int c;
	cout<<"enter the range\n";
	cin>>range;
	while(i<=range)
	{
		c=a+b;
		a=b;
		b=c;
		i=i+1;
		cout<<"\t"<<c;
	}
	*/
	// PROGRAM 5
	// reverse of a number
	/*int num;
	int rev=0;
	int rem;
	cout<<"enter the number\n";
	cin>>num;
	while(num!=0)
	{
		rem=num%10;
		rev=rev*10+rem;
		num=num/10;
		
	}
	cout<<"reverse:"<<rev;
	*/
	// PROGRAM 6
	// number of specific digit in a num
	/*int num;
	int rem;
	int count=0;
	cout<<"enter the number\n ";
	cin>>num;
	while(num!=0)
	{
		rem=num%10;
		num=num/10;
		if(rem==7)
		{
			count=count+1;
		}
	}
	cout<<"number of 7's are :"<<count;
	*/
	// PROGRAM 7
	// sum of even numbers
	/*int limit;
	int i;
	int sum=0;
	cout<<"enter the limit\n";
	cin>>limit;
	cout<<"even numbers within the limit are \n";
	for(i=0;i<=limit;i+=2)
	{
		cout<<" \t"<<i;
		sum=sum+i;
		cout<<"\n";
		
	}
	cout<<"sum of even numbers is :"<<sum;
	*/
	
	
}
