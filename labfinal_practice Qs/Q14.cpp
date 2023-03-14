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
