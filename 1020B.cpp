#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    int bhams[t+1];
    for(int i=1;i<=t;i++)
    {
        cin>>bhams[i];
    }cscsc
    bool vis[t+1];
    for(int i=1;i<t+1;i++)
    {
        int k =bhams[i];
        memset(vis,0,sizeof(vis));
        vis[i]=1;
        while(!vis[k])
        {
            vis[k]=1;
            k=bhams[k];
        }
        cout<<k<<" ";
    }

    return 0;
}


