#include <bits/stdc++.h> 
using namespace std; 
  
void getMissingNumber(int arr[],int n, int brr[],int m) 
{ 
    unordered_map<int, int> mp;  
    
    for (int i = 0; i < m; i++) 
        mp[brr[i]]++;    

    for (int j = 0; j < n; j++) 
        mp[arr[i]]--;

    for (int x = 0; x < m; x++)
    {
        if(mp[brr[i]]!=0)
            cout<<arr[i];
    }

} 
  
int main() 
{ 
     int alength;
     cin>>alength;
     int arr[alength];
     for (int i = 0; i < alength; ++i)
            cin>>arr[i];

     int blength;
     cin>>blength;
     int brr[blength];
 
     for (int j = 0; j < blength; ++j)
            cin>>arr[i];

    getMissingNumber(arr,n,brr,m); 
    return 0; 
} 