#include<iostream>
#include<string>
using namespace std;
class weapons{
	public:
		weades(){
			cout<<"ALL WEAPONS ARE DANGEROUS";
		}
};
class hotweapons:public weapons{
	public:
		void hotdesp()
		{
			cout<<"hotweapons use gun powder";
		}
};
class bombs:public hotweapons{
	public:
		void bombdesp()
		{
			cout<<"USA BOMBED JAPAN";
		}
};
class nuclearbombs:public bombs{
	public:
	void nbdesp()
	{
		cout<<"FATMAN dropped on hiroshima and LITTLEBOY dropped on nagasaki";
	}
};
int main()
{
	weapons w;
	w.weades();
	cout<<"\n";
	hotweapons h;
	h.hotdesp();
	cout<<"\n";
	bombs b;
	b.bombdesp();
	cout<<"\n";
	nuclearbombs nb;
	nb.nbdesp();
	
	
}
