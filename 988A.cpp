#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,t;
    cin>>n>>t;
    set<int>bhams;
    vector<int>bh;
    int k;
    while(n--)
    {
        cin>>k;
        bhams.insert(k);
        bh.push_back(k);
    }
    if(bhams.size()<t) cout<<"NO"<<endl;
    else
    {
    cout<<"YES"<<endl;
    set<int>::iterator it;
    vector<int>::iterator kt;
    it = bhams.begin();
    int i=0;
    while(i<t)
    {
        kt = find(bh.begin(),bh.end(),*it);
        auto pos = kt - bh.begin();
        cout<<pos+1<<" ";
        it++;
        i++;
    }
    }
    return 0;
}
