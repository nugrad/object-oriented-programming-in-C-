#include<iostream>
#include<string>
using namespace std;
 class A// base class
{

public:
	int x;
A(int i)
{
x = i;
}
};
class B: public A// B derived from A
{

public:
	int y;
B(int i, int j): A(i)// memeber inilizer list to call constructor of base into derived class
{
y = j;
}
};
class C: public B// C derived from  B
{

public:
	int z;
C(int i, int j, int k): B(i, j)
{
z = k;
}
void display()  // function to display
    {  
          
        cout<<x<<y<<z<<endl;
    }   
};
int main()
{
C ob(1, 2, 3);// object of derived class C
ob.display();
}
