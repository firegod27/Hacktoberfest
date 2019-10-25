#include<bits/stdc++.h>
using namespace std;
int main()
{
    int m,n;
    cin>>m>>n;
    vector<long long int>bhams(m);
    vector<long long int>bhams2(n);
    for(int i=0;i<m;i++)
    {
        cin>>bhams[i];
    }
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
    int mm=0,s=0;
    for(int j=0;j<n;j++)
    {
        cin>>bhams2[j];
       if(i!=n-1){ mm = mm^bhams2[j];}
    }
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {

        }
    }

    return 0;
}
