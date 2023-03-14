#include<iostream>
#include<string>
using namespace std;

class personType {

private:
    string firstName;
    string lastName;
    string middleName;
   
public:
personType(string fname,string lname,string mname)
{
    firstName = fname;
    lastName = lname;
    middleName = mname;
}

void setFirstName(string fname)
{
    firstName = fname;
}

void setLastName(string lname)
{
    lastName = lname;
}

void setMiddleName(string mname)
{
    middleName = mname;
}

void checkfn(string fname)
{
if(firstName==fname)
{
cout<<"First name is same\n";
}
else
{
cout<<"First name is not same\n";
}
}

void checkln(string lname)
{
if(lastName==lname)
{
cout<<"Last name is same\n";
}
else
{
cout<<"Last name is not same\n";
}
}



string getFirstName()
{
    return firstName;
}

string getLastName()
{
    return lastName;
}

string getMiddleName()
{
    return middleName;
}
};

int main()
{
    personType personType("hamza", "ali", "jafri");
    cout<<"First name is: "<< personType.getFirstName()<<"\n"
    <<"Middle name is: "<<personType.getMiddleName()<<"\n"
    <<"Last name is: "<<personType.getLastName()<<"\n";
    personType.checkfn("ali");
    personType.checkln("jafri");
}
