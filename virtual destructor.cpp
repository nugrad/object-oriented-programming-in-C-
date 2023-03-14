#include<iostream>
#include<ctime>
#include <stdlib.h>
using namespace std;
class animal{
	public:
	virtual void makeSound()=0;
	virtual void walk(){cout<<"Animal walk"<<endl;
	}
	void sleep(){cout<<"Animal sleep"<<endl;
	}
	virtual ~animal(){
		cout<<"A destr"<<endl;
	}
};
class cow:public animal{
	public:
//	void makeSound(){cout<<"Cow sound"<<endl;
//	}
//	void walk(){cout<<"Cow walk"<<endl;
//	}
	~cow(){
		cout<<"C destr"<<endl;
	}
};
class pig:public cow{
	public:
//	void makeSound(){cout<<"Pig sound"<<endl;
//	}
//	void walk(){cout<<"Pig walk"<<endl;
//	}
		~pig(){
		cout<<"P destr"<<endl;
	}
};
class donkey:public pig{
	public:
	void makeSound(){cout<<"Donkey sound"<<endl;
	}
	void walk(){cout<<"Donkey walk"<<endl;
	}
	 ~donkey(){
		cout<<"D destr"<<endl;
	}
};
int main(){

	animal *obj=new donkey();
	obj->makeSound();
	obj->sleep();
	obj->walk();
	
	delete obj;
	
	
	
	
	
	
	
	
//	srand(time(NULL));
//	animal *ani;
//	int result = 1 + (rand() % 3);
//	switch(result){
//		case 0:
//			ani = new cow();
//			break;
//		case 1:
//			ani = new pig();
//			break;
//		case 2:
//			ani = new donkey();
//			break;		
//	}
//	ani->makeSound();
//	ani->walk();
//	ani->sleep();
	
	return 0;
}
