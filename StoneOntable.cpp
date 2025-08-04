#include<iostream>
#include<string>
#include<cmath>
#include<set>
#include<algorithm>
using namespace std;
int main()
{
int n;
string color;
cin>>n>>color;
int minimum=0;
for (int i = 1; i <color.size(); i++)
{
    if (color[i]==color[i-1])
    {
        minimum++;
    }
    
}
cout<<minimum<<endl;

    return 0;
}