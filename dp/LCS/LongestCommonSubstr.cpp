#include <bits/stdc++.h>
using namespace std;

int dp[101][101];
int getLCSsubStr(string x, string y,int n, int m){
	//Base condition
    int result = 0;
	for (int i = 0; i < n+1; i++)
	{
		for (int j = 0; j < m+1; j++)
		{
			if(i==0 || j==0)
				dp[i][j]=0;
			else if(x[i-1]==y[j-1]){
			    dp[i][j]= (1+dp[i-1][j-1]);
			    //it is important
			    result = max(result, dp[i][j]);
			}
				
			else
			 	dp[i][j]= 0;		
		}
	}

	return result;
}

int main(){
	int t;
	cin>>t;
	while(t--){
	int m,n;
	cin>>n>>m;
	string x,y;
	cin>>x>>y;

	int len = getLCSsubStr(x,y,n,m);
	cout<<len<<endl;
	}
	return 0;
}
