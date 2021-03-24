//sliding window algorihm

#include <bits/stdc++.h>
using namespace std;

int MaxSum_k_elements(int arr[], int n){

	unordered_map <int,int> m;

	int maxLen = INT_MIN;
	int windowStart = 0;

	for (int windowEnd = 0; windowEnd < n; windowEnd++)
	{
		m[arr[windowEnd]]++;

		while(m[0]>1){
			m[0]--;
			windowStart++;
		}
		maxLen = max(maxLen,windowEnd-windowStart+1);
	}

	return maxLen;
}


int main()
{
	int arr[] = { 0,0,1,0,1,1,0,0,1,1 }; 
    int n = sizeof(arr) / sizeof(arr[0]); 
    int ans = MaxSum_k_elements(arr, n);
	cout << ans <<endl;
	return 0;
}