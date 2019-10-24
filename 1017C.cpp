#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    vector<int>bhams(t);
    vector<int>ans;
    for(int i=0;i<t;i++)
    {
        bhams[i]=i+1;
    }
    for(int i=t/2;i<t;i++)
    {
        ans.push_back(bhams[i]);
    }
    for(int i=0;i<t/2 ;i++)
    {
        ans.push_back(bhams[i]);
    }
    for(int i=0;i<ans.size();i++)
    {
        cout<<ans[i]<<" ";
    }
    return 0;
}
