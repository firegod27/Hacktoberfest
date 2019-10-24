#include<bits/stdc++.h>
using namespace std;
int main()
{
    int m,n;
    cin>>m>>n;
    vector<long long int>bhams(m);
    vector<long long int>bhams2(n);
    for(int i=0;i<m;i++)
    {
        cin>>bhams[i];
    }
    int mm=0,s=0;
    for(int j=0;j<n;j++)
    {
        cin>>bhams2[j];
       if(i!=n-1){ mm = mm^bhams2[j];}
    }
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {

        }
    }

    return 0;
}
