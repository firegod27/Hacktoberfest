#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    vector<long long int>bhams(n);
    vector<long long int>copy(n);
    for(int i=0;i<n;i++)
    {
        cin>>bhams[i];
        copy[i]=bhams[i];
    }
    long long int countm=0;
    sort(copy.begin(),copy.end());
    vector<long long int>::iterator it;
    for(int i=0;i<n;i++)
    {
        it = upper_bound(copy.begin(),copy.end(),bhams[i]);
        if(it!=copy.end())
        {
            copy.erase(it);
            countm++;
        }
    }
    cout<<countm<<endl;
    return 0;
}
