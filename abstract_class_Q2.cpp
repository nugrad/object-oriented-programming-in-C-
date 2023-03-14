#include <iostream>
using namespace std;


class Shape {
   protected:
    float width;
    float bred;
    float height;

   public:
    void getDimension2() {
        cin >> width;
        cin>>bred;
        cin>>height;
    }
    void getDimension() {
        cin >> height;
        cin>>bred;
    }

    
    virtual float calculateArea() = 0;// pure virtual function
};

class Rectangle : public Shape {
   public:
    float calculateArea() {// pure virtual defined
        return bred*width*height;
    }
};


class Triangle : public Shape {
   public:
    float calculateArea() {// pure virtual defined
        return  bred*height/2;
    }
};

int main() {
    Rectangle rectangle;// object of derived class
    Triangle triangle;

    cout << "Enter the width ,breadth  and height of  rectangle: ";
    rectangle.getDimension2();
    cout << "Area of rectangle: " << rectangle.calculateArea() << endl;

    cout << "\nEnter height and breadth of triangle: ";
    triangle.getDimension();
    cout << "Area of triangle: " << triangle.calculateArea() << endl;

    return 0;
}
