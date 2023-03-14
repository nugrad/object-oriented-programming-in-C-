#include<iostream>
#include<string>
using namespace std;

/*class base{
	int a;
	public:
		base(int n){// parameterized constructor
			cout<<"parent constructor"<<endl;
			a=n;
		}
};
class derived:public base{
	int y;
	
	public:
		derived(int n):base(n){// member initilizer list
			y=n;
			cout<<"child constructor"<<endl;
		}
	void display()
	{
		cout<<"value of y : "<<y<<endl;
	}
};
int main()
{
	derived d(10);
	d.display();
}
*/
// ------------------------------lab task 1------------------------------------------------------------------------------------------------------
/*A warehouse stores multiple items in it. Some of them are: markers, color pencils, sharpeners,
erasers. Create a class called WarehouseItems that has the following data members:
? quantityOfBoxes – number of boxes of markers/colors/sharpeners/erasers
? quantiyPerBox – number of markers/colors/sharpeners/erasers in a box
Create one class for each: Markers, ColorPencils, Shapeners, Erasers which are all inherited
from the WarehouseItems class. Create proper accessor and mutators for your classes. Yourprogram should demonstrate creating objects for each of the classes, then setting values for the
various quantities for the objects.
Each class should have a function that displays the total amount of
markers/colors/sharpeners/erases. (Total amount = quantity of boxes * quantity per box)
You must make use of parametrized constructors to initialize the values.
*/
class warehouse{
	int qtybox;
	int qtyperbox;
	public:
		warehouse(int m,int n){
			qtybox=m;
			qtyperbox=n;
		}
};
class markers:public warehouse{
	int totalamt;
	public:
		markers(int m,int n):warehouse(m,n){
			totalamt=m*n;
		}
	void display()
	{
		cout<<"total amount of markers : "<<totalamt<<endl;
	}
};
class erasers:public warehouse{
	int totalamt;
	public:
	erasers(int m,int n):warehouse(m,n){
		totalamt=m*n;
	}
	void display()
	{
		cout<<"total amount of erasers : "<<totalamt<<endl;
	}
	
};
class sharpener:public warehouse{
	int totalamt;
	public:
	sharpener(int m,int n):warehouse(m,n){
		totalamt=m*n;
	}
	void display()
	{
		cout<<"total amount of sharpener : "<<totalamt<<endl;
	}
	
};
int main()
{
	markers m(10,20);
	m.display();
	erasers e(2,50);
	e.display();
	sharpener s(5,100);
	s.display();
}

// ---------------------lab task 3-------------------------------------------------------------------------------------------------------
/*
Create a class named Shape. All our shapes will be inherited
from this class. It will contain the following data members and
functions:
? numberOfSides
? area
? parametrized constructor
? Create accessors and mutators for the data members.
Create classes called Rectangle, Circle and
Triangle, which are all inherited from the class Shape. Create
a class called Square which is inherited from Rectangle.
The classes will have the following members:
Rectangle:
? length
? width
? parametrized constructor
? generateArea() – should place the result in area
Circle:
? radius
? parametrized constructor
? generateArea() – should place the result in area
Triangle:
? height
? base
? parametrized constructor
? generateArea() – should place the result in area (Area = height*base/2)
Square:
? It should have a parametrized constructor that takes one side as input. The constructor
should call the constructor for Rectangle class with that value as parameters.
? checkSides(); - checks if both sides are equal. Sides are inherited from Rectangle.
? generateArea() – should place the result in area
You must make use of parametrized constructors to initialize the values.
*/
//class shape
//{
//    protected:
//        double b;
//        double h;
//    public:
//        shape(double b1,double h1)
//        {
//            b=b1;
//            h=h1;
//        }
//        virtual void disp_area()=0;
//};
//
//class triangle :public shape
//{
//    public:
//        triangle(double b1, double h1):shape(b1,h1)
//        {
//        }
//        void disp_area();
//};
//
//class rectangle:public shape
//{
//    public:
//        rectangle(double b1,double h1):shape(b1,h1)
//        {
//        }
//        void disp_area();
//};
//class circle :public shape
//{
//    public:
//        circle(double b1,double h1):shape(b1,h1)
//        {
//        }
//        void disp_area();
//};
//class square :public shape
//{
//    public:
//        square(double b1,double h1):shape(b1,h1)
//        {
//        }
//        void disp_area();
//};
//
//
//void triangle::disp_area()
//{
//    double a1;
//    a1=(b*h)*1/2;
//    cout<<"area of triangle : "<<a1;
//    
//}
//
//void rectangle::disp_area()
//{
//    double a1;
//    a1=b*h;
//    cout<<"area of rectangle : "<<a1;
//    
//}
//void circle::disp_area()
//{
//    double a1;
//    a1=b*b*h;
//    cout<<"area of circle  : "<<a1;
//    
//}
//void square::disp_area()
//{
//    double a1;
//    a1=b*h;
//    cout<<"area of square  : "<<a1;
//}
//
//int main()
//{
//    double b1,h1;
//    cout<<"triangle details : ";
//    cout<<"base : ";
//    cin>>b1;
//    cout<<"hypotnuse : ";
//    cin>>h1;
//    triangle t1(b1,h1);
//    t1.disp_area();
//    cout<<"rectangle details : ";
//    cout<<"length : ";
//    cin>>b1;
//    cout<<"base ";
//    cin>>h1;
//    rectangle r1(b1,h1);
//    r1.disp_area();
//    cout<<"circle details : ";
//    cout<<"radius : ";
//    cin>>b1;
//    cout<<"pi value : ";
//    cin>>h1;
//    circle c1(b1,h1);
//    c1.disp_area();
//    cout<<"sqaure details\n";
//    cout<<"base : \n";
//    cin>>b1;
//    cout<<"lentgh :\n";
//    cin>>h1;
//    square s1(b1,h1);
//    s1.disp_area();
//}
    


