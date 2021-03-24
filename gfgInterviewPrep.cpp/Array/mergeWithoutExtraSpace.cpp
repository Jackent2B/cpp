#include <bits/stdc++.h>
using namespace std; 
void merge(vector<int> a,vector<int> b)
{
    int n=a.size();
    int m=b.size();
    sort(a.begin(),a.end());
    reverse(a.begin(),a.end());
    sort(b.begin(),b.end());
    reverse(b.begin(),b.end());
    int i=0;
    int j=0;
    //vector<int> ans(n+m);
    int k=0;
    while(i<n&&j<m)
    {
        if(a[i]>b[j])
        {
            cout<<a[i++]<<" ";
        }
        else
        {
            cout<<b[j++]<<" ";
        }
    }
    if(i<n)
    {
        while(i<n)
        {
            cout<<a[i++]<<" ";
        }
    }
    if(j<m)
    {
        while(j<m)
        {
            cout<<b[j++]<<" ";
        }
    }
}
int main()
 {
     int t;
     cin>>t;
     while(t--)
     {
         int n,m;
         cin>>n>>m;
         vector<int> a(n);
         vector<int> b(m);
         for(int i=0;i<n;i++)
         cin>>a[i];
         for(int i=0;i<m;i++)
         cin>>b[i];
         merge(a,b);
         cout<<"\n";
     }
    //code
    return 0;
}