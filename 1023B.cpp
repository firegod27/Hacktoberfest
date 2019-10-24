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
    cout<<ans<<endl;
}
