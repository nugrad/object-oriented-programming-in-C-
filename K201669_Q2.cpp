#include<iostream>
#include<string>
using namespace std;
class clothes{
	public:
	static float revenue; 
string tagID;
Clothes() { 
tagID = 0;
}

Clothes(int tagID) { 
this->tagID = tagID; 
   }
   friend void taxCalculation();
};
float clothes::revenue=0;
class shirt:public clothes{
	public:
		string design;
float price;
int qty;
 int stock; 
shirt(string design)
{
this->design = design;
price = 1500; //price is uniform for all styles
stock--; 
clothes::revenue += price; 
}
bill=qty*price;
//friend bool operator < (const shirt&, const pant&);


	
};
class pant:public clothes {
	public:
		string style;
float price;
static int stock; 
Pant(string style)
{
this->style = style;
if(style == "bellbottomed")
price = 1200;
else if(style == "straightfit")
price = 1600;
else if(style == "narrowfit")
price = 2000;
stock--; 
clothes::revenue += price; 
}
friend bool operator < (const shirt&, const pant&);
pant(const pant& o)
{
// assuming public access
style = o.style;
price = o.price;
stock--;
clothes::revenue += price; 
}

	
};
class tie:public clothes{
	public:
		string pattern;
float price;
static int stock; 
Tie(string pattern)
{
this->pattern = pattern;
if(this->pattern == "stripes")
price = 700;
else if(this->pattern == "checkered")
price = 800;
stock--; 
clothes::revenue += price; 
}
	
};
class suit:public shirt,public pant,public tie{
	public:
	float price;
Suit(string pDesign, string pStyle, string pPattern): shirt(pDesign), pant(pStyle), tie(pPattern)
{
price = shirt::price + pant::price + tie::price; // assuming public access
}
float bill()
{
 shirt s1("formal");
 pant p1("straightfit");
 tie t1("stripes");
return shirt::bill(s1) + pant::bill(p1) + tie::bill(t1);
}
float bill(shirt& s, string voucher)
{
float discountRate = 0.4; // assuming a 40% discount
if(voucher == "XYZ"){ // assuming it to be a valid voucher
return s.price*discountRate;}
else{

return s.price;
}
}
	
};
int main()
{
	clothes c(10,20);
}
