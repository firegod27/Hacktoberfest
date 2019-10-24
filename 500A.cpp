#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,t;
    cin>>n>>t;
    vector<int>bhams(n-1);
    for(int i=0;i<n-1;i++)
    {
        cin>>bhams[i];
    }
    int sum =1;
    vector<int>bc;
    while(sum<=n)
    {
        sum += bhams[sum-1];
        //cout<<sum<<endl;
        bc.push_back(sum);
        if(sum==n) break;
    }
    vector<int>::iterator it;
    it = find(bc.begin(),bc.end(),t);
    if(it==bc.end()) cout<<"NO"<<endl;
    else cout<<"YES"<<endl;
}
