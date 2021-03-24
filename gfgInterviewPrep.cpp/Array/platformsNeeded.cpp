#include <bits/stdc++.h>
using namespace std; 
  
// Returns minimum number of platforms reqquired 
int findPlatform(int arr[], int dep[], int n) 
{ 
    // Sort arrival and departure arrays 
    sort(arr, arr + n); 
    sort(dep, dep + n); 
  
    // platforms_needed indicates number of platforms 
    // needed at a time 
    int platforms_needed = 1, result = 1; 
    int i = 1; //starting at index 1
    int j = 0; //starting at index 0
  
    while (i < n && j < n) { 
  
        // If next event in sorted order is arrival, 
        // increment count of platforms needed 
        if (arr[i] <= dep[j]) { 
            platforms_needed++; 
            i++; 
        } 
  
        // Else decrement count of platforms needed 
        else if (arr[i] > dep[j]) { 
            platforms_needed--; 
            j++; 
        } 
  
        result = max(result,platforms_needed);
    } 
  
    return result; 
} 
  
// Driver program to test methods of graph class 
int main() 
{ 
    int t;
    cin>>t;
    while(t--){
    int n;
    cin>>n;
    int arr[n];
    int dep[n];

    for(int i=0; i<n; i++)
        cin>>arr[i];

    for (int j = 0; j < n; j++)
        cin>>dep[j];

    cout << findPlatform(arr, dep, n)<<endl; 
    
    }
    return 0; 
}