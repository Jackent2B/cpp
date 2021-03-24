#include <bits/stdc++.h>
using namespace std;


int longestSubsequenceCommonSegment(int k, string s1, string s2){
	int n = s1.length();
	int m = s2.length();

	int arr[n+1][m+1];
	int result = 0;
	int sum = 0;
	for (int i = 0; i < n+1; i++)
	{
		for (int j = 0; j < m+1; j++)
		{
			if(n==0 || m==0)
				arr[i][j]=0;
			else if(s1[i-1]==s2[j-1]){
				arr[i][j]= 1+arr[i-1][j-1];
				result = max(result,arr[i][j]);
			}
			else
				arr[i][j]=0;
			
			if (result>=k)
			{
				sum = sum + result;
				result = 0;
			}

		}
	}

}


int main(){
	int k = 4; 
    string s1 = "aggasdfa"; 
    string s2 = "aggajasdfa"; 
    cout << longestSubsequenceCommonSegment(k, s1, s2); 
    return 0;
}