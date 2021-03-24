#include <bits/stdc++.h>
using namespace std;

int getMaxSum(int arr[], int n){

	int maxAns=arr[0];
	int curMax=arr[0];

	for (int i = 1; i < n; ++i)
	{
		curMax=max(arr[i],curMax+arr[i]);
		maxAns=max(curMax,maxAns);
	}

	return maxAns;
}



int main(){
	int t;
	cin>>t;
	while(t--){
		int n;
		cin>>n;
		int arr[n];
		for (int i = 0; i < n; ++i)
			cin>>arr[i];

		int ans = getMaxSum(arr, n);
    	std::cout << ans << std::endl;
	} 
	
	return 0;
}