#include<iostream>
#include<string>
using namespace std;
class message{
	string str;
	public:
		message()
		{
			str="no";
		}
		message(string str1)
		{
			str=str1;
		}
		void print()
		{
			cout<<str;
		}
//		void print()
//		{
//			
//		}
};
int main()
{
	message s("");
	s.print();
}
