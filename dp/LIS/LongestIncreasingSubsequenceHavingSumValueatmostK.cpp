#include <bits/stdc++.h>
using namespace std;
int t[1001];
int op[1001];
int LIS (int arr[], int n,int k){

	if(n==0 || arr==NULL)
		return 0;

	int res = 0;
	for(int i=0; i<n ; i++){
		t[i]=1; //initialisation to store the max length at 'i'
		op[i]=arr[i]; // initialisation to store the max sum value at 'i'
		for (int j = 0; j < n; j++)
		{
			/* code */
			if(arr[j]<arr[i]){
				t[i] = max(t[i], t[j]+1); // to store max count
				op[i] = max(op[i], op[j]+arr[j]); // to store max count
			}
		}

		//to check if sum is less than pr equal to 'k' only.
		if(op[i]<=k)
			res = max(res,t[i]);
	}
	return res;
}

int main(){
	int t;
	cin>>t;
	while(t--){
		int n,k;
		cin>>n>>k;
		int arr[n];
		for(int i=0;i<n;i++)
			cin>>arr[i];
		cout<<LIS(arr,n,k)<<endl;
	}
	return 0;
}