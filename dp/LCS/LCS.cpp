#include <bits/stdc++.h>
using namespace std;

int getLCS(string x, string y,int n, int m){
	
	//Base condition
	if(n==0 || m==0)
		return 0;
	else if(x[n]==y[m])
		return (1+getLCS(x,y,n-1,m-1));
	else
		return max(getLCS(x,y,n-1,m),getLCS(x,y,n,m-1));
}

int main(){
	string x = "abcdgh";
	string y = "abedfhr";
	int n = x.length();
	int m = y.length();
	int len = getLCS(x,y,n,m);
	cout<<len<<endl;
}