#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int countm=0;
    string s;
    cin>>s;
    for(int i=0;i<s.size()-1;i++)
    {
        if((s[i]=='1'&&s[i+1]=='0'))
        {
            swap(s[i],s[i+1]);
            countm++;
        }
        if((s[i]=='2'&&s[i+1]=='1'))
        {
            swap(s[i],s[i+1]);
            countm++;
        }
    }
    while(countm!=0)
    {
        countm=0;
        for(int i=0;i<s.size()-1;i++)
    {
        if((s[i]=='1'&&s[i+1]=='0'))
        {
            swap(s[i],s[i+1]);
            countm++;
        }
        if((s[i]=='2'&&s[i+1]=='1'))
        {
            swap(s[i],s[i+1]);
            countm++;
        }
    }
    }
    cout<<s<<endl;
    return 0;
}
