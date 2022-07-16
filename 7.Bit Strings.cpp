 
#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
#define MOD 1000000007
#define optimise() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
long long binpow(long long a,long long b)
{
    long long res=1;
    while(b>0)
    {
        if(b&1)
        {
            res=res*a;
         a=a*a;
         b>>=1;        }
 
    }
    return res;
 
}
int pow2(int x)
{
    if(x==0)
    {
        return 1;
    }
    int half=pow2(x/2);
    int res=((half*half)%MOD);
    if(x%2)
    {
        return (res*2)%MOD;
    }
    return res;
}
int pown(int x,int n)
{
    if(x==0)
    {
        return 1;
    }
    int half=x/n;
    int res=((half*half)%MOD);
    if(x%n)
    {
        return (res*n)%MOD;
    }
    return res;
}
ll powll(ll b,ll p,ll mod)
{
    ll ans=1;
    for(ll i=0;i<p;i++)
    {
        ans=ans*b%mod;
    }
    return ans;
}
int main()
{
    ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
//    int pw,base;
//    cin>>pw;
//    cout<<pow2(pw)<<endl;
    //cin>>pw>>base;
  //cout<<pow(pw,base)<<endl;
  ll n;
  cin>>n;
  cout<<powll(2,n,1e9+7)<<"\n";
 
    return 0;
}
