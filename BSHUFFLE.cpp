#include<bits/stdc++.h>
#include<iostream.h>
using namespace std;
#define ll long long int
int main()
{
    int n;
    cin>>n;
    int bhams[n];
    for(int i=0;i<n;i++)
    {
        bhams[i]=i+1;
    }
    vector<int>bhams2;
    for(int i=0;i<n/2;i++)
    {
        bhams2.push_back(bhams[i]);
    }

    for(int i=0;i<bhams2.size();i++)
    {
        cout<<bhams2[(i+1)%bhams2.size()]<<" ";
    }
    vector<int>bhams1;
    for(int i=n/2;i<n;i++)
    {
        bhams1.push_back(bhams[i]);
    }
    for(int i=0;i<bhams1.size();i++)
    {
        cout<<bhams1[(i+1)%bhams1.size()]<<" ";
    }
    cout<<endl;
    cout<<bhams[n-1]<<" ";
    for(int i=0;i<n-1;i++)
    {
        cout<<bhams[i]<<" ";
    }
    return 0;
}
