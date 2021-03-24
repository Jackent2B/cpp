#include <bits/stdc++.h>
using namespace std;

bool isIncreasing(string s,int i,int j){
	for(int x=i;x<j;x++){
		if(s[i]<s[i+1])
			continue;
		else
			return false;
	}
	return true;
}

bool isDecreasing(string s,int i,int j){
	for(int x=i;x<j;x++){
		if(s[i]>s[i+1])
			continue;
		else
			return false;
	}
	return true;
}

int solve(string s, int i, int j){
	if(i>j)
		return 0;
	if(i==j)
		return 1;

	if(isIncreasing(s,i,j) || isDecreasing(s,i,j)){
		return 1;
	}

	int mn = INT_MAX;
	for (int k = i; k <= j-1; k++)
	{
		int temp = 1+solve(s,i,k)+solve(s,k+1,j);
		mn=min(mn,temp);
	}
	return mn;
}

int main(){
	int t;
	cin>>t;
	while(t--){
		string s;
		cin>>s;
		int n = s.length();
		int i=0;
		int j = n-1;
		int ans = solve(s,i,j);
		cout<<ans<<endl;
	}
	return 0;
}

