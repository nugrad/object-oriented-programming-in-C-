#include<iostream>
using namespace std;
template<class T>
class number{// declaration
	T num;
	public:
		number(T n)
		{
			num=n;
		}
		T getnum();
		
    //T getnum()
//		{
//			return num;
//		}
	
};
// we can also define class member outside template class
template<class T>
T number<T>::getnum()
{
	return num;
}

int main()
{
	number<int>obj1(7);// object created
	number<float>obj2(7.1);
	cout<<obj1.getnum()<<endl;
	cout<<obj2.getnum()<<endl;
}
