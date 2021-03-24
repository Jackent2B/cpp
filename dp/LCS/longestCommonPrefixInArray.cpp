#include <bits/stdc++.h>
using namespace std;


string printLCPrefixArray(string x, string y){
    
    int n = x.length();
    int m = y.length();

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

	reverse(p.begin(),p.end());
	return p;
	// for(int i =p.length(); i>=0;i--)
 	//        cout << p[i];
 	//    cout<<endl;    
}

int main(){
    int t;
    cin>>t;
	while(t--){
		int a;
		cin>>a;
		string arr[a];

		//taking string inputs in the array
		for (int i = 0; i < a; ++i)
			cin>>arr[i];

		//initiale value for temp
		string temp= printLCPrefixArray(arr[0],arr[1]);
		// cout<<temp<<endl;

		for (int i = 2; i < a; ++i){
			temp = printLCPrefixArray(temp,arr[i]);
			// cout<<temp<<endl;
			}

		//printing final value of temp
		cout<<temp<<endl;
	}
	return 0;
}
