#include<iostream>
#include<string>
#include<cmath>
#include<set>
#include<algorithm>
using namespace std;
int main()
{


string text;
cin>>text;

int first=text[0];
if (first>=97 && first<=122)
{
   text[0]=char(first-32);
}


cout<<text<<endl;


    return 0;
}