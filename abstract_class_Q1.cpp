#include <iostream>
using namespace std;
class Bank{
	public:
		void virtual display()=0;// pure virtual function 
		
};

class HMB: public Bank{
	int intr1;
	public:
	HMB(int intr){
		intr1= intr;
	}
	void display(){
		cout<<"\tHMB INTEREST: "<<intr1;// pure virtual defintion
	}
};

class HBL: public Bank{
	int intr2;
	public:
	HBL(int intrtw){
		intr2= intrtw;
	}
	void display(){
		cout<<"\n\tHBL INTEREST: "<<intr2;// pure virtual defintion
	}	
};

class MCB: public Bank{
	int intr3;
	public:
	MCB(int intrthe){
		intr3= intrthe;
	}
	void display(){
		cout<<"\n\tMCB INTEREST: "<<intr3;// pure virtual defintion
	}
};

int main(){
	HMB h(4);// object of derived class
	h.display();
	HBL hb(2);// object of derived class
	hb.display();
	MCB m(3);// object of derived class
	m.display();
}
