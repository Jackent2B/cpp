#include <bits/stdc++.h>
using namespace std;

int getSubarry(int arr[], int n, int k){
	int sumArr[n];
	sumArr[0]=arr[0];

	//creating a sum array
	for (int i = 1; i < n; i++)
		sumArr[i] = sumArr[i-1]+arr[i];

	

}

int main(){
	int t;
	cin>>t;
	while(t--){
		int n;
		cin>>n;
		int arr[n];
		int k;
		cin>>k;
		for (int i = 0; i < n; ++i)
			cin>>arr[i];
    	cout << getSubarry(arr, n, k);

	}
    return 0;
	
}