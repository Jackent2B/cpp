#include <bits/stdc++.h>
using namespace std;


int printLCS(string x, string y,int n, int m){
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

	string p;

	int a = n;
	int b = m;
	while(a>=0 && b>=0){
		if(x[a-1]==y[b-1]){
			p.push_back(x[a-1]);
			a--;
			b--;
		}
		else{
			if(dp[a-1][b]>dp[a][b-1])
				a--;
			else
				b--;
		}
	}

    int cost=0;
	for(int i =0; i<p.length();i++){
	    cost=cost+(int(p[i])-48);
	}
    return cost;
}

int getsum(string s){
    int cost=0;
	for(int i =0; i<s.length();i++){
	    cost=cost+(int(s[i])-48);
	}
    return cost;
}

int main(){
	string x = "7135";
	string y = "135";
	int n = x.length();
	int m = y.length();
	int sumA = getsum(x);
	int sumB = getsum(y);
	int cost = printLCS(x,y,n,m);
    std::cout << min((sumA-cost)+(sumB-cost),cost+cost) << std::endl;    
    
}
