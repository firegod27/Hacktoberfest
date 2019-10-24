#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int n,l;
    cin>>n>>l;
    vector<double>bhams(n);
    for(int i=0;i<n;i++)
    {
        cin>>bhams[i];
    }
    sort(bhams.begin(),bhams.end());
    double maxi = -1;
    for(int i=0;i<n-1;i++)
    {
        if(abs(bhams[i+1]-bhams[i])>maxi)
        {
            maxi = abs(bhams[i+1]-bhams[i]);
        }
    }
    double ans = max(max(maxi/2,abs(0-bhams[0])),abs(l-bhams[bhams.size()-1]));
    printf("%.9lf\n",ans);
    return 0;
}
