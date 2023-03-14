#include<iostream>
using namespace std;
template<typename t1,typename t2>

max(t1 a,t2 b)
{
	return a<b?b:a;
}

int main()
{
	cout<<"max"<<max(4,2)<<endl;
	cout<<"max"<<max(3.1,4.1)<<endl;
	
}
