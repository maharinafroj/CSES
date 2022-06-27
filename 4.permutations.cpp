#include<bits/stdc++.h>
//#include<boost/multiprecision/cpp_int.hpp>
//using namespace boost::multiprecision;
typedef long long ll;
#define debug(x) cerr<<"-"<<#x<<":"<<x<<endl;
#define debugs(x,y) cerr<<"-"<<#x<<":"<<x<<" "<<#y<<":"<<y<<endl;
#define sesh_to return 0;
#define HA cout << "YES\n";
#define Ha cout<<"Yes\n";
#define ha cout<<"yes\n";
#define NA cout << "NO\n";
#define Na cout<<"No\n";
#define na cout<<"no\n";
#define PI 2*acos(0.0)
using namespace std;
#define optimise() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
bool isprime(ll n)
{
    for(ll i = 2; i*i <= n ; i++)
    {
        if(n%i == 0) return false;
 
    }
 
    return true;
}
bool palindrome(string s)
{
    for(ll i=0,j=s.size()-1; i<j; i++,j--)
    {
        if(s[i]!=s[j])
        {
            return false;
        }
    }
    return true;
}
 
int main()
{
    optimise();
    int t;
//cin>>t;
t=1;
    while(t--)
    {
        ll n;
        cin>>n;
        vector<int>v;
        int i=1,j=2;
        while(j<=n)
        {
            v.push_back(j);
            j+=2;
        }
        while(i<=n)
        {
            v.push_back(i);
            i+=2;
        }
        if(n<=3&&n!=1)
        {
            cout<<"NO SOLUTION";
 
        }
        else if(n==1)
        {
            cout<<1<<" ";
        }
      else
      {
          for(i=0;i<v.size();i++)
          {
              cout<<v[i]<<" ";
          }
      }
    }
 
    sesh_to
}
 
 
