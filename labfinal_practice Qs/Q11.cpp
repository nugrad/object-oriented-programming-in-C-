#include<iostream>
#include<string>
using namespace std;
class person{
	public:
		void draw()
		{
			cout<<"person can draw"<<endl;
		}
};
class artist:public person{
	public:
		void draw()
		{
			cout<<"artist can draw"<<endl;
		}
};
class gunmen:public person{
	public:
		void draw()
		{
			cout<<"gunmen can draw";
		}
};
int main()
{
	person p;
	p.draw();
	artist a,a2;
	a.draw();
	a2.person::draw();
	gunmen g,g2;
	g.draw();
	g2.person::draw();
	
	
}
