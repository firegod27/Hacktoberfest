#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    int count5=0;
    int count0=0;
    int k;
    while(t--)
    {
        cin>>k;
        if(k==5) count5++;
        else count0++;
    }
    if(count0==0) cout<<-1<<endl;
    else if(count5<9) cout<<0<<endl;
    else
    {
        for(int i=0;i<(count5/9)*9;i++)
        {
            cout<<5;
        }
        for(int i=0;i<count0;i++)
        {
            cout<<0;
        }
    }
    return 0;
}
