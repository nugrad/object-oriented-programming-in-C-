#include<iostream>
#include<string>
#include<conio.h>
using namespace std;
class Animal
{
private :
string name;
public:
void setname(string n)
{
name=n;
}
string getname()
{
return name;
}
virtual void foundin()
{
cout<<"An animal can be found in many places : \n";
}
};
class mammal: virtual public Animal
{
public:
void foundin()
{
	//foundin1();
cout<<"A mammal can be found in water or on land :\n";
}
};
class marineAnimal:virtual  public Animal
{
public:
void foundin()
{
cout<<"A marine animal can only be found in bodies of water :\n";
}
};

class Whales :  public mammal,public marineAnimal
{
private:
string whaletype;
public:
void setwhaletype(string w)
{
whaletype=w;
}
string getwhaletype()
{
return whaletype;
}

void foundin()
{
//	foundin2();
//	foundin3();
cout<<"Whale type :"<<getwhaletype()<<"\nwhale Name :"<<getname();
}

};
void myfunc(Animal *p1)
{
	p1->foundin();
//	p1->disp();
//	p1->bonus();
}
int main()
{
Animal *a=new Animal;
mammal *m=new mammal;
marineAnimal *ma=new marineAnimal;
Whales *w=new Whales;
//w.setname("xyz");
//a.foundin();
//m.foundin();
//ma.foundin();
//w.setwhaletype("abc");
//w.foundin4();
myfunc(a);
myfunc(m);
myfunc(ma);
myfunc(w);
return 0;
}
