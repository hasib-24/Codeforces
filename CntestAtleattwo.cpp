#include<iostream>
using namespace std;
int main()
{
 int n;
 cin>>n;
 int problem[n][3];
for (int i = 0; i < n; i++)
{
    for (int j = 0; j <3; j++)
    {
        cin>>problem[i][j];
    }
    
}

int totalSolve=0;
for (int i = 0; i < n; i++)
{
    int sum=0;
    for (int j = 0; j <3; j++)
    {
        sum+=problem[i][j];
    }

    if (sum>=2)
    {
        totalSolve++;
    }
    
    
}

cout<<totalSolve<<endl;

    return 0;
}