#include<iostream>
#include<string>
using namespace std;
template< class A >
class sumArray{
	public:
		int m;
		int i;
		A arr[6];
		
		
		   void sumarray(){
//		   	cout<<"enter number of elemnts";
//		   	cin>>;
		   	cout<<"enter the array elemnts";
		   	for(i=0;i<6;i++)
			{
				cin>>arr[i];
			}
			for(i=0;i<6;i++)
			{
				cout<<arr[i];
			}
			
		}
		A summation()
		{
			A sum=0;
			
			for(i=0;i<6;i++)
			{
				 sum=sum+arr[i];
				 
			}
			cout<<sum;
		}
};
int main()
{
	sumArray<int>s;
	
	s.summation();
	
}

