#include <bits/stdc++.h>
using namespace std;

//Note: watch coding blocks video on it.

int totalWater(int arr[], int n){

	// to store left highest and right highest for each building.
	int left[n], right[n];

	left[0]=arr[0];

	for (int i = 1; i < n; i++)
		left[i]=max(left[i-1],arr[i]);

	right[n-1]=arr[n-1];
	for (int j = n-2; j>=0; j--)
		right[j]=max(right[j+1],arr[j]);

	int sum = 0;
	for (int x = 0; x < n; x++)
	{
		sum = sum + (min(left[x],right[x])-arr[x]);
	}

	return sum;
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
    	cout << totalWater(arr, n);

	}
    return 0;
	
}