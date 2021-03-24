#include <bits/stdc++.h>
using namespace std;
int t[1001];

int LIS (int arr[], int n){

	if(n==0 || arr==NULL)
		return 0;

	int res = 0;
	for(int i=0; i<n ; i++){
		t[i]=arr[i]; //this is change from LIS
		for (int j = 0; j < n; j++)
		{
			/* code */
			if(arr[j]<arr[i]){
				//only this is the cnage from LIS
				t[i] = max(t[i], t[j]+arr[i]);
			}
		}
		res = max(res,t[i]);
	}
	return res;
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