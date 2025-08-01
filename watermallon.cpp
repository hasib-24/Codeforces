#include<iostream>
using namespace std;
int main()
{
 int w;
 cin>>w;
 bool flag=false;
 for (int i = 2; i < w; i++)
 {
  int part1=i;
  int part2=w-i;
   if (part1 %2==0 && part2%2==0)
   {
    flag=true;
    break;
   }
   
 }
 
 if (flag==true)
 {
    cout<<"YES"<<endl;
 }else
 {
    cout<<"NO"<<endl;
 }
 

    return 0;
}