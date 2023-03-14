#include<iostream>
#include<string>
using namespace std;
class senzu{
	string name;
	int econsum;
	float unitp;
	int ebill;
	int amt;
	int samt;
	int profit;
	int m;
	public:
		void setm(int p){
			m=p;
		}
		int getm()
		{
			return m;
		}
		void set_name(string n)
		{
			name=n;
		}
		void set_econsum(int es)
		{
			econsum=es;
		}
		void set_unitp(float up)
		{
		unitp=up;	
		}
		void set_ebill(int eb)
		{
			ebill=eb;
		}
		void set_amt(int oa)
		{
			amt=oa;
		}
		void set_samt(int sa)
		{
			samt=sa;
		}
		void set_profit(int p)
		{
			profit=p;
		}
		string get_name()
		{
			return name;
		}
		int get_econsum()
		{
			return econsum;
		}
		float get_unitp()
		{
			return unitp;
		}
		int get_ebill()
		{
			return ebill;
		}
		int get_amt()
		{
			return amt;
		}
		int get_samt()
		{
			return samt;
		}
		int get_profit()
		{
			return profit;
		}
		void getinput(void);// memeber function
        
        void setinput(void);
		
	
	
};
void senzu::getinput(void)
{
	
	cout<<"enter number of employess\n";
	cin>>m;
	int j;
	for(j=0;j<m;j++)
	{
		cout<<"enter manager name : "<<j+1;
	cin>>name;
	}
	cout<<"enter manager name : ";
	cin>>name;
	cout<<"enter units of electricity consumed :";
	cin>>econsum;
	cout<<"enter per unit price : ";
	cin>>unitp;
	cout<<"enter original price of beans : ";
	cin>>amt;
	cout<<"enter the sold price of beans : ";
	cin>>samt;
}
void senzu::setinput(void)
{
	cout<<"--------------daily requirement-----------\n";
	int j;
	for(j=0;j<m;j++){
	
	cout<<"mananger : "<<name;
}
	cout<<"\n";
	cout<<"units consumed : "<<econsum;
	cout<<"\n";
	cout<<"per unit price : "<<unitp;
	cout<<"\n";
	ebill=econsum*unitp;
	cout<<"electricity consumed per day : "<<ebill;
	cout<<"\n";
	cout<<"original bean price : "<<amt;
	cout<<"\n";
	cout<<"sold bean price : "<<samt;
	cout<<"\n";
	profit=samt-amt;
	cout<<"profit made : "<<profit;
	cout<<"\n";
}
int main()
{
	senzu sen[10];
	int i,j;
	int n;
	cout<<"enter number of offices : ";
	cin>>n;
	for(i=0;i<n;i++)
	{
		cout<<"office : "<<i+1;
		cout<<"\n";
		
		sen[i].getinput();
		sen[i].setinput();
		cout<<"--->";
	}
}
