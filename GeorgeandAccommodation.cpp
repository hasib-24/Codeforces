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
   int room[n][2];
   int freeroom=0;
   for (int i = 0; i <n; i++)
   {
   for (int j = 0; j <2; j++)
   {
    cin>>room[i][j];
   }
   }
   

     for (int i = 0; i <n; i++)
   {
      int alreadylive=room[i][0];
      int capacity=room[i][1];
      if ((capacity-alreadylive)>=2)
      {
        freeroom++;
      }
   }

cout<<freeroom<<endl;
    return 0;
}