
#include<bits/stdc++.h>
using namespace std;

bool compare(string &s1,string &s2)
{
    return s1.size() < s2.size();
}

int isSubstring(string s1, string s2)
{
    int M = s1.length();
    int N = s2.length();

    /* A loop to slide pat[] one by one */
    for (int i = 0; i <= N - M; i++) {
        int j;

        /* For current index i, check for pattern match */
        for (j = 0; j < M; j++)
            if (s2[i + j] != s1[j])
                break;

        if (j == M)
            return i;
    }

    return -1;
}

int main()
{
    int t;
    cin>>t;
    int flag =1;
    vector<string>s(t);
    for(int i=0;i<t;i++)
    {
        cin>>s[i];
    }
    sort(s.begin(),s.end(),compare);
    for(int i=0;i<s.size()-1;i++)
    {
        for(int j=i+1;j<s.size();j++)
        {
            int k = isSubstring(s[j],s[i]);
            if(k==-1) { flag =0; break;}
        }
    }
    if(flag==0)
    {
        cout<<"NO"<<endl;
    }
    else
    {
        cout<<"YES"<<endl;
        for(int i=0;i<t;i++)
        {
            cout<<s[i]<<endl;
        }
    }
}
