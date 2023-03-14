#include <iostream>
using namespace std;
class Complex {
private:
	float real;
    float imag;
public:
    Complex() : real(0), imag(0) {}
    Complex(float r, float i) : real(r), imag(i) {}
    void input() {
        cout << "Enter real and imaginary parts respectively: ";
        cin >> real;
        cin >> imag;
    }
//    Complex operator + (const Complex& obj) {
//        Complex temp;
//        temp.real = real + obj.real;
//        temp.imag = imag + obj.imag;
//        return temp;
//    }
//    Complex operator + (const float rhs) {
//        Complex temp;
//        temp.real = real + rhs;
//        temp.imag = imag;
//        return temp;
//    }
	friend Complex operator + (const Complex& obj1,const Complex& obj2);
//	friend Complex operator + (const float,const Complex& obj2);
//	friend Complex operator + (const Complex& obj1,const float);
	friend Complex operator - (const Complex& obj1,const Complex& obj2);
//	friend Complex operator - (const float,const Complex& obj2);
//	friend Complex operator - (const Complex& obj1,const float);
	friend Complex operator * (const Complex& obj1,const Complex& obj2);
//	friend Complex operator * (const float,const Complex& obj2);
//	friend Complex operator * (const Complex& obj1,const float);
	friend Complex operator / (const Complex& obj1,const Complex& obj2);
//	friend Complex operator / (const float,const Complex& obj2);
//	friend Complex operator / (const Complex& obj1,const float);
	friend Complex operator += (const Complex& obj1,const Complex& obj2);
//	friend Complex operator += (const Complex& obj1,const float rhs);
//	friend ostream& operator << (ostream & os1, const Complex& obj1); 
//	friend istream& operator >> (istream & is1, Complex& obj1);
	friend bool operator !=(const Complex & c1,const Complex & c2); 
	friend Complex operator -(Complex &);
//	friend Complex & operator ++ (Complex & h);
	friend Complex operator ++( Complex &, int); 
	
	//friend void operator = (const Complex& obj1) ;
//	friend Complex operator = (const Complex& obj1);
//One can overload operator (=) but that should be a member function. 
//A non-member function be it friend or non-friend will result in error.
    void output() {
        if (imag < 0)
            cout << "Output Complex number: " << real << imag << "i"<<endl;
        else
            cout << "Output Complex number: " << real << "+" << imag << "i"<<endl;
    }
    Complex operator = (const Complex& obj1){
   		real =  obj1.real;
    	imag = 	obj1.imag;
    	return *this;
	}
	//A binary operator shall be implemented either by a non-static member function 
	//with one parameter or by a non-member function with two parameters 
	//This doesn't apply to operator=. As the compiler correctly notes, 
	//operator= must be a non-static member function. "Normal" binary operators 
	//are usually symmetrical - you generally want both myObj + 42 and 42 + myObj 
	//to work. But assignment isn't - myObj = 42; makes sense, but 42 = myObj not so much.
	Complex operator += (const Complex& obj2) {
        real = real + obj2.real;
        imag = imag + obj2.imag;
        return *this;
	}
	Complex operator += (const float rhs) {
        real = real + rhs;
        imag = imag;
        return *this;
	}
	ostream& operator << (ostream &os1){
	os1 << "(" << real << "," << imag << ")"; 
	return os1;
	}
	bool operator ==(const Complex & c){
 		if((real == c.real) &&(imag == c.imag)){
			return true;
 		}
 		else
 			return false;
	}
	 // overload function call
      Complex operator()(int a, int b, int c) {
         Complex D;
         
         // just put random calculation
         D.real = a + c + 10;
         D.imag = b + c + 100 ;
         return D;
      }
};
Complex operator + (const Complex& obj1,const Complex& obj2) {
        Complex temp;
        temp.real = obj1.real + obj2.real;
        temp.imag = obj1.imag + obj2.imag;
        return temp;
}
//Complex operator + (const Complex& obj1,const float rhs) {
//        Complex temp;
//        temp.real = obj1.real + rhs;
//        temp.imag = obj1.imag;
//        return temp;
//}
//Complex operator + (const float rhs,const Complex& obj1) {
//        Complex temp;
//        temp.real =  rhs + obj1.real;
//        temp.imag = obj1.imag;
//        return temp;
//}
Complex operator - (const Complex& obj1,const Complex& obj2) {
        Complex temp;
        temp.real = obj1.real - obj2.real;
        temp.imag = obj1.imag - obj2.imag;
        return temp;
}
//Complex operator - (const Complex& obj1,const float rhs) {
//        Complex temp;
//        temp.real = obj1.real - rhs;
//        temp.imag = obj1.imag;
//        return temp;
//}
//Complex operator - (const float rhs,const Complex& obj1) {
//        Complex temp;
//        temp.real =  rhs - obj1.real;
//        temp.imag = obj1.imag;
//        return temp;
//}
Complex operator * (const Complex& obj1,const Complex& obj2) {
        Complex temp;
        temp.real = obj1.real * obj2.real;
        temp.imag = obj1.imag * obj2.imag;
        return temp;
}
//Complex operator * (const Complex& obj1,const float rhs) {
//        Complex temp;
//        temp.real = obj1.real * rhs;
//        temp.imag = obj1.imag;
//        return temp;
//}
//Complex operator * (const float rhs,const Complex& obj1) {
//        Complex temp;
//        temp.real =  rhs * obj1.real;
//        temp.imag = obj1.imag;
//        return temp;
//}
Complex operator / (const Complex& obj1,const Complex& obj2) {
        Complex temp;
        temp.real = obj1.real / obj2.real;
        temp.imag = obj1.imag / obj2.imag;
        return temp;
}
//Complex operator / (const Complex& obj1,const float rhs) {
//        Complex temp;
//        temp.real = obj1.real / rhs;
//        temp.imag = obj1.imag;
//        return temp;
//}
//Complex operator / (const float rhs,const Complex& obj1) {
//        Complex temp;
//        temp.real =  rhs / obj1.real;
//        temp.imag = obj1.imag;
//        return temp;
//}
//ostream& operator << (ostream &os1,const Complex& obj1){
//	os1 << "(" << obj1.real << "," << obj1.imag << ")"; 
//	return os1;
//}
//istream& operator >> (istream &is1, Complex& obj1){
//	is1 >> obj1.real;
//	is1 >> obj1.imag; 
//	return is1;
//}
bool operator !=(const Complex & c1,const Complex & c2){
 	if((c1.real != c2.real) || (c1.imag != c2.imag)){
		return true;
 	}
 	else
 		return false;
}
Complex operator -(Complex &c1){
	c1.real = -c1.real;
	c1.imag = -c1.imag;
}
Complex & operator ++ (Complex & h){ // non member function
	h.real += 1;
	return h;
} 
Complex operator ++ ( Complex & h, int){//post incerement 
	h.real += 1;
	return h;
} 
int main() {
    Complex complex1, complex2,complex3, result;
    cout << "Enter first complex number:\n";
    complex1.input();
    cout << "Enter second complex number:\n";
    complex2.input();
    cout << "Enter third complex number:\n";
    complex3.input();
//    complex2 = complex1(10, 15, 20); // invoke operator()
//    complex1.output();
//    complex2.output();
    //result = complex1 + complex2;
//   result = complex1 + complex2+ complex3;//(c1.operator +(c2)).operator +(c3);
//  result.output();
//	//complex1 + 2.325
//	result=complex1 + 2.325;
//	result.output();
//	result = 450.120 + complex1;//The + operator is called with reference to 450.120
//	//No predefined overloaded + operator is there that takes Complex as an argument
//	result.output();
//	complex1=complex3;
//	complex1.output();
//result=complex1/complex2-complex3;
//result.output();
//result=result-complex3;///complex2;
//result.output();
//result=complex1=complex2=complex3;
//result.output();
//result=complex2=complex3;
////result=complex2;
//result=5*(complex2+complex3);
//complex3+=(complex1+5);
//complex1.output();
//complex2.output();
//complex3.output();
//result.output();
//complex1<<cout;
cout << "First  : " << complex1 << endl;
cout << "Second  :" << complex2 << endl;
cout << "Third  :" << complex3 << endl;
cin >> complex3;
complex3<<cout; 
if(complex3==complex3)
	cout<<"True"<<endl;
else
	cout<<"false"<<endl;	
//if(complex3!=complex3)
//	cout<<"True"<<endl;
//else
//	cout<<"false"<<endl;
//-complex3;
//complex3.output();
//int y = 2,x=11;
//y++++; // Error
//y++ = x; // Error 
//cout << ++y << endl;
//cout << ++++y; 
//++y = x; 
//cout<<y<<x;//11 11
//++complex3;
//complex3.output();
//++complex1 = complex2 + ++complex3;
//complex1.output();
//complex2.output();
//complex3.output();
//complex3++;
//complex2=complex3++;
//complex3.output();
//complex2.output();
//complex3 = complex2 + complex3++; // Error… 
//complex3.output();
//complex2.output();
return 0; 
}

//Friend functions minimize encapsulation as we can access private data of any class
//using friend functions,
//This can result in:
//• Data vulnerability
//• Programming bugs
//• Tough debugging
//Often we need to display the data on the screen c++ provides us insertion operator
//(‘<<’)to put data on output stream default is console but it can be any file or network
//socket as well to send data on network from our program. 

//We also need to get data from the console or from file or network this is achieved
//through c++ provided stream extraction operator (‘>>’) that is used to get data from
//input stream, again default input stream is from console. 

//--x
//-(x++)
//!(*ptr ++) 
//h++;
//g-- + ++h - --i;



