#include<iostream>
#include<string>
using namespace std;
class invoice{// class
	string partnumber;
	string partdescrip;
	int qty;
	int price;
	int invam;
	public:
		void set_invam(int im)// setters
		{
			invam=im;
		}
		void set_partnumber(string pn)
		{
			partnumber=pn;
		}
		void set_partdescrip(string pd)
		{
			partdescrip=pd;
		}
		void set_qty(int qt)
		{
			qty=qt;
		}
		void set_price(int p)
		{
			price=p;
		}
		int get_invam()// getters
		{
			return invam;
		}
		string get_partnumber()
		{
			return partnumber;
		}
		string get_partdescrip()
		{
			return partdescrip;
		}
		int get_qty()
		{
			return qty;
		}
		int get_price()
		{
			return price;
		}
		void getinput(void);// memeber function
        
        void setinput(void);
//		void print_status(void);
};
void invoice::getinput(void)// memeber fucntion
{
	cout<<"enter the partnumber\n ";
	cin>>partnumber;
	cout<<"enter the part description\n";
	cin>>partdescrip;
	cout<<"enter the quantity\n";
	cin>>qty;
	cout<<"enter the price\n";
	cin>>price;
}
void invoice::setinput(void)
{
	cout<<"------invoice generated-------\n";
	cout<<"part number : "<<partnumber;
	cout<<"\n";
	cout<<"part description : "<<partdescrip;
	cout<<"\n";
	if(qty<0){
		qty=0;
	}
	else{
		cout<<"quantity : "<<qty;
	}
	cout<<"\n";
	if(price<0)
	{
		price=0;
	}
	else
	{
		cout<<"price : "<<price;
	}
	cout<<"\n";
	invam=price*qty;
	cout<<"invoice amount : "<<invam;
	cout<<"\n";
}
//void invoice::print_status()
//{
//	
//}
int main()
{
	invoice e;// object
	e.getinput();// invoice input
	e.setinput();// invoice output
//	e.print_status();
}
