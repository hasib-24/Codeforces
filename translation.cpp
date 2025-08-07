#include<iostream>
#include<string>
#include<cmath>
#include<set>
#include<vector>
#include<algorithm>
using namespace std;
int main()
{

string s,t;
cin>>s>>t;
string rev;
reverse(s.begin(),s.end());
if (s==t)
{
    cout<<"YES"<<endl;
}else
{
    cout<<"NO"<<endl;
}


    
    return 0;
}