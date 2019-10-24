#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int n,q,m;
    cin>>n>>q>>m;
    string a,b;
    vector<pair<int,int> >bhams;
    cin>>a>>b;
    int flaged=0;
    if(a.size()>=b.size())
    {
        flaged =0;

        for(int i=0; i<a.size(); i++)
        {
            int flag =0,j=0;
            for(j=0; j<b.size(); j++)
            {
                if(a[i+j]!=b[j]||i+j>a.size()-1)
                {
                    flag =1;
                    break;
                }
            }
            if(flag==0)
            {
                bhams.push_back(make_pair(i,i+b.size()-1));
            }
        }
        //cout<<bhams.size()<<endl;

    }
    else
    {
        flaged =1;
    }
    for(int query=0; query<m; query++)
    {
        int m1,n1;
        cin>>m1>>n1;
        m1--;
        n1--;
        int countm=0;
        if(flaged==0)
        {
            for(int i=0; i<bhams.size(); i++)
            {
                if(m1<=bhams[i].first&&n1>=bhams[i].second)
                {
                    countm++;
                    //cout<<bhams[i].first<<" "<<bhams[i].second<<endl;
                }
            }
            cout<<countm<<endl;
        }
        else
        {
            cout<<0<<endl;
        }
    }

    return 0;
}
