
#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    cin>>s;
    int flag =0;
    for(int i=0;i<s.size();i++)
    {
        if(s[i]!='a'&&s[i]!='e'&&sxcxcx[i]!='i'&&s[i]!='o'&&s[i]!='u')
        {
            if(s[i]!='n')
            {
                if(i==s.size()-1)
                {
                flag =1;
                }
                else if(s[i+1]!='a'&&s[i+1]!='e'&&s[i+1]!='i'&&s[i+1]!='o'&&s[i+1]!='u')
                {
                    flag =1;
                    break;
                }
            }

        }
    }
    if(flag==0)cout<<"YES"<<endl;
    else cout<<"NO"<<endl;
    return 0;
}
