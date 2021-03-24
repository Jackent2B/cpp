#include <bits/stdc++.h>
using namespace std;

int maxSubArraySumwithSizek(int arr[],int n, int k){

	int maxSum = MIN_INFY;
	int curSum = 0;

	for (int i = 0; i < n; i++)
	{
		curSum = curSum + arr[i];
		if (i>=(k-1))
		{
			maxSum = max(maxSum,curSum);
			curSum = curSum - arr[i-(k-1)];
		}
	}

	return maxSum;
}



int main(){
	int k = 3;
	int arr[]= { 4,2,1,7,8,1,2,8,1,0};
	int n = sizeof(arr) / sizeof(arr[0]);
	int ans = maxSubArraySumwithSizek(arr,n,k);
	cout<<arr;
	return 0;
}