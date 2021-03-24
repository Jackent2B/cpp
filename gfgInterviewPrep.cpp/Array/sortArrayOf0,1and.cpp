#include<bits/stdc++.h>
using namespace std;

void sortArr(int arr[], int n){
	int low = 0;
	int mid = 0;
	int high = n-1;

	//we will check for mid i.e we have decide to keep '1' in middle therfore we will
	//not touch it. we will shift '0' to left of '1' and '2' to the right of '1'.
	while(mid<=high){
		if(arr[mid]==0){
			swap(arr[low],arr[mid]);
			low++;mid++;	
			}
			//we will not touch when arr[mid]==1
		else if(arr[mid]==1)
			mid++;	
		else if(arr[mid]==2){
			swap(arr[mid],arr[high]);
			high--;	
			}
		}

	for (int i = 0; i < n; ++i)
		cout<<arr[i]<<" ";
	cout<<endl;
}

int main()
 {
	int t;
	cin>>t;
	while(t--){
		int n;
		cin>>n;
		int arr[n];
		for (int i = 0; i < n; ++i)
			cin>>arr[i];
		sortArr(arr,n);
	}
	return 0;
}