#include <bits/stdc++.h>
using namespace std;
int t[1001];

int LIS (int arr[], int n){

	if(n==0 || arr==NULL)
		return 0;

	int res = 0;
	for(int i=0; i<n ; i++){
		t[i]=1;
		for (int j = 0; j < n; j++)
		{
			/* code */
			if(arr[j]<arr[i]){
				t[i] = max(t[i], t[j]+1);
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