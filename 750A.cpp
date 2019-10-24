#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int n,k;
    cin>>n>>k;
    long long int bacha = 240-k;
    long long int sum =0,ans;
    for(int i=1;i<=n;i++)
    {
        sum+=(i*5);
        ans =i;
        if(sum+((i+1)*5)>=bacha)
        {
            break;
        }
    }
    cout<<ans<<endl;
    return 0;
}
