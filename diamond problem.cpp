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
void foundin()
{
cout<<"An animal can be found in many places : \n";
}
};
class mammal: virtual public Animal
{
public:
void foundin()
{
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

class Whales :  public mammal,marineAnimal
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

foundin()
{
cout<<"Whale type :"<<getwhaletype()<<"\nwhale Name :"<<getname();
}

};
int main()
{
Animal a;
mammal m;
marineAnimal ma;
Whales w;
w.setname("xyz");
a.foundin();
m.foundin();
ma.foundin();
w.setwhaletype("abc");
w.foundin();
return 0;
}
