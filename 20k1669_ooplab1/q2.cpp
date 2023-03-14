#include <iostream>
using namespace std;
int main()
{
   int arr[5];
   
  
   cout<<"enter array elements\n";
   int i;
   for(i=0;i<5;i++)
   {
       cin>>arr[i];
   }
   cout<<"array elemnrta are\n";
   for(i=0;i<5;i++)
   {
       cout<<"\t"<<arr[i];
   }
   cout<<"\n";
   int  min;

    
    min = arr[0];
    for (int i = 0; i < 5; i++)
    {
        
         if (min > arr[i])
            min = arr[i];
    }

    
    cout << "Smallest element : \n" << min;
 
}
