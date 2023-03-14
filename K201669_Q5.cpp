#include<iostream>
#include<string>
using namespace std;
class Account
{
 public:
 Account( double ); 
 void credit( double ); // add an amount to the account balance
 bool debit( double ); // subtract an amount from the account balance
 void setBalance( double ); // sets the account balance
 double getBalance(); // get the account balance
 private:
 double balance; // stores the balance
 }; // end class Account
Account::Account( double initBalance )
 {
 
 if ( initBalance >= 0.0 )
 balance = initBalance;
 else // otherwise, output message and set balance to 0.0
 {
 cout << "  negative balance ." << endl;
 balance = 0.0;
 } // end if...else
 } // end Account constructor

 // credit (add) an amount to the account balance
 void Account::credit( double amt )
 {
 balance = balance + amt; // add amount to balance
 } // end function credit

 
 bool Account::debit( double amt2 )
 {
 if ( amt2 > balance ) // debit amount exceeds balance
 {
 cout << " amount exceeded account balance." << endl;
 return false;
 } // end if
 else // debit amount does not exceed balance
 {
 balance = balance - amt2;
 return true;
 } // end else
 } // end function debit

 // set the account balance
 void Account::setBalance( double newBal )
 {
 balance = newBal;
 } // end function setBalance

 // return the account balance
 double Account::getBalance()
 {
 return balance;
 } // end function getBalanc
class SavingsAccount : public Account
 {
 public:
 // constructor initializes balance and interest rate
 SavingsAccount( double, double );

 double calInterest(); // determine interest owed
 private:
 double interestRate; // interest rate (percentage) earned by account
 }; // end class SavingsAccount
SavingsAccount::SavingsAccount( double initBalance, double rate )
 : Account( initBalance ) // initialize base class
 {
 interestRate = ( rate < 0.0 ) ? 0.0 : rate; // set interestRate
 } // end SavingsAccount constructor

 // return the amount of interest earned
 double SavingsAccount::calInterest()
 {
 return getBalance() * interestRate;
 } // end function calculateInterest
class CheckingAccount : public Account
 {
 public:
 // constructor initializes balance and transaction fee
 CheckingAccount( double, double );
void credit( double ); // redefined credit function
 bool debit( double ); // redefined debit function
 private:
 double transactionFee; // fee charged per transaction

 //  function to charge fee
 void chargeFee();
 }; // end class CheckingAccount
CheckingAccount::CheckingAccount( double initBalance, double fee )
 : Account( initBalance ) // initialize base class
 {
 transactionFee = ( fee < 0.0 ) ? 0.0 : fee; // set transaction fee
 } // end CheckingAccount constructor

 
 void CheckingAccount::credit( double amt )
 {
 Account::credit( amt ); // always succeeds
 chargeFee();
 } // end function credit

 // debit an amount from the account balance and charge fee
 bool CheckingAccount::debit( double amt2 )
 {
 bool success = Account::debit( amt2 ); // attempt to debit

 if ( success ) // if money was debited, charge fee and return true
 {
 chargeFee();
 return true;
 } // end if
 else // otherwise, do not charge fee and return false
 return false;
 } // end function debit

 // subtract transaction fee
 void CheckingAccount::chargeFee()
 {
 Account::setBalance( getBalance() - transactionFee );
 cout << "$" << transactionFee << " transaction fee charged." << endl;
 } // end function chargeFe
int main()
 {
 Account account1( 50.0 ); // create Account object
 SavingsAccount account2( 25.0, .03 ); // create SavingsAccount object
 CheckingAccount account3( 80.0, 1.0 ); // create CheckingAccount object

 

 // display initial balance of each object
 cout << "account1 balance: $" << account1.getBalance() << endl;
 cout << "account2 balance: $" << account2.getBalance() << endl;
 cout << "account3 balance: $" << account3.getBalance() << endl;

 cout << "\nAttempting to debit $45.00 from account1." << endl;
 account1.debit( 45.0 ); // try to debit $25.00 from account1
 cout << "\nAttempting to debit $30.00 from account2." << endl;
 account2.debit( 30.0 ); // try to debit $30.00 from account2
 cout << "\nAttempting to debit $50.00 from account3." << endl;
 account3.debit( 50.0 ); // try to debit $40.00 from account3

 // display balances
 cout << "\naccount1 balance: $" << account1.getBalance() << endl;
 cout << "account2 balance: $" << account2.getBalance() << endl;
 cout << "account3 balance: $" << account3.getBalance() << endl;

 cout << "\nCrediting $10.00 to account1." << endl;
 account1.credit( 10.0 ); // credit $40.00 to account1
 cout << "\nCrediting $75.00 to account2." << endl;
 account2.credit( 75.0 ); // credit $65.00 to account2
 cout << "\nCrediting $80.00 to account3." << endl;
 account3.credit( 80.0 ); // credit $20.00 to account3

 // display balances
 cout << "\naccount1 balance: $" << account1.getBalance() << endl;
 cout << "account2 balance: $" << account2.getBalance() << endl;
 cout << "account3 balance: $" << account3.getBalance() << endl;

 // add interest to SavingsAccount object account2
 double interestEarned = account2.calInterest();
 cout << "\nAdding $" << interestEarned << " interest to account2."
<< endl;
 account2.credit( interestEarned );

 cout << "\nNew account2 balance: $" << account2.getBalance() << endl;
 return 0;
 } // end main

