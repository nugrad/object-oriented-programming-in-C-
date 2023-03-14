#include<iostream>
#include<string>
using namespace std;
class livingthing{
	public:
		string name="INSAAN EK SAANP HAI";
		livingthing(int x){
			cout<<"all livinthings breathe"<<endl;
		}
		livingthing(){
			cout<<"-"<<endl;
		}
//		void breathe()
//		{
//			cout<<"all living things can braethe"<<endl;
//		}
};
class animal:virtual public livingthing{
	public:
		animal(int x):livingthing(x)
		{
			cout<<"animlas breathe"<<endl;
		}
//		void all()
//		{
//			cout<<"animals all"<<endl;
//		}
//		void breathe()
//		{
//			cout<<"all animals breathe"<<endl;
//		}
};
class reptiles:virtual public livingthing{
	public:
		reptiles(int x):livingthing(x)
		{
			cout<<"reptiles breathe"<<endl;
		}
//		void breathe()
//		{
//			cout<<"reptiles also breathe"<<endl;
//		}
};
class snake:public animal, reptiles{
	public:
		snake(int x):reptiles(x),animal(x),livingthing(x)
		{
			cout<<"python breathes"<<endl;
		}
//		void breathe()
//		{
//			cout<<"snakes python"<<endl;
//		}
		
};
int main()
{
	snake s(10);
//	s.breathe();
//	cout<<s.name;
//	s.all();
//	livingthing a;
//	a.breathe();
}
