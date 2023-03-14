#include<iostream>

using namespace std;

class ShapeDetails
{
	float Area;
	float Parameter;
	friend class Square;
	friend class Circle;
	public:
		void setArea(float Area)
		{
			this->Area=Area;
		}
		
		void setParameter(float Parameter)
		{
			this->Parameter=Parameter;
		}
		float getArea()
		{
			return Area;
		}
			
		float getParameter()
		{
			return Parameter;
		}
		
};

class Square 
{
	float Side_length;
	ShapeDetails s;
	public:	
		Square(float Side_length)
		{
			this->Side_length=Side_length;
		}
		
		float A;
		float P;
			
		void CalculateArea()
		{
			A=Side_length*Side_length;
			s.setArea(A);
			cout<<"Area       =    "<<s.getArea()<<endl;
		}
		
		void CalculateParameter()
		{
			P=4*Side_length;
			s.setParameter(P);
			cout<<"Parameter  =    "<<s.getParameter()<<endl;
		}
};

class Circle 
{
	float Radius_length;
	ShapeDetails b;
	public:
		Circle(float Radius_length)
		{
			this->Radius_length=Radius_length;
		}
		float A;
		float P;
		Cirlce(float Side_length)
		{
			this->Radius_length;	
		}	
		
		void CalculateArea()
		{
			A=3.14*Radius_length*Radius_length;
			b.setArea(A);
			cout<<"Area       =    "<<b.getArea()<<endl;
		}
		
		void CalculateParameter()
		{
			P=2*3.14*Radius_length;
			b.setParameter(P);
			cout<<"Parameter  =    "<<b.getParameter()<<endl;
		}
};

int main()
{
	cout<<"----------Square-------------"<<endl;
	Square s(4);
	s.CalculateArea();
	s.CalculateParameter();
	cout<<"----------Cirle--------------"<<endl;
	Circle c(3);
	c.CalculateArea();
	c.CalculateParameter();
}
