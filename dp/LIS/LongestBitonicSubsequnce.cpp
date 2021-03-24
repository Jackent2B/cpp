//Given an array arr[0 … n-1] containing n positive integers,
//a subsequence of arr[] is called Bitonic if it is first increasing,
// then decreasing

#include <bits/stdc++.h>
using namespace std;

int longestBitonicSubsequnce( vector<int> &A) {
    int n = A.size();
    int increasing[n];
    int decreasing [n];
    
    if(A.empty())
        return 0;

    //increasing    
    for(int i=0; i<n;i++){
        increasing[i]=1;
        for(int j=0; j<i; j++){
            if(A[j]<A[i])
                increasing[i] = max(increasing[i],increasing[j]+1);
        }
    }
    
    //decreasing
    for (int i = 0; i < n; i++) 
      decreasing[i] = 1;

    for(int i=n-2; i>=0 ;i--){
        for(int j=n-1; j>i; j--){
            if(A[i]>A[j])
                decreasing[i] = max(decreasing[i],decreasing[j]+1);
        }
    }
    
    
    int ans = INT_MIN;
    for(int i=0;i<n;i++)
        ans = max(ans, increasing[i]+decreasing[i]-1);
    
    return ans;
    
}

int main(){
	int t;
	cin>>t;
	while(t--){
		int n;
		cin>>n;
		vector<int> A;
		for(int i=0;i<n;i++)
			cin>>A[i];
		cout<<longestBitonicSubsequnce(A)<<endl;
// 		cout<< ans(n) <<endl;
	}
	return 0;
}