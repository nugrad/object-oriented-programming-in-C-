#include<iostream>
using namespace std;
int main()
{
    int i,j;
    int arr1[3][3];
int arr2[3][3];
int arr3[3][3];
cout<<"ENter elements of one\n";
for(i=0;i<3;i++)
{
    for(j=0;j<3;j++)
    {
        cin>>arr1[i][j];
    }
}
for(i=0;i<3;i++)
{
    for(j=0;j<3;j++)
    {
        cin>>arr2[i][j];
    }
}
for(i=0;i<3;i++)
{
    for(j=0;j<3;j++)
    {
        arr3[i][j]=arr1[i][j]+arr2[i][j];
    }
}
cout<<"Addition of matrix is \n";
for(i=0;i<3;i++)
{
    for(j=0;j<3;j++)
    {
        cout<<arr3[i][j];
        cout<<"\t";
    }
    cout<<"\n";
}
}
