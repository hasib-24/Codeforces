#include<iostream>
#include<string>
#include<cmath>
#include<set>
#include<vector>
#include<algorithm>
using namespace std;
int main()
{
    int n,i;
    cin>>n;
    if (n==1)
    {
        cout<<"I hate it";
    }else
    {
         for ( i = 1; i <n; i++)
    {
       if (i%2 !=0)
       {
        cout<<"I hate that ";
       }
       
       if (i%2 ==0)
       {
        cout<<" I love that ";
       }

       if ((i+1)==n && (n%2==0))
       {
           cout<<" I love it ";
       }
         if ((i+1)==n && (n%2!=0))
         {
              cout<<" I hate it ";
         }

    }
    }
    
    
   
    
    return 0;
}