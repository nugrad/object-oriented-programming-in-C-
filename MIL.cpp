#include<iostream>
#include<string>
using namespace std;
class dimension{
	public:
	double height;
	double width;
	double depth;
	
		dimension(int h,int w,int d)
		{
			height=h;
			width=w;
			depth=d;
		}
		double getheight()
		{
			return height;
		}
		double getwidth()
		{
			return width;
		}
		double getdepth(){
			return depth;
		}
};
class phone:public dimension{
	private:
//		string model;
//		int number;
		public:
			string model;
		int number;
		
			phone(string m,int n,double h,double w,double d):dimension(h,w,d){
				model=m;
				number=n;
			}
			void show()
			{
				cout<<"height : "<<height<<endl;
				cout<<"width : "<<width<<endl;
				cout<<"depth : "<<depth<<endl;
				cout<<"model :"<<model<<endl;
				cout<<"number : "<<number<<endl;
				cout<<"---------------"<<endl;
			}
	
};
class smartphone:public phone{
	int storage;
	public:
		smartphone(int s,string m,int n,double h,double w,double d):phone(m,n,h,w,d){
			storage=s;
		}
		void show()
			{
				cout<<"height : "<<height<<endl;
				cout<<"width : "<<width<<endl;
				cout<<"depth : "<<depth<<endl;
				cout<<"model :"<<model<<endl;
				cout<<"number : "<<number<<endl;
				cout<<"storage in GB:"<<storage<<endl;
			}
			void browse()
			{
				cout<<"browsing"<<endl;
			
			}
			void takepicture()
			{
				cout<<"take picture"<<endl;
			}
		
	
};
class deskphone:public phone{
	int volt;
	public:
		deskphone(int v,string m,int n,double h,double w,double d):phone(m,n,h,w,d){
			volt=v;
				}
				void show()
			{
				cout<<"height : "<<height<<endl;
				cout<<"width : "<<width<<endl;
				cout<<"model :"<<model<<endl;
				cout<<"number : "<<number<<endl;
				cout<<"power : "<<volt<<endl;
			}
			void plugin()
			{
				cout<<"plugged in "<<endl;
			}
	
};
//class rotaryphone:public deskphone{
//	
//};
//class pushbuttonphone:public deskphone{
//	
//};
int main()
{
//	dimension d(4,4,5);
//	cout<<"height : "<<d.getheight()<<endl;
//	cout<<"width : "<<d.getwidth()<<endl;
//	cout<<"depth : "<<d.getdepth()<<endl;
cout<<"phone data"<<endl;
cout<<"----------------";
phone p("old",159,4,4,5);
p.show();
cout<<"smart phone data"<<endl;
cout<<"----------------"<<endl;
smartphone sp(132,"new",951,6,4,3);
sp.show();
sp.browse();
sp.takepicture();
cout<<"-------------"<<endl;
cout<<"deskphone data"<<endl;
deskphone dp(42,"old",132,6,7,8);
dp.show();
dp.plugin();
}
