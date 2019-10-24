#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,x,y;
    cin>>n>>x>>y;
    string s; cin>>s;
    int p=0,j;
    for(int i=0;i<n;)
    {

            if(s[i]=='0')
            {
                for(j=i;j<n;j++)
                    if(s[j]=='1')
                        break;
                p++;
                i=j-1;
            }
            i++;
        }

    if(p==0) cout<<0<<endl;
    else cout<<(p-1)*min(x,y)+y<<endl;
}
