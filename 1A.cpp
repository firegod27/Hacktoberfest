#include<bits/stdc++.h>
using namespace std;
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
