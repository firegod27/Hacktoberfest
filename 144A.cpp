#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    vector<int>bhams(t);
    int max=INT_MIN,min=INT_MAX,max_pos=0,min_pos=0;
    for(int i=0;i<t;i++)
    {
        cin>>bhams[i];
         if(bhams[i]>max) {max=bhams[i]; max_pos=i;}
        if(bhams[i]<=min) {if(bhams[i]<min){min=bhams[i]; min_pos=i;}else {min_pos=i;} }
    }
    cout<<max_pos<<" "<<min_pos<<endl;
    cout<<max_pos+(bhams.size()-min_pos)<<endl;

    return 0;
}
