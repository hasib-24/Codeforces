#include<iostream>
#include<string>
#include<cmath>
#include<set>
#include<vector>
#include<algorithm>
using namespace std;
int main()
{
    int n,k;
    cin>>n>>k;
    for (int i = 0; i <k; i++)
    {
        int last=n%10;
        if (last>0)
        {
            n--;
        }
        
        if (last==0)
        {
            n/=10;
        }
        
    }
    cout<<n<<endl;
    
    return 0;
}