#include <bits/stdc++.h>
using namespace std;


void printLPS(string x, string y,int n, int m){

	int dp[n+1][m+1];

	for (int i = 0; i < n+1; i++)
	{
		for (int j = 0; j < m+1; j++)
		{
			if(i==0 || j==0)
				dp[i][j]=0; //base condition
			else if(x[i-1]==y[j-1])
				dp[i][j]= (1+dp[i-1][j-1]);
			else
			 	dp[i][j]= max(dp[i][j-1],dp[i-1][j]);		
		}
	}

	string p;

	int a = n;
	int b = m;
	while(a>=0 && b>=0){

		//if x[a-1]==y[b-1], then move backwards diagonally 
		if(x[a-1]==y[b-1]){
			p.push_back(x[a-1]);
			a--;
			b--;
		}
		//else move backwards in the direction of max(dp[a-1][b],dp[a][b-1]) 
		else{
			if(dp[a-1][b]>dp[a][b-1])
				a--;
			else
				b--;
		}
	}

	for(int i =p.length(); i>=0;i--)
        cout << p[i];
    cout<<endl;    
}

int main(){
    int t;
    cin>>t;
	while(t--){
	    string x;
	    cin>>x;
	    string y = x;
	    reverse(y.begin(),y.end());
	    int n = x.length();
	    int m = y.length();
	    printLPS(x,y,n,m);
	}
	return 0;
}
