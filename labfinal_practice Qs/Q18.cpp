#include <iostream>
#include <exception>

using namespace std;

class customException : public exception {
    public:
    virtual const char* myException() const throw() {
        return "Custom Exception Occurred";
    }
} customEx;

int main(){
    int a = 10, b = 2;
    char ch = 'b';

    try {
            if (b==0)
                throw 1;
            int c = a/b;
            if (ch == 'a')
                throw 'a';
            
            throw customEx;

        } catch(int x) 
        {
            cout << "caught in catch block ";
        } catch(char ex) {
            cout << "caught character";
        } catch(customException& exc) {
            cout << "exception(custom): " << exc.myException()<<endl;
        }
} 
