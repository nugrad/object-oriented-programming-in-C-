#include<iostream>
#include<string>
using namespace std;
class lone{
	public:
		string lonename="hamza";
		int id=1669;
		friend void disp(lone obj);
};
void disp(lone obj)
{
	cout<<"friend of lone class"<<endl<<obj.lonename<<endl<<obj.id<<endl;
}
int main()
{
	lone obj;
	disp(obj);
}
