#include<iostream>
#include<cmath>
using namespace std;
int main()
{
 int matrix[5][5];
 for (int i = 0; i <5; i++)
 {
    for ( int j = 0;j < 5; j++)
    {
        cin>>matrix[i][j];
    }
    
 }
 
 int totalmove=0;
 int m=0;
 int n=0;
 for (int i = 0; i <5; i++)
 {
    for ( int j = 0;j < 5; j++)
    {
        if (matrix[i][j]==1)
        {
            m=i;
            n=j;
        }
        
    }
    
 }


 totalmove=abs(m-2)+abs(n-2);
 cout<<totalmove<<endl;

    return 0;
}