#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n; cin>>n;
    string s;
    cin>>s;
    if(s.size()==1)cout<<"Yes"<<endl;
    else{
    map<char,int>bhams;
    for(int i=0;i<s.size();i++)
    {
        bhams[s[i]]++;
    }
    int countm=0;
    map<char,int>::iterator it;
    for(it=bhams.begin();it!=bhams.end();it++)
    {
        if(it->second>1)
        {
            countm++;
        }
    }
    if(countm>0)
    {
        cout<<"Yes"<<endl;
    }
    else
    {
        cout<<"No"<<endl;
    }}
    return 0;
}
