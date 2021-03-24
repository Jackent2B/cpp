#include <bits/stdc++.h>
using namespace std;

int solve(int n, int m){
	if(n==1 || m==1)
		return 1;
	return solve(n-1,m) + solve(n,m-1);
}


int main(){
	int t;
	cin>>t;
	while(t--){
		int n,m;
		cin>>n;
		cin>>m;
		int ans = solve(n,m);
		cout<<ans<<endl;
	}
	return 0;
}