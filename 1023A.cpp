#include <bits/stdc++.h>
using namespace std;
#define ll long long int
//struct node
int main()
{
   int n,m;
   cin>>n>>m;
   string s,t;
   cin>>s>>t;
   int d=m-n;int in=-1;
   if(d<-1)
   {
       cout<<"NO";
       return 0;
   }
   for(int i=0;i<n;i++)
   {
       if(s[i]=='*')
       {
           in=i;
           break;
       }
   }
   if(in!=-1)
   {
       for(int i=0;i<in;i++)
       {
           if(s[i]!=t[i])
           {
               cout<<"NO";
               return 0;

           }
       }
       for(int i=in+1;i<n;i++)
       {
           if(s[i]!=t[i+d])
           {
               cout<<"NO";
               return 0;
           }
       }
       cout<<"YES";
       return 0;
   }
   else
   {
       if(n==m)
       {
           for(int i=0;i<n;i++)
           {
               if(s[i]!=t[i])
               {cout<<"NO";
               return 0;
               }
           }
           cout<<"YES";
           return 0;
       }
       else
       {
           cout<<"NO";
           return 0;
       }
   }




}
