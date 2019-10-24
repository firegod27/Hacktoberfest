#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    vector<int>bhams(t);
    for(int i=0;i<t;i++)
    {
        cin>>bhams[i];
    }
    int k = *min_element(bhams.begin(),bhams.end());
    if(k==1) cout<<-1<<endl;
    else cout<<1<<endl;
    return 0;
}
