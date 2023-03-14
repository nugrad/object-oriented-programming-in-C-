#include<iostream>
#include<string>
using namespace std;
class daytype{
	string day;
	string nday;
	string pday;
	string wday[7]={"mon","tue","wed","thu","fri","sat","sun"};
	string fday;
	int num;
	public:
		daytype()
        {
            cout << "Enter the day you want to set : ";
            cin >> day;                                  //day set
            cout << "the day you entered : "<<day<<endl; //day printed
        }
		void setday(string d)
		{
			day=d;
		}
		void setnday(string nd)
		{
			nday=nd;
		}
		void setpday(string pd)
		{
			pday=pd;
		}
		void setfday(string fd)
		{
			fday=fd;
		}
		void setnum(int n)
		{
			num=n;
		}
		string getday()
		{
			return day;
		}
		string getnday()
		{
			return nday;
		}
		string getpday()
		{
			return pday;
		}
		string getfday()
		{
			return fday;
		}
		int getnum()
		{
			return num;
		}
		
		void getdata(void);
		void setdata(void);
			
		
};
void daytype::getdata(void)
{
	int i;
//	cout<<"enter the day of the week\n";
//	cin>>day;
	cout<<"enter how many days you want to add\n";
	cin>>num;
	for(i=0;i<7;i++){
		if(i==6)
		{
			i=1;
		}
		
			if(day==wday[i] ){
			nday=wday[i+1];
			pday=wday[i-1];
			fday=wday[i+num];}
		
		
	
	}
	
	
}
void daytype::setdata(void)
{
	
	cout<<"day of the week: "<<day;
	cout<<"\n";
	cout<<"next day is:"<<nday;
	cout<<"\n";
	cout<<"prevoius day : "<<pday;
	cout<<"\n";
	cout<<"day after added days is : "<<fday;
}
int main()
{
	cout<<"----The Day Counter"<<endl;
	cout<<"enter mon for Monday\n";
	cout<<"enter tue for Tuesday\n";
	cout<<"enter wed for Wednesday\n";
	cout<<"enter thu for Thursday\n";
	cout<<"enter mon for Friday\n";
	cout<<"enter mon for Saturday\n";
	cout<<"enter mon for Sunday\n";
	daytype d1;
	d1.getdata();
	d1.setdata();
}
