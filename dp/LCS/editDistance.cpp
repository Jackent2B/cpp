#include <bits/stdc++.h>
using namespace std;

int t[1001][1001];

int min(int x, int y, int z){
	return min(min(x,y),z);
}

int editDistance(string x, string y,int n, int m){
	//Base condition
	if(n==0)
		return m;

	if(m==0)
		return n;

	if(t[n][m] != -1)
		return t[n][m]; 

	else if(x[n-1]==y[m-1])
		return t[n][m]= editDistance(x,y,n-1,m-1);
	else
		return t[n][m]= 1+min(editDistance(x,y,n-1,m),
			editDistance(x,y,n,m-1),
			editDistance(x,y,n-1,m-1));
}

int main(){
	memset(t,-1,sizeof(t));
	string x = "sunday";
	string y = "saturday";
	int n = x.length();
	int m = y.length();
	int len = editDistance(x,y,n,m);
	cout<<len<<endl;
}