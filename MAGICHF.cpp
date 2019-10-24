#include<bits/stdc++.h>
using namespace std;
const long long int mod = 1000000007;
#define ll long long int
#define all(a) a.begin(),a.end()
int main()
{
    int t;
    cin>>t;
    for(int test=0;test<t;test++)
    {
        int n,x,s;
        cin>>n>>x>>s;
        for(int i=0;i<s;i++)
        {
            int a,b;
            cin>>a>>b;
            if(a==x)
            {
                x = b;
            }
            else if(b==x)
            {
                x = a;
            }
        }
        cout<<x<<endl;
    }
    return 0;
}
