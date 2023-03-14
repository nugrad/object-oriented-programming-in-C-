#include<iostream>
#include<string>
using namespace std;
class item{
public:
string name;
int qty;
void getdata(){
			
			cout<<"\nenter quantity : \n";
			cin>>qty;
			
		}	
};
class bakedgoods:public item{
	public:
	float discount=0.1;
	int total;
	void indata()
	{
		cout<<"enter name : ";
		cin>>name;
		int price0;
		cout<<"enter price : ";
		cin>>price0;
		total=(price0*qty)-(price0*qty*discount);
		cout<<"total bill is : "<<total;
	}
	
};
class cakes:public bakedgoods{
	public:
		int finalbill;
		void bill(){
			int price=600;
			 finalbill=(price*qty)-price*qty*discount;
			cout<<"final bill for cakes : "<<finalbill;
			
		}
		
		
	
};
class bread:public bakedgoods{
	public:
		int finalbill2;
		void bill2()
		{
			int price2=200;
			 finalbill2=(price2*qty)-price2*qty*discount;
			cout<<" final bill for bread : "<<finalbill2;
		}
	
};
class drinks:public item{
	public:
		void bill3()
		{
			float dis=0.05;
			int price3=100;
			int finalbill3=(price3*qty)-price3*dis;
			cout<<"final bill : "<<finalbill3;
		}
	
};

int main()
{
	
	
	char ch;
	cout<<"enter your choice\n";
	cout<<" 1 to order cakes :\n";
	cout<<" 2 to order bread :\n";
	cout<<" 3 to order drinks :\n";
	cout<<" 4 to order any baked item\n";
	cin>>ch;
	switch(ch){
		case'1':{
				cakes c1;
	            c1.getdata();
	            c1.bill();
			break;
		}
		case'2':{
			bread b1;
	        b1.getdata();
	        b1.bill2();
			break;
		}
		case'3':{
			drinks d1;
            d1.getdata();
            d1.bill3();
			break;
		}
		case'4':
			bakedgoods bd;
			bd.getdata();
			bd.indata();
			
			
	}

	

	
}
