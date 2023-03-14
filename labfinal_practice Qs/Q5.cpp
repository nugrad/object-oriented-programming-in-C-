#include<iostream>
#include<string>
using namespace std;
class weapons{
	public:
		void descp()
		{
			cout<<"all weapons are dangerous"<<endl;
		}
};
class hotweapons:public weapons{
	public:
		void descp()
		{
			cout<<"hot weapons use gun powder"<<endl;
		}
};
class bombs:public hotweapons{
	public:
		void descp()
		{
			cout<<"fatman and little boy"<<endl;
		}
};
class nuclear:public bombs{
	public:
		void descp()
		{
			cout<<"hiroshima and nagasaki"<<endl;
		}
	
};
int main()
{
	weapons w;
	w.descp();
	hotweapons hw;
	hw.descp();
	bombs b;
	b.descp();
	nuclear nc;
	nc.descp();
}
