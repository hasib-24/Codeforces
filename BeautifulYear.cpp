#include<iostream>
#include<string>
#include<cmath>
#include<set>
#include<vector>
#include<algorithm>
using namespace std;
int main()
{
   int y;
   cin>>y;

   while (true)
   {
    y++;
    string s= to_string(y);
    set<char>year(s.begin(),s.end());
    if (year.size()==4)
    {
       cout<<y<<endl;
       
        break;
    }
    
   }
   
    
    return 0;
}