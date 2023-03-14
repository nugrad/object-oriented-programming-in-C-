#include<iostream>
using namespace std;
//class counttype{
//	int count;
//	public:
//		void setcount(int c)
//		{
//			count=c;
//		}
//		int getcount()
//		{
//			return count;
//		}
//	void inc(void);
//	void dec(void);
//};
//void counttype::inc(){
//	
//	for(count=0;count<10;count++)
//	{
//		cout<<count<<endl;
//	}
//}
//void counttype::dec(){
//	for(count=0;count>10;count--)
//	{
//		cout<<count<<endl;
//	}
//}
//int main()
//{
//	counttype ct;
//	ct.dec();
//	ct.inc();
//}
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

    // methods for get count and get counter

    int getCount() { return count; }

    int getCounter() { return counter; }

    // method for printing the info

    void print_c(ostream &cout) {

        cout << "Count : " << getCount() << "\n";

        cout << "Counter : " << getCounter() << "\n\n";

    }

};

// test method

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
