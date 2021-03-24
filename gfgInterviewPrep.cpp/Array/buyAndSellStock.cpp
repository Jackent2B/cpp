#include <bits/stdc++.h>
using namespace std;

int getAns(int arr[],int n){

	int mx= INT_MIN;
	int mn = INT_MAX;

	for (int i = 0; i < n; ++i)
	{
		if(arr[i]<mn)
			mn = arr[i];
		else
			mx = max(mx,arr[i]-mn);
	}
	return mx;
}


int main(){
		int t;
	cin>>t;

	while(t--){
		int n;
		cin>>n;
        int arr[n];
		for(int i=0; i<n;i++)
			cin>>arr[i];
		cout<<"It is ths ans "<<getAns(arr,n)<<endl;

	}
	return 0;
}