#include <iostream>


#include<iostream>
#include<string>
using namespace std;
class warehouse{
	
	public:
		int qtybox;
	int qtyperbox;
//		void setqtybox(int qb){
//			qtybox=qb;
//		}
//		void setqtyperbox(int qpb){
//			qtyperbox=qpb;
//		}
         warehouse(int m,int n){
         	qtybox=m;
         	qtyperbox=n;
         }
	    
//		int get_qtybox(){
//		
//			return qtybox;
//		}
//		int get_qtyperbox(){
//			return qtyperbox;
//		}
	
};
class markers:public warehouse{
		int totalamount;
	public :
		markers(int m,int n):warehouse(m,n){
				totalamount = m*n;
			
		}
	
		void display(){
		

			cout<<" total amount  of markers is : "<<totalamount;
		}
	
};
class pencils:public warehouse{
		int totalamount;
	public :
		pencils(int m,int n):warehouse(m,n){
				totalamount = m*n;
			
		}
	
		void display(){
		

			cout<<" total amount  of pencils is : "<<totalamount;
		}
	
};
class sharpener:public warehouse{
		int totalamount;
	public :
		sharpener(int m,int n):warehouse(m,n){
				totalamount = m*n;
			
		}
	
		void display(){
		

			cout<<" total amount  of sharpener is : "<<totalamount;
		}
	
};
class eraser: public warehouse{
		int totalamount;
	public :
		eraser(int m,int n):warehouse(m,n){
				totalamount = m*n;
			
		}
	
		void display(){
		

			cout<<" total amount  of erasers is : "<<totalamount;
		}
	
};

int main()
{
markers m(20,40);
m.display();
pencils p(5,50);
p.display();
sharpener s(2,100);
s.display();
eraser e(3,60);
e.display();
}
