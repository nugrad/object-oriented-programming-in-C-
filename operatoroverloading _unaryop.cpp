//#include<iostream>
//using namespace std;
//class check{
//	public:
//		int pluscount;
//		int minuscount;
//		int val;
//		check()
//		{
//			pluscount=0;
//			minuscount=2;
////			val=5;
//		}
//		void operator ++(int)
//		{
//			pluscount++;
////			++val;
////			val++;
//			
//		}
////		void operator ++()
////		{
////			
////			val++;
////			
////		}
//		void operator --(int)
//		{
//			minuscount--;
//		}
////		void disp()
////		{
////			cout<<"count of val"<<val<<endl;
////		}
//};
//int main()
//{
//	check x,y,v;
//	cout<<"before overloading :  x : "<<x.pluscount<<endl;
//	cout<<"before overloading :  y : "<<y.minuscount<<endl;
//	x++;
//	y--;
//	cout<<"after increment/decrement"<<endl;
//	cout<<x.pluscount<<endl;
//	cout<<y.minuscount<<endl;
////	v++;
////	v.disp();
////	++v;
////	v.disp();
//	
//}
#include <iostream>

using namespace std;

class Distance {
public:

	
	int feet, inch;

	
	Distance(int f, int i)
	{
		this->feet = f;
		this->inch = i;
	}


	void operator--(int )
	{
		
		inch--;
		feet--;
			cout << "\nFeet & Inches(decrement): " << feet << "'" << inch;
		
		
	}
	void operator++()
	{
		
		inch++;
		if(inch>12)
		{
			++feet;
			inch=0;
		}
		cout << "\nFeet & Inches(increment): " << feet << "'" << inch;
	
	}
};


int main()
{
	
	Distance d1(5, 11);
	Distance d2(5,12);
	++d2;

	
	d1--;
	return 0;
}
