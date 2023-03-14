#include<iostream>
using namespace std;
template<class t>
class calc{
	t n1,n2;
	public:
		calc(t a,t b)
		{
			n1=a;
			n2=b;
		}
		t add()
		{
			return n1+n2;
		}
		t sub()
		{
			return n1-n2;
		}
		t mul()
		{
			return n1*n2;
		}
		t div()
		{
			return n1/n2;
		}
		void disp()
		{
			cout<<add()<<endl;
			cout<<sub()<<endl;
			cout<<mul()<<endl;
			cout<<div()<<endl;
		}
};
main()
{
	calc<int>obj(2,1);
	obj.disp();
	cout<<"----------------------"<<endl;
	calc<float>obj2(4.5,2.5);
	obj2.disp();
}
