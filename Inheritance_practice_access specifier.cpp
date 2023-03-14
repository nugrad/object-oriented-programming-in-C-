#include<iostream>
#include<string>
using namespace std;
//----------------------------------------------Example 1 :-------------------------------------------------------------------------------------
class A{
	private:
		int y=1;
	protected:
		int x=2;
	public:
		int z=3;
	int getpvt(){
		return y;
	}
	
		
};
class B: public A{
	public:
	int getprot(){//  getter to acess protected as public access specifier takes protected as protected
		return x;
	}
};
class C:protected A{
	public:
		int getpprot(){ // getter to access protected as protected specifier takes protedted as protected
			return x;
		}
		int getpub(){// getter to access public as protected specifier takes public as protected
			return z;
		}
		
};
class D:private A{
	public:
		int getpprot2(){// getter to access protected as it is private due to private specifier
			return x;
		}
		int getpub2(){// getter to access public as it is private due to private access specifier 
			return z;
		}
};
int main()
{
	B obj;// public object
	C obj2;// protected object
	D obj3;//private object
	cout<<"for public access specifier the value of private variable is :"<< obj.getpvt()<<endl;// only possible in public specifier
	cout<<"for public access specifier the value of protected variable is :"<<obj.getprot()<<endl;
	cout<<"for public access specifier the value of public variable is :"<<obj.z<<endl;
	cout<<"\n";
//	/*cout<<"for protected access specifier the value of private variable is :"<< obj2.getpvt()<<endl;// error generated*/
	cout<<"for protected access specifier the value of protected variable is :"<<obj2.getpprot()<<endl;
	cout<<"for protected access specifier the value of public variable is :"<<obj2.getpub()<<endl;
	cout<<"\n";
	/*cout<<"for private access specifier the value of private variable is :"<< obj3.getpvt()<<endl;// error generated*/
	cout<<"for private access specifier the value of protected variable is :"<<obj3.getpprot2()<<endl;
	cout<<"for private access specifier the value of public variable is :"<<obj3.getpub2()<<endl;
	
}

