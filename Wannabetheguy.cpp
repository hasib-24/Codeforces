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
    set<int>x;
    set<int>y;
    int p;
    cin>>p;
    for (int i = 0; i<p; i++)
    {
        int val;
        cin>>val;
        x.insert(val);
    }
    int q;
    cin>>q;
     for (int i = 0; i<q; i++)
    {
        int val;
        cin>>val;
        y.insert(val);
    }
    for(int m:y){
        x.insert(m);
    }

     if (x.size()==n)
     {
        cout<<"I become the guy."<<endl;
     }else
     {
        cout<<"Oh, my keyboard!"<<endl;
     }
     
     
    return 0;
}