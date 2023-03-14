#include <iostream>
using namespace std;

template <class C>
class container 
{
	C c;
	char y;
	public:
		void getint()
		{
			cout<<"\nEnter Any Number: ";
			cin>>c;
		}
	     C increase()
		{
			c++;
			return c;
		}
		void getchar()
		{
			cout<<"\nEnter Any Alphabet: ";
			cin>>y;
		}
	    char uppercase()
	    {
	      	if ((y>='a')&&(y<='z'))
	      	{
	      		y+='A'-'a';
		  	}
	      	return y;
	    }
};

main ()
{
	container<int>integer;
	container<char>character;
	int ch;
	
	cout<<"press 1 for  Integer\npress 2 for  Character\nSelect: ";
	cin>>ch;
	if(ch==1)
	{
		integer.getint();
		cout << "After Incrementing: " << integer.increase()<<endl;
	}
	else if(ch==2)
	{
		character.getchar();
		cout << "After making it in Uppercase: " << character.uppercase()<<endl;
	}
}
