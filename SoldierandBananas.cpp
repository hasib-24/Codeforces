#include<iostream>
#include<string>
#include<cmath>
#include<set>
#include<vector>
#include<algorithm>
using namespace std;
int main()
{
    int k,n,w;
    cin>>k>>n>>w;
    int totalcost=(w*(w+1)/2)*k;
    if (totalcost>n)
    {
        cout<<totalcost-n<<endl;
    }else{
        cout<<0<<endl;
    }
    
    
    return 0;
}