#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    string s1,s2;
    cin>>s1>>s2;
    long long int a=0,b=0,c=0,d=0;
    for(int i=0;i<s1.size();i++)
    {
        if(s1[i]=='1'&&s2[i]=='0')
        {
            a++;
        }
        if(s1[i]=='0'&&s2[i]=='0')
        {
            b++;
        }
        if(s1[i]=='1')
        {
            d++;
        }
        if(s1[i]=='0')
        {
            c++;
        }
    }
    //cout<<a<<" "<<b<<" "<<c<<" "<<d<<endl;
    cout<<a*c+b*d-a*b<<endl;
    return 0;
}

