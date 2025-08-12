#include<iostream>
#include<string>
#include<cmath>
#include<set>
#include<vector>
#include<algorithm>
using namespace std;
int main()
{
    string s;
    int n;
    cin>>n;
    cin>>s;
    set<char>st;
    for(char ch:s){
      st.insert(toupper(ch));
    }

    if (st.size()==26)
    {
        cout<<"YES"<<endl;
    }else
    {
        cout<<"NO"<<endl;
    }
    
    
    return 0;
}