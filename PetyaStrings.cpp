#include<iostream>
#include<cmath>
#include<string>
using namespace std;
int main()
{
 string s1,s2;
 cin>>s1>>s2;
 int x=0;
 int y=0;
 for (int i = 0; i <s1.size(); i++)
 {
    char ch1= tolower(s1[i]);
    char ch2=tolower(s2[i]);
    if (ch1==ch2)
    {
        continue;
    }else{
      x=ch1;
      y=ch2;
      break;
    }
    
 }
 
if (x==0 && y==0)
{
    cout<<0<<endl;
}else if(x<y){
    cout<<-1<<endl;
}else{
    cout<<1<<endl;
}


    return 0;
}