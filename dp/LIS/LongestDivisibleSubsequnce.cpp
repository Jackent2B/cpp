#include <bits/stdc++.h>
using namespace std;
int t[1001];

int LongestDivisibleSub (int arr[], int n){

	if(n==0 || arr==NULL)
		return 0;

	int res = 0;
	for(int i=0; i<n ; i++){
		t[i]=1;
		for (int j = 0; j < i; j++)
		{
			/* code */
			//only change here from LIS
			if( arr[j]!=0 && arr[i] % arr[j] == 0){
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
		cout<<LongestDivisibleSub(arr,n)<<endl;
	}
	return 0;
}