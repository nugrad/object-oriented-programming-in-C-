#include<iostream>
#include<string>
using namespace std;
int main()
{
	int feet=-1;
	int inch=-1;
	string x="enter positive numbers";
	try{
		if(feet<0 && inch<0)
		{
			throw x;
		}
		else{
			cout<<feet-inch;
		}
	}
	catch(string x)
	{
		cout<<x;
	}
}
