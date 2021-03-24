#include <bits/stdc++.h>
using namespace std;

//setting dp array as globle so that no need to pass it again and again
int dp[1001][1001];


int getLCS(string x, string y,int n, int m){
	//Base condition
	if(n==0 || m==0)
		return 0;
	else if(dp[n][m] != -1)
		return dp[n][m];
	else if(x[n-1]==y[m-1])
		return dp[n][m]= (1+getLCS(x,y,n-1,m-1));
	else
		return dp[n][m]= max(getLCS(x,y,n-1,m),getLCS(x,y,n,m-1));

}

int main(){
	string x = "abcdgh";
	string y = "abedfhr";
	memset(dp,-1,sizeof(dp));
	int n = x.length();
	int m = y.length();
	int len = getLCS(x,y,n,m);
	cout<<len<<endl;
}