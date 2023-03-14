#include<iostream>
using namespace std;
class matrixtype
{
    public:
    int **mat;
    int row;
    int col;
    matrixtype(int r,int c )
    {
        row=r; 
        col=c;
        mat=new int* [col];
        for(int i =0;i<row;i++)
        {
            mat[i]=new int[col];
        }   
        
        for(int i=0;i<row;i++)
            for(int j=0;j<col;j++)
                mat[i][j]=0;  
				 }
    matrixtype operator +(const matrixtype & obj);
    matrixtype operator -(const matrixtype & obj);
    matrixtype operator *(const matrixtype &obj);
    
    friend ostream& operator<<(ostream& ot, matrixtype& mt)
    {
        if(mt.row!=0&&mt.col!=0)
        for(int i=0;i<mt.row;i++)
        {   for(int j=0;j<mt.col;j++)
                ot<<mt.mat[i][j]<<" ";
            cout<<"\t\n";
        } 
        return ot;  
    }
};
matrixtype matrixtype::operator +(const matrixtype & obj){
	if (row!=obj.row ||col!=obj.col)
        {
            
            matrixtype temp(0,0);  
            cout<<"addition not possible\n";
            return temp;
        }
        
        else
        {   
            matrixtype temp(row,col);   
            for(int i=0;i<row;i++)
                for(int j=0;j<col;j++)
                    temp.mat[i][j]+=obj.mat[i][j]+mat[i][j];
        
             return temp;}
}
matrixtype matrixtype::operator -(const matrixtype & obj){
	
        if (row!=obj.row ||col!=obj.col)
        {
            
            matrixtype temp(0,0);  
            cout<<"substraction not possible\n";
            return temp;
        }
        else
        {
            matrixtype temp(row,col); 
            for(int i=0;i<row;i++)
                for(int j=0;j<col;j++)
                    temp.mat[i][j]+=(mat[i][j]-obj.mat[i][j]);
        return temp;
        } }
matrixtype matrixtype::operator *(const matrixtype & obj){
	 if (col!=obj.row)
        {
            matrixtype temp(0,0);
            cout<<"multiplication not possible \n";
            return temp;
        }
        else
        {
            
            matrixtype temp(row,obj.col);  
            for(int i=0;i<row;i++)
                for(int j=0;j<obj.col;j++)
                    for(int k =0;k<col;k++)
                        temp.mat[i][j]+=(mat[i][k]*obj.mat[k][j]);
            return temp;          }}
int main()
{
    int row,column;
    cout<<"Enter row and column of matrix A: ";
    cin>>row>>column;
    matrixtype mt1(row,column);
    cout<<"Enter elements\n";
    for(int i=0;i<row;i++)
    {
        for(int j=0;j<column;j++)
        {
            cin>>mt1.mat[i][j];
        }}
    cout<<"Enter row and column of matrix B: ";
    cin>>row>>column;
    matrixtype mt2(row,column);
    cout<<"Enter elements\n";
    for(int i=0;i<row;i++)
    {
        for(int j=0;j<column;j++)
        {
            cin>>mt2.mat[i][j];
        }}
    matrixtype mt3=mt1+mt2;
    matrixtype mt4=mt1-mt2;
    matrixtype mt5=mt1*mt2;
    cout<<"\naddition\t\n"<<mt3;
    cout<<"\nsubstraction\t\n"<<mt4;
    cout<<"\nmultiplication\t\n"<<mt5;
    return 0;}
