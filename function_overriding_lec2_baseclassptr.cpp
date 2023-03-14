#include<iostream>
using namespace std;
class base{
	public:
		void show()
		{
			cout<<"base"<<endl;
			
		}
		
};
class derived:public base{
	public:
		void show()
		{
			cout<<"derived"<<endl;
		}
};
int main()
{
	base *b;
	derived d;
	b=&d;// refrence of derived class
	b->show();// calls overidden function from base class,though the pointer points to derived object,
	          // it is actually of base type,so calls function of base
}
