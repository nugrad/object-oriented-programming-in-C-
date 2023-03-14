#include<iostream>
using namespace std;
class animal{
	public:
		virtual  void myfeat()
		{
			cout<<"animal"<<endl;
		}
};
class mammal:public animal{
	public:
		void myfeat()
		{
			cout<<"mammal"<<endl;
		}
};
class reptile:public animal{
	public:
		void myfeat()
		{
			cout<<"reptile"<<endl;
		}
};
void intermediate_func(animal *a1)
{
 a1->myfeat();
}

int main()
{
//	animal *a;
//	mammal m;
//	reptile r;
//	a=&r;
//	a=&m;
//	
//	a->myfeat();
//	a->myfeat();
 animal *obj1 = new animal;
 mammal *obj2 = new mammal;
 reptile *obj3 = new reptile;

 intermediate_func(obj1);
 intermediate_func(obj2);
 intermediate_func(obj3);
}
