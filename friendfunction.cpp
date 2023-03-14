#include<iostream>
#include<string>
using namespace std;
class xyz{
	int num=100;
	char ch='H';
	public:
		friend void disp(xyz);// friend func of class xyz
};
void disp(xyz obj)
{
	cout<<obj.num<<endl;
	cout<<obj.ch<<endl;
}
class dist{
	int meter;
	friend int add(dist);// friend func of class dist
	public:
		dist()
		{
			meter=0;
		}
};
class loneclass{
	string loneobjname;
	int loneobjid;
	public:
	friend friendofloneclass(loneclass);// friend func of class loneclass
};
friendofloneclass(loneclass lc){
	lc.loneobjname="friend function of loneclass";
	lc.loneobjid=1669;
	cout<<lc.loneobjname<<endl;
	cout<<lc.loneobjid<<endl;
}
int add(dist d)
{
	d.meter+=5;
	return d.meter;
}
int main()
{
	xyz W;// object of xyz
	disp(W);// friend of xyz
	dist d1;// object of dist
	cout<<add(d1)<<endl;// friend of dist
	loneclass l;// object of loneclass
	cout<<friendofloneclass(l);// friend of loneclass
}
