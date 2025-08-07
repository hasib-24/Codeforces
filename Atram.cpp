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
    int stopage[n][2];
    for (int i = 0; i<n; i++)
    {
       for (int j = 0; j <2; j++)
    {
      cin>>stopage[i][j];
    }
    }
    
    int maxcapacity=0;
    int capacity=stopage[0][1];

    
for (int i = 1; i <n; i++)
{
    maxcapacity=max(maxcapacity,capacity);

    int nextexit=stopage[i][0];
    int nextentry=stopage[i][1];
   capacity= abs(capacity-nextexit)+nextentry;
    
}

cout<<maxcapacity<<endl;

    return 0;
}