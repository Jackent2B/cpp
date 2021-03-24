#include <bits/stdc++.h>
using namespace std;

//Note: watch coding blocks video on it.

int EuilibiriumPoint(int arr[], int n){

	// to store left highest and right highest for each building.
	int left[n], right[n];

	//if n==2 , there can not exist any equilibirum point
	if(n==2)
		return -1;

	left[0]=arr[0];
	int sumLeft=0;
	for (int i = 1; i < n; i++){
		sumLeft = sumLeft+arr[i-1];
		left[i]=sumLeft;
	}
    
	right[n-1]=arr[n-1];
	int sumRight=0;
	for (int j = n-2; j>=0; j--){
		sumRight = sumRight+arr[j+1];
		right[j]=sumRight;
	}
	
	for (int x = 0; x < n; x++)
	{
		if (left[x]==right[x])
		{	
			//array starts from 0 therefore adding 1 in output;
			return (x+1);
			break;
		}
	}

	return -1;
}

int main(){
	int t;
	cin>>t;
	while(t--){
		int n;
		cin>>n;
		int arr[n];
		for (int i = 0; i < n; ++i)
			cin>>arr[i];
			
    	cout << EuilibiriumPoint(arr, n) <<endl;

	}
    return 0;
	
}