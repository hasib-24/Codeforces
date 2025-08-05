#include<iostream>
#include<string>
#include<cmath>
#include<set>
#include<vector>
#include<algorithm>
#include <cctype>
using namespace std;
int main()
{
    string s;
    cin>>s;
    int upp=0;
    int low=0;
    for(char ch:s){
        if (ch>='A' && ch<='Z')
        {
        upp++;
        }else
        {
            low++;
        }  
    }
     if (upp > low) {
        transform(s.begin(), s.end(), s.begin(), ::toupper);  
    } else {
        transform(s.begin(), s.end(), s.begin(), ::tolower);  
    }
    
    cout<<s<<endl;

    
    return 0;
}