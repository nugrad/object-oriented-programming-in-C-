#include<iostream>
#include<iomanip>
using namespace std;

int sandwi=100, burg=200, psta=500, bill=0, dis=0, sum_s=0, sum_b=0, sum_p=0;
printbill()
{
	cout << "\nNormal Order:" ;
	cout <<   "\nOrder";
	cout <<     "\tAmount";
	cout <<   "\nPasta:";
	cout <<  "\tRs." << sum_p;
	cout <<  "\nBurger:";
	cout <<  "\tRs." << sum_b;
	cout <<  "\nSandwich:";
	cout <<  "\tRs." << sum_s;
	cout <<   "\n\nDiscount:";
	cout <<  "\tRs." << dis;
	cout <<  "\nTotal:";
	cout <<  "\tRs." << bill;
	
	return 0;

}
finalbill()
{
	char y, z[100];
	
	cout << "\nIs The Customer A Member? Y/N... ";
	cin >> y;
	
	if(y=='Y' || y=='y')
			{
				cout << "\nCustomer ID: ";
				cin >> z;
				
				dis=bill*0.05;
				bill=bill*0.95;
				printbill();
				
			}
			else if(y=='N' || y=='n')
			{
				dis=0;
				printbill();
			}
			else
			{
				exit(0);
			}
	
}





order()
{
	int choice=0, qty=0;
	char a, b, c;
	
	cout << " enter 1 for Sandwich, Press-2 for Burger, Press-3 for Pasta, Press Any Other Key To Exit...";
	cin >> choice;
	
	switch(choice)
	{
		case 1:
		{
			cout << "\nEnter Quantity of Sandwiches Ordered: ";
			cin >> qty;
			
			sum_s=sandwi*qty;
			bill=bill+sum_s;

			qty=0;
			cout << "\nWould The Customer Like To Order Anything Else? Y/N... ";
			cin >> a;
			if(a=='Y' || a=='y')
			{
				order();
			}
			else if(a=='N' || a=='n')
			{
				finalbill();	
			}
			else
			{
				exit(0);
			}
		}
		case 2:
		{
			cout << "\nEnter Quantity of Burgers Ordered: ";
			cin >> qty;
			
			sum_b=burg*qty;
			bill=bill+sum_b;
			
			qty=0;
			cout << "\nWould The Customer Like To Order Anything Else? Y/N... ";
			cin >> b;
			if(b=='Y' || b=='y')
			{
				order();
			}
			else if(b=='N' || b=='n')
			{
				finalbill();	
			}
			else
			{
				exit(0);
			}
		}
		case 3:
		{
			cout << "\nEnter Quantity of Pasta Ordered: ";
			cin >> qty;
			
			sum_p=psta*qty;
			bill=bill+sum_p;

			qty=0;
			cout << "\nWould The Customer Like To Order Anything Else? Y/N... ";
			cin >> c;
			if(c=='Y' || c=='y')
			{
				order();
			}
			else if(c=='N' || c=='n')
			{
				finalbill();	
			}
			else
			{
				exit(0);
			}
		}
		default:
		{
			order();
		}
	}
}



int main()
{
	order();
}
