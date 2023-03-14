#include<iostream>
using namespace std;
template<class u,class v,class w=char>
class test{
	u var1;
	v var2;
	w var3;
	public:
		test(u v1,v v2,w v3){
			var1=v1;
			var2=v2;
			var3=v3;
		}
		void print()
		{
			cout<<var1<<endl;
			cout<<var2<<endl;
			cout<<var3<<endl;
		}
};
main()
{
	test<int,double>obj(7,7.1,'c');// iska matlab k agar mai arguments pass nahi karunga w ka tau wo chracter chala dega,ab phir se w ka 
	obj.print();                    // dal k dekho tau wo char nahi balke jo dala wo return karta hai
	test<double,char,bool>obj2(4.5,'q',false);
	obj2.print();
}
