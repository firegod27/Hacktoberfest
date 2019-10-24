#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,t;
    cin>>n>>t;
    vector<int>bhams(n);
    for(int i=0;i<n;i++)
    {
        cin>>bhams[i];
    }
    int count=0;
    while(2<3)
    {
        if(bhams[0]<=t)
        {
            count++;
            bhams.erase(bhams.begin());
        }
        else if(bhams[bhams.size()-1]<=t)
        {
            count++;
            bhams.erase(bhams.end()-1);
        }
        else
        break;
    }
    cout<<count<<endl;
    return 0;
}
