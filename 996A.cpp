#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    int countm=0;
    countm += t/100;
    t%=100;
    countm += t/20;
    t%=20;
    countm += t/10;
    t%=10;
    countm+= t/5;
    t%=5;
    countm+=t;
    cout<<countm<<endl;
    return 0;
}
