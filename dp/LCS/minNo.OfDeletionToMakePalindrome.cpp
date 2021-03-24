#include <bits/stdc++.h>
using namespace std;

int minInsertions(string X, int n)
{
	// string Y is reverse of X
	string Y = X;
	reverse(Y.begin(), Y.end());

	int dp[n + 1][n + 1];
	// fill the dp table in bottom-up manner
	for (int i = 0; i < n+1; i++)
	{
		for (int j = 0; j < n+1; j++)
		{
			if(i==0 || j==0) dp[i][j]=0;

			else if (X[i - 1] == Y[j - 1])
				dp[i][j] = dp[i - 1][j - 1] + 1;
			else
				dp[i][j] = max(dp[i - 1][j], dp[i][j - 1]);
		}
	}

	return n - dp[n][n];
}

int main()
{
	int t;
	cin>>t;
	while(t--){
		string X;
		cin>>X;
		int n = X.length();
		cout<<minInsertions(X, n)<<endl;
	}
	return 0;
}