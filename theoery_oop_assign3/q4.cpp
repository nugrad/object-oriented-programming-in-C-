#include<iostream>
using namespace std;
//class MatrixType
class matrixtype
{
    //variables
    public:
    int **mat;
    int row;
    int col;
    
    //constructor
    matrixtype(int r,int c )
    {
        //set rows and columns
        row=r; 
        col=c;
        mat=new int* [col];
        //define and initialize array
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
    //overloding + operator
//    matrixtype operator +(matrixtype obj) 
//    {
        /*if matrix two matrix have different rows or different columns then 
        return same matrix*/
//        if (row!=obj.row ||col!=obj.col)
//        {
//            //create new object of MatrixType
//            matrixtype temp(0,0);  
//            cout<<"Matrix can't be added!\n";
//            return temp;
//        }
//        //otherwise add 2 matrix
//        else
//        {   //create new object of MatrixType
//            matrixtype temp(row,col);   
//            for(int i=0;i<row;i++)
//                for(int j=0;j<col;j++)
//                    temp.mat[i][j]+=obj.mat[i][j]+mat[i][j];
//        
//            //return MatrixType object
//            return temp;
//        }
     
//    }
    //overloding - operator
//    matrixtype operator -(matrixtype obj) 
//    {
         
//        /*if matrix two matrix have different rows or different columns then 
//        return same matrix*/
//        if (row!=obj.row ||col!=obj.col)
//        {
//            //create new object of MatrixType
//            matrixtype temp(0,0);  
//            cout<<"Matrix can't be subtracted!\n";
//            return temp;
//        }
//        //otherwise subtract matrix
//        else
//        {
//            //create MatrixType object
//            matrixtype temp(row,col); 
//            for(int i=0;i<row;i++)
//                for(int j=0;j<col;j++)
//                    temp.mat[i][j]+=(mat[i][j]-obj.mat[i][j]);
//        
//            //return MatrixType object
//            return temp;
//        }
//     
//    }

    //overloding * operator
//    matrixtype operator *(matrixtype obj)   
//    {
//        /*if columns of 1st matrix not equal to rows of 2nd matrix then return
//        1st matrix because multiplication can't take place*/
//        if (col!=obj.row)
//        {
//            matrixtype temp(0,0);
//            cout<<"Matrix can't be multiplied!\n";
//            return temp;
//        }
//        //otherwise calculate multiplication
//        else
//        {
//            //create object of MatrixType
//            matrixtype temp(row,obj.col);  
//            for(int i=0;i<row;i++)
//                for(int j=0;j<obj.col;j++)
//                    for(int k =0;k<col;k++)
//                        temp.mat[i][j]+=(mat[i][k]*obj.mat[k][j]);
//            return temp;          
//        }
//
//    }
    //overloding << operator
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
            //create new object of MatrixType
            matrixtype temp(0,0);  
            cout<<"addition not possible\n";
            return temp;
        }
        //otherwise add 2 matrix
        else
        {   //create new object of MatrixType
            matrixtype temp(row,col);   
            for(int i=0;i<row;i++)
                for(int j=0;j<col;j++)
                    temp.mat[i][j]+=obj.mat[i][j]+mat[i][j];
        
            //return MatrixType object
            return temp;
        }
	
}
matrixtype matrixtype::operator -(const matrixtype & obj){
	/*if matrix two matrix have different rows or different columns then 
        return same matrix*/
        if (row!=obj.row ||col!=obj.col)
        {
            //create new object of MatrixType
            matrixtype temp(0,0);  
            cout<<"substraction not possible\n";
            return temp;
        }
        //otherwise subtract matrix
        else
        {
            //create MatrixType object
            matrixtype temp(row,col); 
            for(int i=0;i<row;i++)
                for(int j=0;j<col;j++)
                    temp.mat[i][j]+=(mat[i][j]-obj.mat[i][j]);
        
            //return MatrixType object
            return temp;
        }
     
    }
	

matrixtype matrixtype::operator *(const matrixtype & obj){
	/*if columns of 1st matrix not equal to rows of 2nd matrix then return
//        1st matrix because multiplication can't take place*/
        if (col!=obj.row)
        {
            matrixtype temp(0,0);
            cout<<"multiplication not possible \n";
            return temp;
        }
        //otherwise calculate multiplication
        else
        {
            //create object of MatrixType
            matrixtype temp(row,obj.col);  
            for(int i=0;i<row;i++)
                for(int j=0;j<obj.col;j++)
                    for(int k =0;k<col;k++)
                        temp.mat[i][j]+=(mat[i][k]*obj.mat[k][j]);
            return temp;          
        }

    }


//main() for testing
int main()
{
    //variables
    int row,column;
    //read row and column from user
    cout<<"Enter row and column of matrix A: ";
    cin>>row>>column;
    //create object of MatrixType
    matrixtype mt1(row,column);
    cout<<"Enter elements\n";
    //read element of matrix
    for(int i=0;i<row;i++)
    {
        for(int j=0;j<column;j++)
        {
            cin>>mt1.mat[i][j];
        }
    }
    
    //read row and column from user
    cout<<"Enter row and column of matrix B: ";
    cin>>row>>column;
    //create object of MatrixType
    matrixtype mt2(row,column);
    cout<<"Enter elements\n";
    //read element of matrix
    for(int i=0;i<row;i++)
    {
        for(int j=0;j<column;j++)
        {
            cin>>mt2.mat[i][j];
        }
    }
    
    //performing various operation
    matrixtype mt3=mt1+mt2;
    matrixtype mt4=mt1-mt2;
    matrixtype mt5=mt1*mt2;
    
    //print matrix
    
    cout<<"\naddition\t\n"<<mt3;
    cout<<"\nsubstraction\t\n"<<mt4;
    cout<<"\nmultiplication\t\n"<<mt5;
    

    return 0;
}
