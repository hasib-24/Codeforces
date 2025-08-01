#include<iostream>
#include<string>
#include<cmath>
using namespace std;
int main()
{
int n,m,a;
cin>>n>>m;
cin>>a;

long long wf=ceil((double)n/a);
long long  hf=ceil((double)m/a);

long long total=wf*hf;
cout<<total<<endl;


    return 0;
}