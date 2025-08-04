#include<iostream>
#include<string>
#include<cmath>
#include<set>
#include<algorithm>
using namespace std;
int main()
{

set<char>s;
string text;
cin>>text;
for (int i = 0; i <text.size(); i++)
{
    s.insert(text[i]);
}

if(s.size()%2 !=0)
{
    cout<<"IGNORE HIM!"<<endl;
}else{
    cout<<"CHAT WITH HER!"<<endl;
}

    return 0;
}