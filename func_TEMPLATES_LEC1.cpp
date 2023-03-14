#include<iostream>
using namespace std;
template<typename T>// we could have also used the keyword class instead of typename
T add(T n1,T n2)// template defined
{
	return(n1+n2);
}
int main()
{
	// now for calling there are two methods ,either we tell the datatype or else compiler will recognise it by itself
	int res1;
	double res2;
	res1=add<int>(1,3);
	res2=add<double>(2.1,3.1);
	cout<<"if we tell datatype int to complier : "<<res1<<endl;
	cout<<"if we tell datatype double to complier : "<<res2<<endl;
	cout<<"we dont tell datatype,compiler itself deduces : "<<add(4,8)<<endl;
	cout<<"we dont tell datatype,compiler itself deduces : "<<add(9.1,8.5)<<endl;
	
}

