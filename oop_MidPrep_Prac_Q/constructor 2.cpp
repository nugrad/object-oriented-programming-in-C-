#include<iostream>
#include<string>
using namespace std;
class ptype{
	string fname;
	string mname;
	string lname;
	string fe;
	string me;
	string le;
	public:
		void setfe(string f)
		{
			fe=f;
		}
		void setme(string m)
		{
			me=m;
		}
		void setle(string l)
		{
			le=l;
		}
		string getfe()
		{
			return fe;
		}
		string getme()
		{
			return me;
		}
		string getle()
		{
			return le;
		}
		ptype(string fn,string mn,string ln){
			fname=fn;
			mname=mn;
			lname=ln;
		}
		void check()
		{
			if(fe==fname)
			{
				cout<<"first name same"<<endl;
			}
			else{
				cout<<"first name different"<<endl;
			}
			if(me==mname)
			{
				cout<<"miidle name same"<<endl;
			}
			else{
				cout<<"middle name different"<<endl;
			}
			if(le==lname)
			{
				cout<<"last name same "<<endl;
				
			}
			else{
				cout<<"last name different"<<endl;
			}
		}
		void show()
		{
			cout<<"first name : "<<fname<<endl;
			cout<<"middle name: "<<mname<<endl;
			cout<<"last name : "<<lname<<endl;
		}
	
};
int main()
{
	ptype pt("hamza","haider","jafri");
	pt.show();
	pt.setfe("ali");
	pt.setme("haider");
	pt.setle("jafri");
	cout<<"first name enetered : "<<pt.getfe()<<endl;
	cout<<"middle name entered :  "<<pt.getme()<<endl;
	cout<<"last name entered : "<<pt.getle()<<endl;
	
	pt.check();
}
