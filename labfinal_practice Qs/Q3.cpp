#include<iostream>
using namespace std;
class parent{
	private:
		int x=1;
	protected:
		int y=2;
	public:
		int z=3;
	
	int getpvt()
	{
		return x;
	}
};
class publicchild:public parent{
	public:
	int	getprot()
	{
		return y;
	}
};
class protectedchild:protected parent{
	public:
		int getpub()
		{
			return z;
		}
	int	getprot()
	{
		return y;
	}
};
class privatechild:private parent{
	public:
		int getpub()
		{
			return z;
		}
	int	getprot()
	{
		return y;
	}
};
int main()
{
	publicchild pc;
	cout<<pc.z<<endl;
	cout<<pc.getpvt()<<endl;
	cout<<pc.getprot()<<endl;
	protectedchild poc;
	cout<<poc.getprot()<<endl;
	cout<<poc.getpub()<<endl;
	//cout<<poc.getpvt()<<endl;error
	privatechild pvc;
	cout<<pvc.getprot()<<endl;
	cout<<pvc.getpub()<<endl;
	
}

