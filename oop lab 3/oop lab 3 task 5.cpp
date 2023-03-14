#include<iostream>
#include<string>
using namespace std;
class account{
	int acno;
	string name;
	long balance;
	int time;
	float rate;
	float intre;
	int count1;
	public:
		void openAccount(){
			cout<<"Enter account number:\t";
			cin>>acno;
			cout<<"Enter Name:\t";
			
			cin>>name;
			cout<<"Enter Balance:\t";
			cin>>balance;
			
		}
		void showAccounts(){
			cout<<"Account Number: "<<acno<<"\tName: "<<name<<"\tBalance: "<<balance<<endl;
		}
		void deposit(){
			long amt2;
			int count1=0;
			cout<<"Enter Amount you wanna deposit:\t";
			cin>>amt2;
			balance=balance+amt2;
			cout<<"deposited amount : "<<amt2;
			cout<<"new balalnce : "<<balance;
			count1++;
//			cout<<"transaction : "<<count1;
		}
		void withdraw(){
			long amt;
			int count1=0;
			cout<<"Enter Amount you wanna withdraw:\t";
			cin>>amt;
			if(amt<=balance)
				balance =balance-amt;
			else
				cout<<"Less Balance..."<<endl;
			cout<<"amount withdrew:"<<amt;
			cout<<"remaining balalnce : "<<balance;	
			count1++;
//			cout<<"transaction : "<<count1;
			
		}
		void trans()
		{
			cout<<"number of transactions"<<count1;
		}
		void interest()
		{
			cout<<"enter time in years : ";
			cin>>time;
			cout<<"enter the rate : ";
			cin>>rate;
			intre=balance*rate*time/100;
			cout<<"intrest : "<<intre;
		}
		
		
	
};
int main()
{
	account obj;
	char ch;
	do{
		cout<<"\n\n1:\tmake account&display\n2:\t number of transactions\n3:\tDeposit\n4:\tWithdraw\n5:\tinterest"<<endl;
		cout<<"Please ENter Your First Choice:\t";
		cin>>ch;
		switch(ch){
			
			case '1':
				obj.openAccount();
				obj.showAccounts();
				break;
			case '2':
				
            obj.trans();
  
				break;
			case '3':
				obj.deposit();
				break;				
			case '4':
				obj.withdraw();
						
				break;
			case '5':
				obj.interest();
				break;
			default:
				cout<<"Wrong Option"<<endl;				
		}
	}
	while(ch!=5);
	return 0;
	
	
}
