#include<iostream>
#include<string>
using namespace std;

void menu(); //declartion of function to show the menu

class dayType//creating the class
{
       string Wdays[7];
       int i;
       string day;
       string prDay;
       string NxtDay;
       string AddDays;
public:
       dayType(string);//constructor with one parameter
       string setday(); //declartion of function to set the day
       string preday(); // declartion of function to find privious day
       void Nextday(); // declartion of function to find Next day
       string add(int n); // declartion of function to find after addingthenumber of days given by the user
       void print(); // declartion of function to print the result

};
int main()
{
       int n;

       string d;
       menu(); //displaying menu
       cout <<"Enter the day :";
       getline(cin, d); //Takes the day from the user
       dayType Da(d); //creating an object of a class
       Da.setday();
       Da.preday();
       Da.Nextday();

       cout <<"Enter the No. of days to add :";
       while (!(cin >> n) ||n<0) { //validation checking
                     cin.clear();
                     cin.ignore(999, '\n');
                     cout <<"Invalid data type! \nPlease enter No. of daysto add again :";
             
       }
       Da.add(n);
       Da.print();
       system("pause");
       return 0;

}
dayType::dayType (string i) :day(i){ //Defintion of a constructor with one parameter
       Wdays[0] = "Mon";
       Wdays[1] = "Tues";
       Wdays[2] = "Wednes";
       Wdays[3] = "Thurs";
       Wdays[4] = "Fri";
       Wdays[5] = "Satur";
       Wdays[6] = "Sun";
}

string dayType::setday() //Function to set the day
{
       if (day == Wdays[0])
       {
              i = 0;
       }
       else if (day == Wdays[1])
       {
              i = 1;
       }
       else if (day == Wdays[2])
       {
              i = 2;
       }
       else if (day == Wdays[3])
       {
              i = 3;
       }
       else if (day == Wdays[4])
       {
              i = 4;
       }
       else if (day == Wdays[5])
       {
              i = 5;
       }
       else if (day == Wdays[6])
              i = 6;
       else
       {
              day = "Invalid Input";
              i = 7;
       }
       return day;
}
string dayType::preday() //Function to find the preivous day
{
       if (i == 0)
              prDay = Wdays[6];
       else if (i == 7)
              prDay = "Invalid Input";
       else
              prDay = Wdays[i - 1];
       return prDay;
}
void dayType::Nextday() //Function to find Next day
{
       if (i == 6)
              NxtDay = Wdays[0];
       else if (i == 7)
              prDay = "Invalid Input";
       else
              NxtDay = Wdays[i + 1];

}
string dayType::add(int n) // function to find after adding the number of days given by the user
{
       n = n + i;
       while (n>= 7)
       {
              n = n - 7;
       }
       if (i == 7)
              Wdays[n] = "Invalid Input ";
       return AddDays = Wdays[n];
}
void dayType::print()
{
       cout << endl <<"\tDay="<< day <<"day"<< endl;
       cout <<"\tPrevious day :"<< prDay <<"day"<< endl;
       cout <<"\tNext day :"<< NxtDay <<"day"<< endl;
       cout <<"\tAfter Adding Days :"<< AddDays <<"day"<< endl;
}
void menu() //Function to display menu
{
       cout <<"******************MENU********************"<< endl;
       cout <<"\tEnter 'Sun' for 'Sunday'"<< endl;
       cout <<"\tEnter 'Mon' for 'Monday'"<< endl;
       cout <<"\tEnter 'Tues' for 'Tuesday'"<< endl;
       cout <<"\tEnter 'Wednes' for 'Wednesday'"<< endl;
       cout <<"\tEnter 'Thurs' for 'Thursday'"<< endl;
       cout <<"\tEnter 'Fri' for 'Friday'"<< endl;
       cout <<"\tEnter 'Satur' for 'Saturday'"<< endl;
}
