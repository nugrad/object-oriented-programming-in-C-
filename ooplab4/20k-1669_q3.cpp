#include<iostream>
#include<string>

using namespace std;


class bookType
{  
       string title; 
       string Authors[4]; 
       int n_Author; 
       string publishr; 
       string ISBN;
       double price; 
       int copies;
public:
       bookType(); 
       void setTitle(string); 
       string r_title();   
       void showTitle(); 

       void SetAuthors(int); 
       void ShowAuthors()const; 

       void setPublishr(string); 
       void showPublishr();  

       void setIBSN(string); 
       string r_IBSN();  
       void showIBSN();   
       void setPrice(double); 
       double R_price();  
       void showPrice();    

       void setCopies(int); 
       int r_copies();  
       void showCopies();  
       void u_Copies(int); 

       void print(); 

};
void search();
bookType A[2]; 


int main()
{
              string ti;
       int n,c=1;
       double p;
       char co;
       for (int i = 0; i < 2; i++) 
       {
              cout <<"BOOK No."<< i + 1 << endl;
              cout <<"Enter the Title :";
              getline(cin, ti); 
              A[i].setTitle(ti); 
              cout <<"Enter the Numbers of Authors : ";
              while (!(cin >> n) || n<0) { 
                     cin.clear();
                     cin.ignore(999, '\n');
                     cout <<"Invalid data type! \nPlease Enter the Numbers of Authors again :";
              }
              if (n > 4 || n <= 0)
              {
                     cout <<"Enter the Numbers of Authors in the range of 1~4 :";
                     cin >> n;
              }
              A[i].SetAuthors(n); 
             
              cout <<"Enter the Name of Publisher :";
              getline(cin, ti); 
              A[i].setPublishr(ti); 
              cout <<"Enter the ISBN no : ";
              getline(cin, ti); 
              A[i].setIBSN(ti); 
              cout <<"Enter the price : ";
              while (!(cin >> p) || p<0) { 
                     cin.clear();
                     cin.ignore(999, '\n');
                     cout <<"Invalid data type! \nPlease Enter the Price again :";
              }
              A[i].setPrice(p); 
              cout <<"Enter the number of copies :";
              while (!(cin >> n) || n<0) { 
                     cin.clear();
                     cin.ignore(999, '\n');
                     cout <<"Invalid data type! \nPlease Enter the  number of copies again :";
              }
              A[i].setCopies(n); 
              cout << endl;
              cin.ignore();
       }
       for (int i = 0; i < 2; i++) 
       {
              A[i].print();
              cout << endl;
       }
       search(); 
       system("pause");
       return 0;
}
void bookType::setTitle(string t) 
{
       title = t;
}
string bookType::r_title() 
{
       return title;
}
void bookType::showTitle() 
{
       cout <<"\tTitle : "<< r_title() << endl;
}

void bookType::SetAuthors(int n) 
{
       cin.ignore();
       for (int i = 0; i <n; i++)
       {
              cout <<"\tAuthor #"<< i + 1<<" : ";
              getline(cin, Authors[i]);
       }

}
void bookType::ShowAuthors() const
{
       cout <<"\tAuthor(s)";
       if (Authors[0] != "")
              cout << Authors[0];
       if (Authors[1] != "")
              cout <<", "<<Authors[1];
       if (Authors[2] != "")
              cout <<", "<< Authors[2];
       if (Authors[3] != "")
              cout <<", "<< Authors[3];
       cout << endl;
}
void bookType::setPublishr(string p) 
{
       publishr = p;
}
void bookType::showPublishr() 
{
       cout <<"\tPublisher : "<< publishr << endl;
}
void bookType::setIBSN(string i) 
{
       ISBN = i;
}
string bookType::r_IBSN() 
{
       return ISBN;
}
void bookType::showIBSN() 
{
       cout <<"\tISBN : "<< r_IBSN() << endl;
}
void bookType::setPrice(double p)  
{
       price = p;
}
double bookType::R_price() 
{
       return price;
}
void bookType::showPrice() 
{
       cout <<"\tPrice : "<< R_price() << endl;
}
void bookType::setCopies(int n) 
{
       copies = n;
}
int bookType::r_copies() 
{
       return copies;
}
void bookType::u_Copies(int u) 
{
       copies=u;
}
void bookType::showCopies()
{
       cout <<"\tCopies in Stock : "<< r_copies() << endl;
}
void bookType::print() 
{
       showTitle();
       ShowAuthors();
       showPublishr();
       showIBSN();
       showPrice();
       showCopies();
}
bookType::bookType() 
{
       title = "";
       Authors[0] = "";
       Authors[1] = "";
       Authors[2] = "";
      // Authors[3] = "";
       n_Author = 0;
       ISBN = "0-00000-00";
       price = 0.00;
       copies = 0;
}
void search() 
{
       int ch,c=1,n;
       char co;
       string ti;
       int ti2;
       cout <<"Enter 1 for to Search by 'Title' and '2' for to search by IBSN No. : ";
       cin >> ch; 
       switch (ch)
       {
       case 1: 
       {
              cin.ignore();
              cout <<"Enter the title :";
              getline(cin, ti);
              for (int i = 0; i < 3; i++)
              {
                     string t = A[i].r_title();
                     if (ti == t)
                     {
                           c = 0;
                           A[i].print();
                           cout <<"Did you want of modify the no of copies (y/n) :";
                           cin >> co;
                           switch (co)
                           {
                           case'y':
                           {
                                  cout <<"Enter the nmuber of Copies :";
                                  cin >> n;
                                  A[i].u_Copies(n);
                                  cout << endl <<"Modified DATA "<< endl << endl;
                                  A[i].print();
                                  break;
                           }
                           case'n':
                                  break;
                           default:
                                  cout <<"Invliad Choice"<< endl;
                           }
                     }
                     if (c == 1 && i == 2)
                           cout <<"Not found a book with this title"<< endl;
              }
              break;
       }
       case 2: //executes if user enters 2
       {
              cin.ignore();
              cout <<"Enter the IBSN :";
              getline(cin, ti);
              for (int i = 0; i < 3; i++)
              {
                     string t = A[i].r_IBSN();
                     if (ti == t)
                     {
                           c = 1;
                           A[i].print();
                           cout <<"Did you want of modify the no of copies (y/n) :";
                           cin >> ch;
                           switch (ch)
                           {
                           case'y':
                           {
                                  cout <<"Enter the nmuber of Copies :";
                                  cin >> n;
                                  A[i].u_Copies(n);
                                  cout << endl <<"Modified DATA "<< endl << endl;
                                  A[i].print();
                                  break;
                           }
                           case'n':
                                  break;
                           default:
                                  cout <<"Invliad Choice"<< endl;
                           }
                     }
                     if (c = 1 && c == 2)
                           cout <<"Not found a book with this ISBN NO."<< endl;
              }
              break;
       }
       default: 
              cout <<"Invliad choice"<< endl;
       }

}
