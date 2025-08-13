#include<iostream>
#include<string>
#include<cmath>
#include<set>
#include<vector>
#include<algorithm>
using namespace std;
int main()
{
    int s,n;
    cin>>s>>n;
    bool flag=false;
    vector<pair<int,int>>dragon(n);
    for (int i = 0; i <n; i++)
    {
        cin>>dragon[i].first;
         cin>>dragon[i].second;

    }
    sort(dragon.begin(),dragon.end());
    for (int i = 0; i <n; i++)
    {
        if (s>dragon[i].first)
        {
            s+=dragon[i].second;
            flag=true;  
        }else
        {
            flag=false;
            break;
        }
        
        
    }
    
    if (flag==true)
    {
        cout<<"YES"<<endl;
    }else
    {
        cout<<"NO"<<endl;
    }
    
    
    
    return 0;
}
