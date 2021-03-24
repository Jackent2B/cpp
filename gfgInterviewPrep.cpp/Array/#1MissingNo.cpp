#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int arr[n-1];
        int s1 = ((n)*(n+1))/2;
        int s2 =0;
        for(int i=0;i<n-1;i++){
            cin>>arr[i];
            s2= s2 + arr[i];
        }
        cout<<s1-s2<<endl;
    }
    return 0;
}