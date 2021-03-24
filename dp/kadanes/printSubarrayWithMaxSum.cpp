#include <bits/stdc++.h>
using namespace std;

void printSubarray(int arr[], int n){
	int curMax = arr[0];
	int maxAns = arr[0];

	int endIndex = 0;
	for(int i=1;i<n;i++){
		curMax = max(arr[i],curMax+arr[i]);
		if(curMax>maxAns){
			maxAns = curMax;
			endIndex = i; //to find ending index
		}
	}

	int startIndex = endIndex;
	//to find starting index
	while(startIndex>=0){
		maxAns = maxAns-arr[startIndex];
		if(maxAns == 0)
			break;
		startIndex--;
	}

	for(int p = startIndex; p<endIndex; p++ )
		cout<<arr[p]<<" ";
	return;
}

int main(){
	int t;
	cin>>t;
	while(t--){
		int n;
		cin>>n;
		int arr[n];
		printSubarray(arr,n);
	}
	return 0;
}