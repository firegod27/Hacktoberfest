#include <bits/stdc++.h>
#define ll long long
using namespace std;


int main()
{
    ll n,k;
    cin>>n>>k;
    ll ans=0;
    if(k<=(n+1))
    {
        ans=k/2;
        if(k%2==0)ans--;
    }
    else
    {
        ll x=k/2+1;
        if(x>n)ans=0;
        else
        {
            ans=n-x+1;
        }
    }
    for(int i=0;i<s.size()-1;i++)
    {
        if((s[i]=='1'&&s[i+1]=='0'))
        {
            swap(s[i],s[i+1]);
            countm++;
        }
        if((s[i]=='2'&&s[i+1]=='1'))
        {
            swap(s[i],s[i+1]);
            countm++;
        }
    }
    for(int i=0;i<n;i++)
        
       {
       bhams[i] = b1[i];
        }
        for(int i=0;i<n;i++)
        {
            cin>>b1[i];
            cin>>b2[i];
        }
    cout<<ans<<endl;
}
