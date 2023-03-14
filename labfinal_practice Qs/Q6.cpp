#include<iostream>
#include<string>
using namespace std;
class item{
	public:
		string name;
		int qty;
	
};
class baked:public item{
	public:
	float discount=0.01;
	int bill;
	
};
class cakes:public baked{
	public :
		int price=100;
		name="lava cake";
		qty=6;
		  bill=price-(price*discount);
		 
		 
		
	
};
class bread:public baked{
	public :
		 price=40;
		 name="morning fresh";
		 qty=4;
		  bill=price-(price*discount);
		 
	
};
class drinks:public item{
	public:
	float	discount2=0.05;
	int price2=50;
		 name="sting";
		 qty=4;
		int   bill2=price2-(price2*discount2);
		 
	
};
int main()
{
	cout<<"for cakes -----"<<endl;
	cakes ck;
	cout<<"name : "<<ck.name<<endl;
	cout<<"quantity"<<ck.qty<<endl;
	cout<<"bill : "<<ck.bill<<endl;
	cout<<"for bread ------"<<endl;
	bread bd;
	cout<<"name : "<<bd.name<<endl;
	cout<<"quantity"<<bd.qty<<endl;
	cout<<"bill : "<<bd.bill<<endl;
	cout<<"for drinks ----"<<endl;
	drinks dk;
	cout<<"name : "<<dk.name<<endl;
	cout<<"quantity"<<dk.qty<<endl;
	cout<<"bill : "<<dk.bill2<<endl;
	
	
	
}
