#include<bits/stdc++.h>
#define ll long long 
using namespace std;
int main()
{
    ll n,sum=0,i,a;
    cin>>n;
    for(i=1;i<n;i++)
    {
        cin>>a;
    sum+=a;
    }
    cout<<n*n(n+1)/2-sum;
return 0;
}
