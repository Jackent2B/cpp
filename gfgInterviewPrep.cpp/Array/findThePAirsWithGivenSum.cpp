#include <bits/stdc++.h>
using namespace std;

int main(){
	int t;
	cin>>t;
	while(t--){
		int n,s;
		cin>>n>>s;
		int arr[n];
		for (int i = 0; i < n; i++)
			cin>>arr[i];

		int l = arr[0];
		int r = arr[n-1];

		sort(arr,arr+n);
		while(l<r){
			if(arr[l]+arr[r]>s)
				{r--;}
			else if(arr[l]+arr[r]<s)
				{l++;}
			else
				{
				cout<<arr[l]<<" "<<arr[r];
				l++;
				r--;
				}
		}
	}
	return 0;
} 