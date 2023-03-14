#include<iostream>
#include<string>

using namespace std;
class sample{
	int x;
	int y;
	int len;
	int bred;
	string name;
//	const int id;
	public:
		static int objcont;
		sample(int l,int b)
		{
		len=l;
		bred=b;	
		objcont++;
		}
		int cal(){
			return len*bred;
		}
		int sum(int x,int y)
		{
			this->x=x;
			this->y=y;
			return x+y;
		}
//		sample(string name,int id):name(name),id(id){// constants are initilized using member intializer list
//		}
//		void disp()
//		{
//			cout<<name<<endl<<id<<endl;
//		}
};
int sample::objcont=0;// static varaible declared outside the class
int main()
{
	
//	cout<<s.sum(10,20);// commented for this
//	sample s1("hamza",1669);// coomented for constants
//	s1.disp();
//	sample s2("umar",1702);
//	s2.disp();
//	sample s3("daniyal",1602);
//	s3.disp();
sample b(3,4);
sample b2(5,6);
cout<<b.cal()<<endl;
cout<<b2.cal()<<endl;
cout<<"object count : "<<sample::objcont;
}
