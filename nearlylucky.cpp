#include<iostream>
#include<string>
#include<cmath>
#include<set>
#include<vector>
#include<algorithm>
using namespace std;
int main()
{
    
    long long n;
    cin>>n;
    bool flaf=false;
    int count=0;

    while (n !=0)
    {
        int last=n%10;
        if (last==4 || last==7)
        {
            count++;
            
        }
        n=n/10;
          
    }
    
    if (count ==4 || count==7 )
    {
        cout<<"YES"<<endl;
    }else
    {
        cout<<"NO"<<endl;
    }
    
    
    return 0;
}