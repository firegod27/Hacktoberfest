#include<bits/stdc++.h>
using namespace std;
set<long long int>gcd;
long long int gcde(long long int a, long long int b)
{
    if(b!=0)
    {
        a%=b;
        return gcde(b,a);
    }
    else
    {
        return a;
    }

}

void primeFactors(long long int n)
{

    while (n%2 == 0)
    {
        gcd.insert(2);
        n = n/2;
    }


    for (int i = 3; i <= sqrt(n); i = i+2)
    {

        while (n%i == 0)
        {
            gcd.insert(i);
            n = n/i;
        }
    }
    if (n > 2)
        gcd.insert(n);
}

bool kappa(vector<long long int>l,vector<long long int>h,long long int k)
{
    bool c = true;
    for(int i=0; i<l.size(); i++)
    {
        if(l[i]%k!=0 && h[i]%k!=0)
        {
            c = false;
            break;
        }
    }
    return c;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n;
    cin>>n;
    bool kbc = false;

    vector<long long int>l(n);
    vector<long long int>h(n);
    for(int i=0; i<n; i++)
    {
        cin>>l[i]>>h[i];
    }
    if(n==1)
    {
        if(l[0]!=1)
        {
            cout<<l[0]<<endl;
        }
        else if(h[0]!=1)
        {
            cout<<h[0]<<endl;
        }
        else
        {
            cout<<-1<<endl;
        }
    }
    else if(n==2)
    {
        vector<long long int>lauda;
        lauda.push_back(gcde(l[0],h[1]));
        lauda.push_back(gcde(l[1],h[0]));
        lauda.push_back(gcde(h[0],h[1]));
        lauda.push_back(gcde(l[0],l[1]));
        long long int bakra = *max_element(lauda.begin(),lauda.end());
        if(bakra>1)
        {
            cout<<bakra<<endl;
        }
        else
        {
            cout<<-1<<endl;
        }
    }
    else
    {
        if(gcde(l[0],h[1])!=1)gcd.insert(gcde(l[0],h[1]));
        if(gcde(l[1],h[0])!=1)gcd.insert(gcde(l[1],h[0]));
        if(gcde(l[0],l[1])!=1)gcd.insert(gcde(l[0],l[1]));
        if(gcde(h[0],h[1])!=1)gcd.insert(gcde(h[0],h[1]));
        primeFactors(gcde(l[0],h[1]));
        primeFactors(gcde(l[1],h[0]));
        primeFactors(gcde(l[0],l[1]));
        primeFactors(gcde(h[0],h[1]));
        set<long long int>::iterator it;
        for(it=gcd.begin(); it!=gcd.end(); it++)
        {
            if(kappa(l,h,*it))
            {
                kbc = true;
                cout<<*it<<endl;
                break;
            }
        }
        if(!kbc)
        {
            cout<<-1<<endl;
        }
    }
    return 0;
}

