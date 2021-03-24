#include <bits/stdc++.h>
using namespace std;


int solve(int arr[], int type[], int n){
    int flag = 1;

    if(n==1)
        return flag;

    for(int i = 1; i<n; i++){
        if(arr[i-1]<=arr[i])
            continue;
        else if(arr[i-1]>arr[i]){
            if(type[i-1] != type[i]){
                swap(arr[i-1], arr[i]);
                swap(type[i-1], type[i]);             
            }
            else{
                flag = 0;
                break;
            }

        }
    }
    return flag;
}


int main(){
    int t;
    cin>>t;

    while(t--){
        int n;
        cin>>n;

        int arr[n];
        int type[n];

        for(int i=0; i<n; i++)
            cin>>arr[i];
        
        for(int j=0; j<n; j++)
            cin>>type[j];

        if(solve(arr, type, n))
            cout<<"YES"<<endl;
        else
            cout<<"NO"<<endl;

    }
    return 0;
}