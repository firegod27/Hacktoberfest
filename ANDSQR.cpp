#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define ull unsigned long long int
#define all(a) a.begin(),a.end()
const long long int mod = 1000000007;
int main()
{
    int t;
    cin>>t;
    for(int test=0;test<t;test++)
    {
        int n;
        cin>>n;
        vector<ull>bhams(n);
        int q;
        cin>>q;
        for(int i=0;i<n;i++)
        {
            cin>>bhams[i];
        }
        for(int queries=0;queries<q;queries++)
        {
            ull l,r;
            cin>>l>>r;
            l--;
            r--;
            vector<ull>c;
            for(int i=l;i<=r;i++)
            {
                c.push_back(bhams[i]);
            }
            ull countm=0;
            for(int i=0;i<c.size();i++)
            {
                ull a = c[i];
                for(int j=i;j<c.size();j++)
                {
                    a = a&c[j];
                    long double sr = sqrt(a);
                    if(sr==floor(sr))
                    {
                        countm++;
                    }
                }
            }
            cout<<countm<<endl;
        }
    }
    return 0;
}
