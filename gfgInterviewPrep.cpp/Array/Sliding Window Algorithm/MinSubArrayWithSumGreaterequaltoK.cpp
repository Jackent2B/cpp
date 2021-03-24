//sliding window algorihm

#include <bits/stdc++.h>
using namespace std;

int MaxSum_k_elements(int arr[], int n, int k){

	int curSum = 0;
	int minLen = INT_MAX;

	int windowStart = 0;
	for (int windowEnd = 0; windowEnd < n; windowEnd++)
	{
		curSum = curSum + arr[windowEnd]; //add one element to end. 
		while (curSum >= k)
		{
			minLen = min(minLen,windowEnd-windowStart+1);
			curSum = curSum - arr[windowStart];
			windowStart++;
		}
	}

	return minLen;
}


int main()
{
	int arr[] = { 12, 1, 78, 90, 57, 89, 56 }; 
    int n = sizeof(arr) / sizeof(arr[0]); 
    int k = 90; 
    int ans = MaxSum_k_elements(arr, n, k);
	cout << ans <<endl;
	return 0;
}