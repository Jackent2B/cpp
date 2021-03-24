#include <bits/stdc++.h>
using namespace std;


int getLCS(string x, string y,int n, int m){
	//Base condition

	int dp[n+1][m+1];

	for (int i = 0; i < n+1; i++)
	{
		for (int j = 0; j < m+1; j++)
		{
			if(i==0 || j==0)
				dp[i][j]=0;
			else if(x[i-1]==y[j-1])
				dp[i][j]= (1+dp[i-1][j-1]);
			else
			 	dp[i][j]= max(dp[i][j-1],dp[i-1][j]);		
		}
	}

	return dp[n][m];
}

int main(){
	string x = "abcdgh";
	string y = "abedfhr";
	int n = x.length();
	int m = y.length();
	int len = getLCS(x,y,n,m);
	cout<<len<<endl;
}
