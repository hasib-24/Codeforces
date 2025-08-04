#include<iostream>
#include<string>
#include<cmath>
#include<vector>
#include<algorithm>
using namespace std;
int main()
{
vector<int>v;
string s;
cin>>s;


for(int i=0;i<s.size();i+=2)
{
    int value=s[i];
    v.push_back(value-48);
}
sort(v.begin(),v.end());


for (int i = 0; i <v.size(); i++)
{
    cout<<v[i];
    if (i==v.size()-1)
    {
      break;
    }else{
        cout<<"+";
    }
    
}

    return 0;
}