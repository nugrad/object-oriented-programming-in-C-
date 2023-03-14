#include<iostream>
#include<string>
using namespace std;

class Employee {
public:
    string name;
 
    virtual void display() {
        cout << "I am an Employee" << endl;
    }
};
 
class Manager : public Employee{
    string branch;
 
public:
    void display() {
        cout << "I am an Manager" << endl;
    }
};
 
class Receptionist : public Employee {
public:
    int lobbyNumber;
 
    void Lobby() {
        cout << "Lobby: " << lobbyNumber << endl;
    }
};
 
int main() {
    Manager m1;
    m1.name = "Mark";
 
    Employee* e1 = &m1;  // Upcasting
 
    e1->display();       // Base Class Pointer
}
