#include <iostream>
#include <exception>
using namespace std;

class MyException : public exception {
	public:
    char * what () {
      return "C++ Exception";
   }
};
 
int main() {
   try {
      throw MyException();
   }catch(MyException e) {
      cout << "MyException caught" <<endl;
      cout << e.what() <<endl;
   } catch(exception e) {
      //Other errors
   }
   
   return 0;
}
