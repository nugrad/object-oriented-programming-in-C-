#include <iostream>
using namespace std;
class Store{
	public:
		virtual void totbill()=0;// pure virtual function
};

class imtiazStore: public Store{
	float bill; 
	float s;
	float tot;
	public:
		imtiazStore(float bi){
			bill=bi;
		}
		
		void totbill(){// pure virtual defined
			s=bill*0.07;
			tot=bill-s;
			cout<<"\tbill of IMTIAZ : "<<tot;
		}
};

class binHashimStore: public Store{
	float bill2, s2, tot2;
	public:
		binHashimStore(float bi2){
			bill2=bi2;
		}
		void totbill(){// pure virtual defined
			s2=bill2*0.05;
			tot2=bill2-s2;
			cout<<"\n\t bill of BIN HASIM : "<<tot2;
			}
};
int main(){
	imtiazStore imz(4000);// object of derived class
	imz.totbill();
	binHashimStore bsh(3000);// object of derived class
	bsh.totbill();
}
