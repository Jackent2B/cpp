#include <bits/stdc++.h>
using namespace std;

void getAns(int arr[], int n){
	
	int mx = 0;
	int mn = INT_MAX;

	for (int i = 0; i < n; i++)
	{
		if(arr[i]<mn)
			mn = arr[i];
		else{
			mx = max(mx,arr[i]-mn); 
		}
	}
	return mx;
}

int main(){
	int t;
	cin>>t;

	while(t--){
		int n;
		cin>>n;

		for(int i=0; i<n;i++)
			cin>>arr[i];
		getAns(arr,n);

	}
	return 0;
}