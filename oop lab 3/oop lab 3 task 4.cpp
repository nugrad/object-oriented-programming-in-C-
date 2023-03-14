#include <iostream>

using namespace std;



class CounterType {

private:

    

    int count;

    int counter = 0;

public:

    

    CounterType() { count = 0; }

    

    CounterType(int c) { count = c; }

    
    void increseCounter() { counter++; }

   
    int decreaseCount() {

        

        if (count == 0)

            return 0;

        count--;

        return 1;

    }

    

    int getCount() { return count; }

    int getCounter() { return counter; }

    

    void print_c(ostream &cout) {

        cout << "Count : " << getCount() << "\n";

        cout << "Counter : " << getCounter() << "\n\n";

    }

};



int main(int argc, char const *argv[]) {

    int value;

    cout << "Please enter a COUNT value: ";

    cin >> value;

    CounterType c(value);

    

    while (1) {

        c.print_c(cout);

        c.increseCounter();

        int t = c.decreaseCount();

        

        if (!t) {

            break;

        }

    }

    return 0;

}
 
