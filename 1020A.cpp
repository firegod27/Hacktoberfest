#include<bits/stdc++.h>
using namespace std;

int main()
{
    long long int n,h,a,b,t;
    cin>>n>>h>>a>>b>>t;
    for(int queries=0; queries<t; queries++)
    {
        long long int ta,fa,tb,fb;
        cin>>ta>>fa>>tb>>fb;
        long long int ans = 0;

if(ta==tb){cout<<abs(fa-fb)<<endl;}
else {

        if(fa<a)
        {
            ans+=abs(fa-a);
            fa=a;
        }
        else if(fa>b)
        {
            ans+=abs(fa-b);
            fa=b;
        }
        if(fb>b)
        {
            ans+=abs(fb-b);
            fb=b;
        }
        else if(fb<a)
        {
            ans+=abs(fb-a);
            fb=a;
        }
        ans+=abs(fb-fa);
        ans+=abs(ta-tb);

        cout<<ans<<endl; }
    }
    return 0;
}
