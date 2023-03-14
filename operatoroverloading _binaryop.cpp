#include<iostream>
using namespace std;
class complex{
	public:
		int real,imag;
		void getval()
		{
			cout<<"enter real value : "<<endl;
			cin>>real;
			cout<<"enter imaginary value : "<<endl;
			cin>>imag;
			
		}
//		friend complex operator +(complex &obj1,complex &obj2);
		complex operator +(complex &obj)// or just (complex obj)
		{
			complex c;
			c.real=real+obj.real;
			c.imag=imag+obj.imag;
			return c;
		}
		complex operator -(complex &obj)
		{
			complex c;
			c.real=real-obj.real;
			c.imag=imag-obj.imag;
			return c;
		}
		complex operator *(complex &obj)
		{
			complex c;
			c.real=real*obj.real;
			c.imag=imag*obj.imag;
			return c;
		}
		complex operator /(complex &obj)
		{
			complex c;
			c.real=real/obj.real;
			c.imag=imag/obj.imag;
			return c;
		}


		void output()
		{
			cout<<"complex number : "<<real<<"+"<<imag<<"i"<<endl;
		}
};
//complex operator + (const complex& obj1,const complex& obj2) {
//        complex temp;
//        temp.real = obj1.real + obj2.real;
//        temp.imag = obj1.imag + obj2.imag;
//        return temp;
//    }
int main()
{
	complex c1,c2,res;
	c1.getval();
	c2.getval();
	res=c1/c2;
	res.output();
	return 0;
}
