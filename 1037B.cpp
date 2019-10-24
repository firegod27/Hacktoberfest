/*--------dranzer_blaze----------*/
#include<bits/stdc++.h>
using namespace std;
const long long int mod = 1000000007;
#define ll long long int
#define all(a) a.begin(),a.end()
int main()
{
    ll t,n;
    cin>>t>>n;
    vector<ll>bhams(t);
    for(int i=0;i<t;i++)
    {
        cin>>bhams[i];
    }
    sort(all(bhams));
    ll k = bhams[t/2];
    ll val =0;
    if(k<n)
    {
        for(ll i = t/2;i<t;i++)
        {
            val += max((n-bhams[i]),0LL);
        }
    }
    else
    {
for(ll i = t/2;i>-1;i--)
        {
            val += max((bhams[i]-n),0LL);
        }
    }
    cout<<val<<endl;
    return 0;
}

