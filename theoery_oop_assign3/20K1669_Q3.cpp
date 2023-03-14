#include<iostream>
#include<string>
using namespace std;
class vehicle{
	string type;
	string maker;
	string model;
	string color;
	int year;
	int milesdriven;
	public:
		vehicle(string ty,string mk,string mod,string col,int ye,int mldr){
			type=ty;
			maker=mk;
			model=mod;
			color=col;
			year=ye;
			milesdriven=mldr;
		}
		void settype(string t)
		{
			type=t;
		}
		void setmaker(string m)
		{
			maker=m;
		}
		void setmodel(string mo)
		{
			model=mo;
		}
		void setcolor(string cr)
		{
			color=cr;
		}
		void setyear(int y)
		{
			year=y;
		}
		void setmilesdriven(int md)
		{
			milesdriven=md;
		}
		string gettype()
		{
			return type;
		}
		string getmaker()
		{
			return maker;
		}
		string getmodel()
		{
			return model;
		}
		string getcolor()
		{
			return color;
		}
		int getyear()
		{
			return year;
		}
		int getmilesdriven()
		{
			return milesdriven;
		}
	
};
class gasvehicle:virtual public vehicle{
	int tanksize;
	public:
		gasvehicle(int ts,string ty,string mk,string mod,string col,int ye,int mldr):vehicle(ty,mk,mod,col,ye,mldr){
			tanksize=ts;
		}
		void settanksize(int tz){
			tanksize=tz;
		}
		int gettanksize()
		{
			return tanksize;
		}
};
class electricvehicle:virtual public vehicle{
	int energystorage;
	public:
		electricvehicle(int es,string ty,string mk,string mod,string col,int ye,int mldr):vehicle(ty,mk,mod,col,ye,mldr){
			energystorage=es;
		}
		void setenergystorage(int eg)
		{
			energystorage=eg;
		}
		int getenergystorage()
		{
			return energystorage;
		}
	
};
class heavyperformance:public gasvehicle{
	int horsepower;
	int maxspeed;
	public:
		heavyperformance(int hp,int ms,int ts,string ty,string mk,string mod,string col,int ye,int mldr):gasvehicle(ts,ty,mk,mod,col,ye,mldr),vehicle(ty,mk,mod,col,ye,mldr){
			horsepower=hp;
			maxspeed=ms;
		}
		void sethorsepower(int hsp)
		{
			horsepower=hsp;
		}
		void setmaxspeed(int mx)
		{
			maxspeed=mx;
		}
		int gethorsepower()
		{
			return horsepower;
			
		}
		int getmaxspeed()
		{
			return maxspeed;
		}
};
class heavyvehicle:public gasvehicle,public electricvehicle{
	int maxweight;
	int nowheels;
	int length;
	public:
		heavyvehicle(int mw,int nwee,int len,string ty,string mk,string mod,string col,int ye,int mldr,int ts,int es):gasvehicle(ts,ty,mk,mod,col,ye,mldr),electricvehicle(es,ty,mk,mod,col,ye,mldr),vehicle(ty,mk,mod,col,ye,mldr){
			maxweight=mw;
			nowheels=nwee;
			length=len;
		}
		void setmaxweight(int mt){
			maxweight=mt;
		}
		void setnowheels(int ns)
		{
			nowheels=ns;
		}
		void setlength(int lh)
		{
			length=lh;
		}
		int getmaxweight()
		{
			return maxweight;
		}
		int getnowheels()
		{
			return nowheels;
		}
		int getlength()
		{
			return length;
		}
		
	
};
//class sportscar:public highperformance{
//	
//};
//class constructiontruck:public heavyvehicle{
//};
class bus:public heavyvehicle{
	int seats;
	public:
		
		
		
		
		bus(int st,string ty,string mk,string mod,string col,int ye,int mldr,int ts,int es,int mw,int nwee,int len):heavyvehicle(mw,nwee,len,ts,es,ty,mk,mod,col,ye,mldr),vehicle(ty,mk,mod,col,ye,mldr){
			seats=st;
		}
		
		void setseats(int ss){
			seats=ss;
		}
		int getseats()
		{
			return seats;
		}
		void display()
		{
			cout<<"type : "<<gettype()<<endl;
			cout<<"maker : "<<getmaker()<<endl;
			cout<<"model : "<<getmodel()<<endl;
			cout<<"color : "<<getcolor()<<endl;
			cout<<"year : "<<getyear()<<endl;
			cout<<"miles driven : "<<getmilesdriven()<<endl;
			cout<<"tank size in litres : "<<gettanksize()<<endl;
			cout<<"energy storage : "<<getenergystorage()<<endl;
			cout<<"max weight : "<<getmaxweight()<<endl;
			cout<<"number of wheels : "<<getnowheels()<<endl;
			cout<<"length : "<<getlength()<<endl;
			cout<<"number of seats : "<<getseats()<<endl;
		}
	
};

int main()
{
	bus b("wagon","toyota","125.s","red",2015,85000,150,1000,8,280,4);
	b.display();
}
