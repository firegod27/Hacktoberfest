#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int n,m;
    cin>>n>>m;
    vector<long long int>bhams(n);
    for(int i=0;i<n;i++)
    {
        cin>>bhams[i];
    }
    int page =0;
    long long int sum =0;
    for(int i=0;i<n;i++)
    {
        sum += bhams[i];
        int d = sum/m;
        //cout<<d<<" ";
        cout<<abs(page-d)<<" ";
        page=d;
    }
    return 0;
}
