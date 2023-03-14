#include<iostream>
#include<string>
using namespace std;
class Parent {
public:
  void sleep() {
  cout<<"sooja beta warna hamza ajayega";}
};

class Child: public Parent {
public:
  void gotoSchool(){
  cout<<"nikal bsdk school ja";}
};

int main( ) 
{ 
  Parent *p;
  Child child;

  // upcast - implicit type cast allowed
  //Parent *pParent = &child; // implicit upcast
   // explicit upcast
   p=(Parent *)&child;
   p->sleep();

  // downcast - explicit type case required 
  //Child *pChild =  (Child *) &parent;// downcast can only be explicit

  
  
  //pChild -> gotoSchool();
    
  return 0; 
}
