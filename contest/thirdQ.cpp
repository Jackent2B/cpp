#include <bits/stdc++.h>
using namespace std;

int getAns(int arr[],int n, int s){

    int len = INT_MAX;
    int curSum=0;
    int windowStart = 0;
    for(int windowEnd=0; windowEnd<n; windowEnd++){
        curSum = curSum + arr[windowEnd];
        if(curSum >= s){
            len = min(len, windowEnd-windowStart+1);
            curSum = curSum - arr[windowStart];
            windowStart++;
        }
    }
    return len;
}

int main(){
    int t;
    cin>>t;
    while(t--){
        int n,s;
        cin>>n>>s;
        int arr[n];
        for(int i = 0; i<n; i++)
            cin>>arr[i];
        
        int x = getAns(arr,n,s);
        cout<<x<<endl;
    }
    return 0;
}