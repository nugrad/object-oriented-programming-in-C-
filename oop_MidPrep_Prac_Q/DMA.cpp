#include<iostream>
using namespace std;
class A
{
	public:
		char* name;
	A()
	{
		name = new char[20];
	}
	
	A(char *A)
	{
		name=A;
	}
	
	void display()
	{
		cout<<"Name = "<<name<<endl;
	}
	~A()
	{
		delete name;
		cout<<"Destructor Called"<<endl;
	}
};
int main () {
	char* str = new char[20];
    cout<<"Enter Name : ";
    cin>>str;
    A a(str);
    a.display();
   double* pvalue  = NULL; // Pointer initialized with null
   pvalue  = new double;   // Request memory for the variable
 
   *pvalue = 29494.99;     // Store value at allocated address
   cout << "Value of pvalue : " << *pvalue << endl;

   delete pvalue;         // free up the memory.

   return 0;
}
