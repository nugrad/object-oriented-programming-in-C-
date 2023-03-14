#include<iostream>
using namespace std;
template<class t>
class A{
	public:
		t n1=5;
		t n2=11;
		void add()
		{
			cout<<n1+n2<<endl;
		}
};
main()
{
	A<int>D;
	D.add();
}
