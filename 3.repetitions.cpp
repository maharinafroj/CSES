#include<bits/stdc++.h>
using namespace std;
int main()
{
    int i,count=0,mx=0;
    string s;
    cin>>s;
    for(i=0;i<s.size();i++)
    {
        if(s[i]==s[i-1])
        {
            count++;
        }
    else
    {
        mx=max(count,mx);
        count=1;
    }

    }
    mx=max(count,mx);
    cout<<mx<<endl;
}
