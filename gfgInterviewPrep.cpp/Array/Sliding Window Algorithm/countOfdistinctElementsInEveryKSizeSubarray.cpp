//sliding window algorihm

#include <bits/stdc++.h>
using namespace std;

void MaxSum_k_elements(int arr[], int n, int k){

	int curSum = 0;
	int maxSum = INT_MIN;
	unordered_map<int,int> m;
	int windowStart = 0;
	for (int i = 0; i < n; i++)
	{
		m[arr[i]]++;
		//say here i >=4  [0],[1],[2],....
		if (i >= k-1)
		{

			cout<<"The count of distinct elements in the sub-array ["<<windowStart<<"and"<<i<<"]is"<<m.size()<<endl;
			m[arr[windowStart]]--;

			if(m[arr[windowStart]]==0)
			    m.erase(arr[windowStart]);
			
			windowStart++;
		}
	}

}


int main()
{
	int arr[] = { 2,1,2,3,2,1,4,5 }; 
    int n = sizeof(arr) / sizeof(arr[0]); 
    int k = 5; 
	MaxSum_k_elements(arr,n,k);    
	return 0;
}