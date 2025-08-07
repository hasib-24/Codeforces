#include<iostream>
#include<string>
#include<cmath>
#include<set>
#include<vector>
#include<algorithm>
using namespace std;
int main()
{
    int n,h;
    cin>>n>>h;
    int matrix[n];
    int width=0;
    for (int i = 0; i <n; i++)
    {
      cin>>matrix[i];
    }
      for (int i = 0; i <n; i++)
    {
      if (matrix[i]>h)
      {
        width+=2;
      }else
      {
        width+=1;
      }
    }

    cout<<width<<endl;
    return 0;
}