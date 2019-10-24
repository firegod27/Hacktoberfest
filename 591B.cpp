#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    map<int,int>bhams1;
    map<int,int>bhams2;
    int k;
    for(int i=0; i<t; i++)
    {
        cin>>k;
        bhams1[k]++;
    }
    for(int i=0; i<t-1; i++)
    {
        cin>>k;
        bhams1[k]--;
        bhams2[k]++;
    }
    for(int i=0; i<t-2; i++)
    {
        cin>>k;
        bhams2[k]--;
    }
    map<int,int>::iterator it;
    vector<int>answer;
    for(it=bhams1.begin(); it!=bhams1.end(); it++)
    {
        if(it->second>0)
        {
            cout<<it->first<<endl;
        }
    }
    for(it=bhams2.begin(); it!=bhams2.end(); it++)
    {
        if(it->second>0)
        {
            cout<<it->first<<endl;
        }
    }

    return 0;
}
