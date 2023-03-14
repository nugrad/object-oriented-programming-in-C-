#include<iostream>
#include<string.h>
using namespace std;
// ----------------------------------BASIC NOTES-------------------------------------------------------------------------------------------------
/*
-> constructor is a type of member function executed or called automatically as soon as the object is created
-> same name as class
-> does not have a return type
-> always public
-> classified into three types; default(no parameters/ no arguments),paramterized(with parameters/arguments)
-> copy constructors: copy data of one object to another
*/
// now we will look at the basic examples of  default constructor
// EXAMPLE : 1
//class myclass{
//	public:
//		myclass()
//		{
//			cout<<"hello";
//		}
//};
//int main()
//{
//	myclass obj;// as soon as the object is defined hello will be printed
//}
// EXAMPLE : 2
//class wall{
////	private:
////		float len;
//	public:
//		float len;
//		wall()
//		{
//			cout<<"enter the length : ";
//			cin>>len;
//			cout<<"wall length : "<<len<<endl;
//		}
//		void lsq()
//		{
//			float res;
//			res=len*len;
//			cout<<"length square is : "<<res;
//		}
//};
//int main()
//{
//	wall w1;
//	w1.lsq();
//	
//}
// EXAMPLE : 3
//class student{
//	public:
//		int rollno;
//		int age;
//		student()
//		{
//		rollno=1669;
//		age=21;	
//		}
//};
//int main()
//{
//	student s;
//	cout<<"rollnumber : "<<s.rollno<<endl;
//	cout<<"age : "<<s.age;
//	
//}
// now we will look upto some examples of parameterized constructors---------------------------------------------------------------------------
// EXAMPLE : 4
// use :It is used to initialize the various data elements of different objects with 	different values when they are created
//class wall{
//	public:
//		int length;
//		int height;
//	wall(int l,int h){
//		length=l;
//		height=h;
//	}
//	
//};
//int main()
//{
////	int len=20,hei=2;
//	wall w1(20,2);
//	cout<<"len : "<<w1.length<<endl;
//	cout<<"heig :  "<<w1.height;
//}
// EXAMPLE : 5
//class car{
//	public:
//		string brand;
//		string model;
//		int year;
//		
//	car(string x,string y,int z){
//		brand=x;
//		model=y;
//		year=z;
//	}
//	
//};
//int main()
//{
//	car obj("bmw","XS",1999);
//	cout<<obj.brand<<obj.model<<obj.year<<"\n";
//}
// EXAMPLE : 6
//class build{
//	private:
//		int len;
//		int hei;
//	public:
//		build(int l,int h){
//			len=l;
//			hei=h;
//		}
//	int area()
//	{
//		return len*hei;
//	}
//
//	
//};
//int main()
//{
//	build w(10,8);
//	cout<<"dimension : "<<w.area()<<endl;
//}
// EXAMPLE : 7
//class Student{
//	public:
//	int roll;
//	float age;
//	string name;
////	Student(){
////		roll=1;
////		name="Default";
////	}
//		Student(int r=11, string n="XYZ", int a=999){// default arguments
//		roll=r;
//		name=n;
//		age=a;
//	}
////	Student(int r, string n,char a){
////		roll=r;
////		name=n;
////		age=a;
////		cout<<"Here"<<endl;
////	}
//void display(){
//	cout<<"Roll number: "<<roll<<" Name : "<<name<<" age :"<<age<<endl;
//}
//};
//int main(){
//	Student obj;//(22,"RAZA Ahmed",23.5);
//	obj.display();
//	
//}
//--------------------------------CONSTRUCTOR OVERLOADING---------------------------------------------------------------------------------------
//We can have more than one constructor in a class with same name, as long as each has a different list of arguments.
//class construct
//{
// 
//public:
//    float area;
//     
//    // Constructor with no parameters
//    construct()
//    {
//        area = 0;
//    }
//     
//    // Constructor with two parameters
//    construct(int a, int b)
//    {
//        area = a * b;
//    }
//     
//    void disp()
//    {
//        cout<< area<< endl;
//    }
//};
// 
//int main()
//{
//    // Constructor Overloading
//    // with two different constructors
//    // of class name
//    construct o;
//    construct o2( 10, 20);
//     
//    o.disp();
//    o2.disp();
//    
//}
//  EXAMPLE : 2
// C++ program to demonstrate constructor overloading


//class Room {
//   private:
//    double length;
//    double breadth;
//
//   public:
//    // 1. Constructor with no arguments
//    Room() {
//        length = 6.9;
//        breadth = 4.2;
//    }
//
//    // 2. Constructor with two arguments
//    Room(double l, double b) {
//        length = l;
//        breadth = b;
//    }
//    // 3. Constructor with one argument
//    Room(double len) {
//        length = len;
//        breadth = 7.2;
//    }
//
//    double calculateArea() {
//        return length * breadth;
//    }
//};
//
//int main() {
//    Room room1, room2(8.2, 6.6), room3(8.2);
//
//    cout << "When no argument is passed: " << endl;
//    cout << "Area of room = " << room1.calculateArea() << endl;
//
//    cout << "\nWhen (8.2, 6.6) is passed." << endl;
//    cout << "Area of room = " << room2.calculateArea() << endl;
//
//    cout << "\nWhen breadth is fixed to 7.2 and (8.2) is passed:" << endl;
//    cout << "Area of room = " << room3.calculateArea() << endl;
//
//    return 0;
//}
// EXAMPLE : 3
//class Person { // create person class  
//public:
//int age; // data member  
//  
//    // 1. Constructor with no arguments  
//Person()  
//    {  
//age = 20; // when object is created the age will be 20  
//    }  
//    // 2. Constructor with an argument  
//Person(int a)  
//{ // when parameterised Constructor is called with a value the  
//        // age passed will be initialised  
//age = a;  
//    }  
//intgetAge()  
//{ // getter to return the age  
//return age;  
//    }  
//};  
//int main()  
//{  
//    Person person1, person2(45); // called the object of person class in differnt way  
//  
//cout<< "Person1 Age = " << person1.age <<endl;  
//cout<< "Person2 Age = " << person2.age <<endl;  
//return 0;  
//}  
//----------------------------------------------------COPY CONSTRUCTOR-------------------------------------------------------------------------
//-->The copy constructor is a constructor which creates an object by initializing it with an object of the same class.
//---> if a copy constructor is not dfined in class ,the compiler defnes one.
//---> if the class has pointer variables ,then it is a must to have a copy constructor. 
//-------------------------------------explaining shallow and deep ----------------------------------------------------------------------------
/* SHALLOW:
-->wo students are entering their details in excel sheet simultaneously from two different machines shared over a network. 
Changes made by both of them will be reflected in the excel sheet. Because same excel sheet is opened in both locations.
This is what happens in shallow copy constructor. Both objects will point to same memory location.

DEEP:
you copied a assignment from your friend,so there same assignments but diff copies so any modifications in your assign will not reflect in
your friend assignment.
Deep copy allocates separate memory for copied information
the source and copy are different.
Any changes made in one memory location will not affect copy in the other location.
*/
//---------------------------------------------------------------------------------------------------------------------------------------------

// EXAMPLE : 1
//class Point
//{
//private:
//    int x, y;
//public:
//    Point(int x1, int y1) { x = x1; y = y1; }
// 
//    // Copy constructor
//    Point(const Point &obj) {x = obj.x; y = obj.y; }
// 
//    int getX()            {  return x; }
//    int getY()            {  return y; }
//};
// 
//int main()
//{
//    Point obj(10, 15); // Normal constructor is called here
//    Point obj2 = obj; // Copy constructor is called here
// 
//    // Let us access values assigned by constructors
//    cout << "p1.x = " << obj.getX() << ", p1.y = " << obj.getY();
//    cout << "\np2.x = " << obj2.getX() << ", p2.y = " << obj2.getY();
// 
//    return 0;
//}
// EXAMPLE : 2
// complicated ex:SHALLOW COPY
//class box {
//private:
//	int length;
//	int *breadth;//ptr
//	int height;
//public:
//
//	box(){//  constructor
//		// allocate memeory for ptr
//		breadth=new int;
//	}
//	void set_dimensions(int length1, int breadth1,
//						int height1)
//	{
//		length = length1;
//		*breadth = breadth1;// memeory allocated for pointer
//		height = height1;
//	}
//	void show_data()
//	{
//		cout << " Length = " << length<< "\n Breadth = " << *breadth<< "\n Height = " << height<< endl;
//	}
//};
//int main()
//{
//	box B1, B3;
//	B1.set_dimensions(14, 12, 16);
//	B1.show_data();
//
//	// When copying the data of object
//	// at the time of initialization
//	// then copy is made through
//	// COPY CONSTRUCTOR
//	box B2 = B1;//{14,12,16}
//	B2.show_data();
//	cout<<"----------";
////	
//	B2.set_dimensions(44,22,66);
//	B2.show_data();//{44,22,66}
//	cout<<"--------";
//	B1.show_data();//{14,22,16} breadth copied 
//	cout<<"---------";
////	// When copying the data of object
////	// after initialization then the
////	// copy is done through DEFAULT
////	// ASSIGNMENT OPERATOR
//	B3 = B1;
//	B3.show_data();
//	cout<<"-------";
//	
//////	cout<<"============================================================================="<<endl;
//	B3.set_dimensions(44,111,89);
//	B1.show_data();
//	B2.show_data();
//	B3.show_data();
////	return 0;
//}
// EXAMPLE : 3
// another shallow copy example
//class box {
//private:
//	int length,breadth,*height;
//public:
//	box(){
//		height=new int;
//	}
//	void set_dimensions(int length1, int breadth1,int height1)
//	{
//		length = length1;
//		breadth = breadth1;
//		*height = height1;
//	}
//	void show_data()
//	{
//		cout << " Length = " << length<< "\t Breadth = " << breadth<< "\t Height = " << *height<< endl;
//	}
//};
//int main()
//{
//	box B1, B3;
//	B1.set_dimensions(14, 12, 16);
//	B1.show_data();
//
//	// COPY CONSTRUCTOR
//	box B2 = B1;
//	B2.show_data();
//
//	// DEFAULT ASSIGNMENT OPERATOR
//	B3 = B1;
//	B3.show_data();
//	
//	B2.set_dimensions(22,33,44);
//	B1.show_data();//{14,12,44}
//	B2.show_data();//{22,33,44}
//	B3.show_data();//{14,12,44}
//	return 0;
//}
// EXAMPLE : 4
// DEEP COPY
// only possible with user defined copy constructor
//class box {
//private:
//	int length,breadth,*height;
//public:
//	box(){
//		height=new int;
//	}
//	void set_dimensions(int length1, int breadth1,int height1)
//	{
//		length = length1;
//		breadth = breadth1;
//		*height = height1;
//	}
//	void show_data()
//	{
//		cout << " Length = " << length<< "\t Breadth = " << breadth<< "\t Height = " << *height<< endl;
//	}
//	box (box & obj){
//		length = obj.length;
//		breadth = obj.breadth;
//		height = new int;
//		*height = *(obj.height);
//	}
//};
//int main()
//{
//	box B1, B3;
//	B1.set_dimensions(14, 12, 16);
//	B1.show_data();
//
//	// COPY CONSTRUCTOR
//	box B2 = B1;
//	B2.show_data();
//
//	// DEFAULT ASSIGNMENT OPERATOR
//	B3 = B1;
//	B3.show_data();
//	
//	B2.set_dimensions(22,33,44);
//	B1.show_data();
//	B2.show_data();
//	B3.show_data();
//	return 0;
//}

