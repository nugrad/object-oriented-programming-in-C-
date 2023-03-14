#include<iostream>
using namespace std;
// the code also covers the concept of constructor overloading
class cot{
	int len;
	int per;
	int bred;
	int *rate;// for shallow copy
	int hr;
	public:
		cot()// default
		{
			rate=new int;// alloate memeory for ptr,shallow copy
			len=10;
			cout<<"length is : "<<len<<endl;
			cout<<"--------------------"<<endl;
		}
		~cot()
		{
			cout<<"BABU DESTRUCTOR"<<endl;
		}
		cot(int p,int b)// parametrized
		{
			per=p;
			bred=b;
		}
		cot(cot&obj)// copy constructor
		{
			per=obj.per;
			bred=obj.bred;
		}
		void prod(){
			int res;
			res=per*bred;
			cout<<"product is : "<<res<<endl;
			cout<<"----------------"<<endl;
			
		}
		void setdim(int r,int h){
			*rate=r;
			 hr=h;
		}
		void show()
		{
			cout<<"rate  : "<<*rate<<endl;
			cout<<"hour : "<<hr<<endl;
			cout<<"-------------------"<<endl;
		}
};
int main()
{
//	cot c1;
//	cot c(10,20);
//	cot c3=c;// copy content of c to c3
//	c.prod();
//	c3.prod();
//---------------------------------------------------------------------,rest covers shallow copy
	cot c4,c5;
	c4.setdim(14,12);
	c4.show();
	cot c6;
	c6=c4;
	c6.setdim(44,42);
	c6.show();
	c4.show();
	c5=c4;
	c5.show();
	c5.setdim(11,13);
	c4.show();
	c6.show();
	c5.show();
	
}

