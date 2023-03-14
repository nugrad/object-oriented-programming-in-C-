#include<iostream>
using namespace std;


// defining the function template that
// returns the largest number of the array
// we consider type of array size directly integer

template <class T>

T find_max(T t[][3], int m){
	T temp_max = t[0][0];
	int j;
	for (int i = 0; i < m; i++)
	{
		for(j=0;j<3;j++)
		{
			if (temp_max < t[i][j] )
		{
			temp_max = t[i][j];
		}
			
		}
		
	}
	return temp_max;
}


int main(){
	int numbers[3][3];
	cout<<"Enter numbers:"<<endl;
	int j;
	for (int i = 0; i < 3; i++)
	{
		for(j=0;j<3;j++)
		cin>>numbers[i][j];
	}
	cout<<"Largest Number of array is:"<<find_max(numbers,3)<<endl;
	// though you can make array size dynamic
	return 0;
}
