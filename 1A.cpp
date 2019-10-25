#include<bits/stdc++.h>
using namespace std;
void Graph::addEdge(int v, int w)
{
    adj[v].push_back(w); // Add w to v’s list.
}
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
int main()
{
    int a,b,c;
    cin>>a>>b>>c;
    int countm=0;
    if(a%c==0)
    {
        countm = a/c;
    }
    else
    {
        countm = a/c +1;
    }
    if(b%c==0)
    {
        cout<<countm*(b/c);
    }
    else
    {
        cout<<countm*(b/c + 1);
    }
}
