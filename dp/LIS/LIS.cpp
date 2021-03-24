#include <bits/stdc++.h>
using namespace std;

int LIS (int arr[], int n){
	//to store the result at each i
	int output[n+1];
	//initilaisng first index of array by 1
	output[0] = 1;
	for(int i = 1; i < n; i++){
		output[i]=1;

		//traversing all the elemnts before i
		for (int j = i-1; j >=0 ; j--)
		{
			if(arr[j]>arr[i])
				continue;
			
			int possibleAns = 1 + output[j];

			if(possibleAns > output[i])
				output[i]=possibleAns;
		}
	}

	int maxAns = INT_MIN;
	for(int x = 0; x<n; x++){
		if(output[x]>maxAns)
			maxAns = max(maxAns,output[x]);
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
		for(int i=0;i<n;i++)
			cin>>arr[i];
		cout<<LIS(arr,n)<<endl;
	}
	return 0;
}