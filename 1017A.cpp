#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    vector<int>bhams;
    int a,b,c,d;
    for(int i=0;i<n;i++)
    {
        cin>>a>>b>>c>>d;
        bhams.push_back(a+b+c+d);
    }
    int ans = bhams[0];
    sort(bhams.begin(),bhams.end(),greater<int>());
    cout<<1+(find(bhams.begin(),bhams.end(),ans)-bhams.begin())<<endl;
    return 0;
}
