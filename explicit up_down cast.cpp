#include<iostream>
#include<string>
using namespace std;
class parent{
	public:
		void show()
		{
			cout<<"show your"<<endl;
		}
};
class child:public parent{
	public:
		void def()
		{
			cout<<"mobile history"<<endl;
		}
};
int main()
{
	parent *p;
	child *c,c1;
	p=&c1;// implicit upcast
	p->show();
	p=(parent *)&c;// explicit upcast
	c=(child *)&p;// explicit downcast
	p->show();
	c->def();
	
}
