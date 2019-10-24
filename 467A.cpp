#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    int count=0,p,q;
    while(t--)
    {
        cin>>p>>q;
        if(q-p>=2)
        {
            count++;
        }
    }
    cout<<count<<endl;
    return 0;
}
