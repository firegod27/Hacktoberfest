#include<bits/stdc++.h>
using namespace std;
int main()
{

        int flag =0;
        int n;
        cin>>n;
        vector<long long int>b1(n);
        vector<long long int>b2(n);
        for(int i=0;i<n;i++)
        {
            cin>>b1[i];
            cin>>b2[i];
        }
        for(int i=0;i<n-1;i++)
        {
            //cout<<"l"<<endl;
            if(b1[i]<b1[i+1]&&b1[i]<b2[i+1]&&b2[i]<b1[i+1]&&b2[i]<b2[i+1])
            {

                flag =1;
                break;
            }
        }
        if(flag==0)cout<<"YES"<<endl;
        else cout<<"NO"<<endl;

    return 0;
}
