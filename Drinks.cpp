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
    int drinks[n];

    for (int i = 0; i<n; i++)
    {
     cin>>drinks[i];   
    }
    
    int cotail=0;
    for (int i = 0; i <n; i++)
    {
        cotail+=drinks[i];
    }
    
    double res=(double)cotail/n;
    cout<<res<<endl;
    return 0;
}