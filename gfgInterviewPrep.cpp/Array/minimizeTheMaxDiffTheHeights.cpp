#include <bits/srdc++.h>
using namespace std;

int getAnsDiff(int arr[], int n, int k){
	sort(arr,arr+n);
	int start = arr[0];
	int end  = arr[n-1];

	int ans  = (end-k)-(start+k);
	return ans;
}

int main(){
		int t;
	cin>>t;
	while(t--){
		int k;
		cin>>k;
		int n;
		cin>>n;
		int arr[n];
		for (int i = 0; i < n; ++i)
			cin>>arr[i];
    	cout << getAnsDiff(arr, n, k);

	}
	return 0;
}