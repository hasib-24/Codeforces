#include<iostream>
#include<string>
#include<cmath>
#include<set>
#include<vector>
#include<algorithm>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int a,b;
        cin>>a>>b;
        int count=0;
      if (a%b==0)
      {
        count=0;
      }else{
        int x=ceil((double)a/b);
        count=x*b-a;
      }
      
     cout<<count<<endl;
   }
   
    return 0;
}