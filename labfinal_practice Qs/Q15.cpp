#include<iostream>
using namespace std;
class box{
	public:
		int noofsides,area;
		box(){
		}
		box(int nof,int a)
		{
			this->noofsides=nof;
			this->area=a;
		}
		void input() {
        
        cin >> noofsides;
        cin >> area;
    }
		friend box  operator + (const box& obj1,const box & obj2);
		friend box operator - (const box& obj1,const box& obj2);
		void display()
		{
			cout << "Output result: " << noofsides<< endl<< area <<endl;
		}
};
box operator + (const box& obj1,const box & obj2) {
        box temp;
        temp.noofsides = obj1.noofsides + obj2.noofsides;
        temp.area = obj1.area + obj2.area;
        return temp;
}
box operator - (const box & obj1,const box & obj2) {
        box temp;
        temp.noofsides = obj1.noofsides - obj2.noofsides;
        temp.area = obj1.area - obj2.area;
        return temp;
}

int main()
{
box box1,box2,resultantbox1,resultbox2;
cout<<"data for box 1"<<endl;
box1.input();
cout<<"data for box 2"<<endl;
box2.input();
resultantbox1=box1+box2;
resultantbox1.display();
resultbox2=box1-box2;
resultbox2.display();
}
