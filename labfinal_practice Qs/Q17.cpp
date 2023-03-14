#include<iostream>
using namespace std;
class check{
	int poscont;
	int negcont;
	public:
		check(int pc,int nc)
		{
			poscont=pc;
			negcont=nc;
		}
		void operator ++(int)
		{
			poscont++;
		}
		void operator ++()
		{
			++poscont;
		}
		void operator --(int)
		{
			negcont--;
		}
		void operator --()
		{
			--negcont;
		}
		void print()
		{
			cout<<"postfix : "<<poscont<<endl;
			cout<<"postfix : "<<negcont<<endl;
			
		}
		void print2()
		{
			cout<<"prefix : "<<poscont<<endl;
			cout<<"prefix : "<<negcont<<endl;
			
		}
};
int main()
{
	check c(5,6);
	c++;
	c.print();
	c--;
	c.print();
	++c;
	c.print2();
	
	--c;
	c.print2();
	
}
