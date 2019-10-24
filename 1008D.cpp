#include "bits/stdc++.h"
using namespace std;

#define MAXN   1000001

// stores smallest prime factor for every number
int spf[MAXN];

// Calculating SPF (Smallest Prime Factor) for every
// number till MAXN.
// Time Complexity : O(nloglogn)
void sievecalcu()
{
    spf[1] = 1;
    for (int i=2; i<MAXN; i++)

        // marking smallest prime factor for every
        // number to be itself.
        spf[i] = i;

    // separately marking spf for every even
    // number as 2
    for (int i=4; i<MAXN; i+=2)
        spf[i] = 2;

    for (int i=3; i*i<MAXN; i++)
    {
        // checking if i is prime
        if (spf[i] == i)
        {
            // marking SPF for all numbers divisible by i
            for (int j=i*i; j<MAXN; j+=i)

                // marking spf[j] if it is not
                // previously marked
                if (spf[j]==j)
                    spf[j] = i;
        }
    }
}

// A O(log n) function returning primefactorization
// by dividing by smallest prime factor at every step
vector<int> getFactorization(long long int x)
{
    vector<long long int>r;
    while (x != 1)
    {
        r.push_back(spf[x]);
        x = x / spf[x];
    }
    vector<int>bhams;
    for(long long int i=0;i<r.size();i++)
    {
        bhams.push_back(r[i]);
    }
    return bhams;
}
int main()
{
    sievecalcu();
    int t;
    cin>>t;
    while(t--)
    {
        long long int a,b,c;
        cin>>a>>b>>c;
        vector<int>bhams1=getFactorization(a);
        vector<int>bhams2=getFactorization(b);
        vector<int>bhams3=getFactorization(c);
        for(int i=0;i<bhams1.size();i++)
        {
            cout<<bhams1[i]<<" ";
        }
        cout<<endl;
        long long int countm=0;
        int j=0,k=0;
        for(int i=0;i<bhams1.size();i++)
        {
            if(bhams1[i]<=bhams2[j]<=bhams3[k])
            {
                countm++;
                j++;
                k++;
            }
        }
        cout<<countm<<endl;
    }
}
