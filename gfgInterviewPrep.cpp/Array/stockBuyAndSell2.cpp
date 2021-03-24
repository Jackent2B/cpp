#include <bits/stdc++.h>
using namespace std;

int getAns(int arr[],int n){

	int sm = 0;
	for(int i=0; i<n-1; i++){
	    if(arr[i]<arr[i+1])
	        sm = sm+(arr[i+1]-arr[i]);
	    
	}
	return sm;
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