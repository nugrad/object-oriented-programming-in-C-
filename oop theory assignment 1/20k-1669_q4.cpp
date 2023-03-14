#include<iostream>
#include<string>
using namespace std;
class healthprofile{
	string fname;
	string lname;
	string gender;
	int day;
	int month;
	int year;
	int height;
	int weight;
	int bmi;
	int yeartoday;
	//int birthyear;
	public:
		void set_fname(string fn)
		{
			fname=fn;
		}
		void set_lname(string ln)
		{
			lname=ln;
		}
		void set_gender(string g)
		{
			gender=g;
		}
		void set_day(int d)
		{
			day=d;
		}
		void set_month(int m)
		{
			month=m;
		}
		void set_year(int y)
		{
			year=y;
		}
		void set_weight(int w)
		{
			weight=w;
		}
		void set_height(int h)
		{
			height=h;
		}
		void set_bmi(int bm)
		{
			bmi=bm;
		}
		void set_yeartoday(int yt)
		{
			yeartoday=yt;
		}
//		void set_birthyear(int by)
//		{
//			birthyear=by;
//		}
		string get_fname()
		{
			return fname;
		}
		string get_lname()
		{
			return lname;
		}
		string get_gender()
		{
			return gender;
		}
		int get_day()
		{
			return day;
		}
		int get_month()
		{
			return month;
		}
		int get_year()
		{
			return year;
		}
		int get_weight()
		{
			return weight;
		}
		int get_height()
		{
			return height;
		}
		int get_bmi()
		{
			return bmi;
		}
		int get_yeartoday()
		{
			return yeartoday;
		}
//		int get_birthyear()
//		{
//			return birthyear;
//		}
		
		void getinput(void);// memeber function
        
        void setinput(void);
        void print_age(void);
        void print_bmi(void);
        void print_maxheartrate(void);
        void print_targetrange(void);
};
void healthprofile::getinput(void)
{
cout<<"enter first name : ";
cin>>fname;
cout<<"enter last name : ";
cin>>lname;
cout<<"enter gender : ";
cin>>gender;
cout << "Enter your date of birth in format: month day year" << endl;
cin >> month  >> day  >> year;	
cout<<"enter your weight (in pounds) : ";
cin>>weight;
cout<<"enter your height (in inches) : ";
cin>>height;
cout<<"enter year today : ";
cin>>yeartoday;
bmi=(weight*703)/(height*height);
}
void healthprofile::setinput(void)
{
cout<<"first name : "<<fname;
cout<<"\n";
cout<<"last name : "<<lname;
cout<<"\n";
cout<<"gender : "<<gender;
cout<<"\n";
cout<<"DOB: month/day/year ="<<month<<"/"<<day<<"/"<<year;
cout<<"\n";
cout<<" weight : "<<weight;
cout<<"\n";
cout<<"height : "<<height;
cout<<"\n";
cout<<"year today : "<<yeartoday;	
cout<<"\n";

}
void healthprofile::print_bmi()
{
	cout<<"BMI is : "<<bmi;
	cout<<"\n";
}

void healthprofile::print_maxheartrate()
{
	cout << "Your maximum heart rate is : " << 220- (yeartoday - year) << endl;
	cout<<"\n";
	}

void healthprofile::print_age()
{
	cout<<"your age is :"<<(yeartoday - year) << endl;
	cout<<"\n";
}

void healthprofile::print_targetrange()
{
cout << "Your target heart rate range is: " << (0.5 * (220-(yeartoday - year)))	;
cout<<"\n";
}

int main()
{
	healthprofile obj;
	obj.getinput();
	cout<<"------patient profile-------------\n";
	obj.setinput();
	obj.print_age();
	obj.print_bmi();
	obj.print_maxheartrate();
	obj.print_targetrange();
}

