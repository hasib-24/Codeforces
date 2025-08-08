#include<iostream>
#include<string>
#include<cmath>
#include<set>
#include<vector>
#include<algorithm>
using namespace std;
int main()
{
    int n;
    cin>>n;
    vector<int>opinions(n);
    for (int i = 0; i <n; i++)
    {
        cin>>opinions[i];
    }
    int present=count(opinions.begin(),opinions.end(),1);
    if (present>0)
    {
        cout<<"HARD"<<endl;
    }else
    {
        cout<<"EASY"<<endl;
    }
    
    
    return 0;
}