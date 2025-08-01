#include<iostream>
#include<string>
#include<cmath>
using namespace std;
int main()
{
int n,k;
cin>>n>>k;
int score[n];
for (int i = 0; i <n; i++)
{
    cin>>score[i];
}

int finisher=score[k-1];

int nextround=0;
for (int i = 0; i < n; i++)
{
    if (score[i]>0 && score[i]>=finisher)
    {
        nextround++;
    }
    
}
cout<<nextround<<endl;

    return 0;
}