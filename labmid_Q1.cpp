#include <iostream>
using namespace std;

class inventoryItem{
	private:
		string name;
		string barCode;
		char* brandName;
		int stock;
		static int itemCount;
		
		
	public:
		
		void setName(int name)  //setter
		{
			this->name=name;
		}
		
		string getName()  //getter
		{
			return name;
		}
		
		void setBarCode(string barCode)
		{
			this->barCode=barCode;
		}
		string getBarCode()
		{
			return barCode;
		}
		
		void setBrandName(char* brandName)
		{
			brandName=new char;            //new memory
			this-> brandName=brandName; 
		}
		
		char* getBrandName()
		{
			return brandName;
		}
		
		void setStock(int stock)
		{
			this->stock=stock;
		}
		
		int getStock()
		{
			return stock;
		}
		void setItemCount(int itemCount)
		{
			this->itemCount=itemCount;
		}
		int getItemCount()
		{
			return itemCount;
		}
		
		inventoryItem(string name, string barCode, char* brandName, int stock) //parametrized constructor
		{
			this->name=name;
			this->barCode=barCode;
			this-> brandName=brandName;
			this->stock=stock;
			itemCount++;   //increasing the item count by 1
		}
		
		~inventoryItem()  //destructor
		{
			delete new char*;  
			itemCount--;       //decreasing the item count by 
		}
		
		
		
};

int inventoryItem::itemCount=1;  //counting inventory items

int main(){
	
	
	inventoryItem itemOne("soap", "w23", "lux", 123);
	cout<<"\nName of the product: "<<itemOne.getName();
	cout<<"\nBar code: "<<itemOne.getBarCode();
	cout<<"\nBrand name of the product: "<<itemOne.getBrandName();
	cout<<"\nStock: "<<itemOne.getStock();
	
	inventoryItem itemTwo("marker", "er3", "DOLLAR", 456);
	cout<<"\nName of the product: "<<itemTwo.getName();
	cout<<"\nBar code: "<<itemTwo.getBarCode();
	cout<<"\nBrand name of the product: "<<itemTwo.getBrandName();
	cout<<"\nStock: "<<itemTwo.getStock();
	
	
	inventoryItem itemThree("copy", "sf34", "ROYAL", 987);
	cout<<"\nName of the product: "<<itemThree.getName();
	cout<<"\nBar code: "<<itemThree.getBarCode();
	cout<<"\nBrand name of the product: "<<itemThree.getBrandName();
	cout<<"\nStock: "<<itemThree.getStock();
	
	inventoryItem itemFour(itemOne);  //copy constructor
	inventoryItem itemFive=itemFour;  //copy constructor
	
	
}
