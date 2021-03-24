#include <bits/stdc++.h>
using namespace std;

int getNoOfpairs (int arr[], int n, int k){
    unordered_map <int,int> mp;

    //storing count of each element 
    for (int i = 0; i < n; i++)
        mp[arr[i]]++;

    int count = 0;
    for (int x = 0; x < n; x++)
    {
        //to count
        count = count + mp[k-arr[x]];
        
        if (k-arr[x] == arr[x])
            count--;
    }

    //say for example if k=4 and we have included both [1,3] and [3,1]
    return count/2;

}

int main(){
    int arr[] = {1,2,3,4,-1,6};
    int n = sizeof(arr)/sizeof(arr[0]);
    int k = 3 ;
    cout<<getNoOfpairs(arr,n,k)<<endl;
    return 0;
}