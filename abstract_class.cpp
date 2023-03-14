#include<iostream>
using namespace std;
class base{
	public:
		virtual void show()=0;// pure virtual function
};
class derived:public base{
	public:
		void show()
		{
			cout<<"pure virtual defined in derived class";// pure virtual defined
		}
};
int main()
{
	//base obj;// error
	base *p;// here we have used refreces of base class
	derived d;
	p=&d;
	p->show();
	
}
