//sliding window algorihm

#include <bits/stdc++.h>
using namespace std;

int MaxSum_k_elements(int arr[], int n, int k){

	int curSum = 0;
	int maxSum = INT_MIN;

	for (int i = 0; i < n; i++)
	{
		curSum = curSum + arr[i]; //add one element to end. 
		//say here i >=2  [0],[1],[2],....
		if (i >= k-1)
		{
			maxSum = max(maxSum,curSum); //choose max 
			curSum = curSum - arr[i-(k-1)]; //remove one element from start
		}
	}

	return maxSum;
}


int main()
{
	int arr[] = { 12, 1, 78, 90, 57, 89, 56 }; 
    int n = sizeof(arr) / sizeof(arr[0]); 
    int k = 3; 
    int ans = MaxSum_k_elements(arr, n, k);
	cout << ans <<endl;
	return 0;
}