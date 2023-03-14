#include<iostream>
#include<string>
using namespace std;
class Package// base class
 {
 public:
 
 Package( const string &, const string &, const string &,
 const string &, int, const string &, const string &, const string &,// initilizing data members using constructor
 const string &, int, double, double );

 void setSenderName( const string & ); // set sender's name
 string getSenderName() const; // get sender's name
 void setSenderAddress( const string & ); // set sender's address
 string getSenderAddress() const; // get sender's address
 void setSenderCity( const string & ); // set sender's city
 string getSenderCity() const; // get sender's city
 void setSenderState( const string & ); // set sender's state
 string getSenderState() const; // get sender's state
 void setSenderZIP( int ); // set sender's ZIP code
 int getSenderZIP() const; // get sender's ZIP code
 void setRecipientName( const string & ); // set recipient's name
 string getRecipientName() const; // get recipient's name
 void setRecipientAddress( const string & ); // set recipient's address
 string getRecipientAddress() const; // get recipient's address
 void setRecipientCity( const string & ); // set recipient's city
string getRecipientCity() const; // get recipient's city
 void setRecipientState( const string & ); // set recipient's state
 string getRecipientState() const; // get recipient's state
 void setRecipientZIP( int ); // set recipient's ZIP code
 int getRecipientZIP() const; // get recipient's ZIP code
 void setWeight( double ); //  set weight
 double getWeight() const; // get weight of package
 void setCostPerOunce( double ); //  set cost per ounce
 double getCostPerOunce() const; // get cost per ounce

 double calculateCost() const; // calculate shipping cost
 private:
 
 string senderName;
 string senderAddress;
 string senderCity;
 string senderState;
 int senderZIP;
 string recipientName;
 string recipientAddress;
 string recipientCity;
 string recipientState;
 int recipientZIP;

 double weight; // weight of the package
 double costPerOunce; // cost per ounce to ship the package
 }; // end class Package
 Package::Package( const string &sName, const string &sAddress,
 const string &sCity, const string &sState, int sZIP,
 const string &rName, const string &rAddress, const string &rCity,
 const string &rState, int rZIP, double w, double cost )
 : senderName( sName ), senderAddress( sAddress ), senderCity( sCity ),
 senderState( sState ), senderZIP( sZIP ), recipientName( rName ),
 recipientAddress( rAddress ), recipientCity( rCity ),
 recipientState( rState ), recipientZIP( rZIP )
 {
 setWeight( w ); 
 setCostPerOunce( cost ); 
 } // end Package constructor

 
 void Package::setSenderName( const string &name )
 {
senderName = name;
 } 

 
 string Package::getSenderName() const
 {
 return senderName;
 } 

 
 void Package::setSenderAddress( const string &address )
 {
 senderAddress = address;
 } 
 string Package::getSenderAddress() const
 {
 return senderAddress;
 } 
 void Package::setSenderCity( const string &city )
 {
 senderCity = city;
 } 
 string Package::getSenderCity() const
 {
 return senderCity;
 } 
 void Package::setSenderState( const string &state )
 {
 senderState = state;
 } 
 string Package::getSenderState() const
 {
 return senderState;
 } 
 void Package::setSenderZIP( int zip )
 {
 senderZIP = zip;
 } 
 int Package::getSenderZIP() const
 {
 return senderZIP;
 } 
 void Package::setRecipientName( const string &name )
 {
 recipientName = name;
 } 
 string Package::getRecipientName() const
 {
 return recipientName;
 } 
 void Package::setRecipientAddress( const string &address )
 {
 recipientAddress = address;
 } 
 string Package::getRecipientAddress() const
 {
 return recipientAddress;
 } 
 void Package::setRecipientCity( const string &city )
 {
 recipientCity = city;
 } 
 string Package::getRecipientCity() const
 {
 return recipientCity;
 } 
 void Package::setRecipientState( const string &state )
 {
 recipientState = state;
 } 
 string Package::getRecipientState() const
 {
 return recipientState;
 } 
 void Package::setRecipientZIP( int zip )
 {
 recipientZIP = zip;
 } 
 int Package::getRecipientZIP() const
 {
 return recipientZIP;
 } 
 void Package::setWeight( double w )
 {
 weight = ( w < 0.0 ) ? 0.0 : w;
 } 
 double Package::getWeight() const
 {
 return weight;
 } 
 void Package::setCostPerOunce( double cost )
 {
 costPerOunce = ( cost < 0.0 ) ? 0.0 : cost;
 } 
 double Package::getCostPerOunce() const
 {
 return costPerOunce;
 } 
 double Package::calculateCost() const
 {
 return getWeight() * getCostPerOunce();
 } 
class TwoDayPackage : public Package// derived from package
{
 public:
 TwoDayPackage( const string &, const string &, const string &,
 const string &, int, const string &, const string &, const string &,
 const string &, int, double, double, double );
 void setFlatFee( double ); // set flat fee 
 double getFlatFee() const; // return flat fee

 double calculateCost() const; // calculate shipping cost for package
 private:
 double flatFee; // flat fee for two-day-delivery service
 }; // end class TwoDayPackage
 TwoDayPackage::TwoDayPackage( const string &sName,
 const string &sAddress, const string &sCity, const string &sState,
 int sZIP, const string &rName, const string &rAddress,
 const string &rCity, const string &rState, int rZIP,
 double w, double cost, double fee )
 : Package( sName, sAddress, sCity, sState, sZIP,
 rName, rAddress, rCity, rState, rZIP, w, cost )
 {
 setFlatFee( fee );
 } 
 void TwoDayPackage::setFlatFee( double fee )
 {
 flatFee = ( fee < 0.0 ) ? 0.0 : fee;
 } 

 
 double TwoDayPackage::getFlatFee() const
 {
 return flatFee;
 } 
 double TwoDayPackage::calculateCost() const
 {
 return Package::calculateCost() + getFlatFee();
 } 
 class OvernightPackage : public Package
{
 public:
 OvernightPackage( const string &, const string &, const string &,
 const string &, int, const string &, const string &, const string &,
 const string &, int, double, double, double );

 void setOvernightFeePerOunce( double ); // set overnight fee
 double getOvernightFeePerOunce() const; // return overnight fee

 double calculateCost() const; // calculate shipping cost 
 private:
 double overnightFeePerOunce; // fee per ounce for overnight delivery
 }; // end class OvernightPackag
 // constructor
 OvernightPackage::OvernightPackage( const string &sName,
 const string &sAddress, const string &sCity, const string &sState,
 int sZIP, const string &rName, const string &rAddress,
 const string &rCity, const string &rState, int rZIP,
 double w, double cost, double fee )
 : Package( sName, sAddress, sCity, sState, sZIP,
 rName, rAddress, rCity, rState, rZIP, w, cost )
 {
 setOvernightFeePerOunce( fee ); 
 } // end OvernightPackage constructor

 
 void OvernightPackage::setOvernightFeePerOunce( double overnightFee )
 {
 overnightFeePerOunce = ( overnightFee < 0.0 ) ? 0.0 : overnightFee;
 } 
 double OvernightPackage::getOvernightFeePerOunce() const
 {
 return overnightFeePerOunce;
 } 
 double OvernightPackage::calculateCost() const
 {
 return getWeight() * ( getCostPerOunce() + getOvernightFeePerOunce() );
 } // end function calculateCost
int main()
 {
 Package package1( "hamza ", "B-15gulberg", "karachi", "sindh", 11111,
 "umar vohra", "A-21-gulshan", "lahore", "punjab", 22222, 8.5, 5 );
 TwoDayPackage package2( "bilal", "nayi-society", "karachi", "sindh",
 33333, "Bob ", "kahadar", "sukkur", "sindh", 44444,
 10.5, .65, 2.0 );
 OvernightPackage package3( "azaan", "cant", "karachi", "sindh",
 55555, "taha", "shahdara", "lahore", "punjab", 66666,
 12.25, .7, .25 );



 // print each package's information and cost
 cout << "Package 1:\n\nSender:\n" << package1.getSenderName()
 << '\n' << package1.getSenderAddress() << '\n'
 << package1.getSenderCity() << ", " << package1.getSenderState()
 << ' ' << package1.getSenderZIP();
 cout << "\n\nRecipient:\n" << package1.getRecipientName()
 << ' ' << package1.getRecipientAddress() << '\n'
 << package1.getRecipientCity() << ", "
 << package1.getRecipientState() << ' '
 << package1.getRecipientZIP();
 cout << "\n\nCost: $" << package1.calculateCost() << endl;

 cout << "\nPackage 2:\n\nSender:\n" << package2.getSenderName()
 << '\n' << package2.getSenderAddress() << '\n'
 << package2.getSenderCity() << ", " << package2.getSenderState()
 << ' \n' << package2.getSenderZIP();
 cout << "\n\nRecipient:\n" << package2.getRecipientName()
 << '\n' << package2.getRecipientAddress() << '\n'
 << package2.getRecipientCity() << ", "
 << package2.getRecipientState() << ' '
 << package2.getRecipientZIP();
 cout << "\n\nCost: $" << package2.calculateCost() << endl;

 cout << "\nPackage 3:\n\nSender:\n" << package3.getSenderName()
 << '\n' << package3.getSenderAddress() << '\n'
 << package3.getSenderCity() << ", " << package3.getSenderState()
 << ' ' << package3.getSenderZIP();
 cout << "\n\nRecipient:\n" << package3.getRecipientName()
 << '\n' << package3.getRecipientAddress() << '\n'
 << package3.getRecipientCity() << ", "
 << package3.getRecipientState() << ' '
 << package3.getRecipientZIP();
 cout << "\n\nCost: $" << package3.calculateCost() << endl;
 return 0;
 } // end main




