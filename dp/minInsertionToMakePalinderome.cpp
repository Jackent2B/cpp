#include <bits/stdc++.h>
using namespace std;
int arr[1001][1001];

int getLCS(string s1,string s2, int n, int m){
    
    memset(arr,-1,sizeof(arr));
	if(n==0 || m==0)
		return 0;
	else if(arr[n][m] != -1)
		return arr[n][m];
	else if(s1[n-1] == s2[m-1])
		return arr[n][m] = 1 + getLCS(s1,s2,n-1,m-1);
	else
		return arr[n][m] = max(getLCS(s1,s2,n-1,m),getLCS(s1,s2,n,m-1));
}

int getAns(string s){
	string s1 = s;
	int n = s.length();
	reverse(s.begin(),s.end());
	string s2 = s;
	int m = s2.length();

	return n-getLCS(s1,s2,n,m);

}

int main(){
	int t;
	cin>>t;
	while(t--){
		string s;
		cin>>s;
		std::cout << getAns(s) << std::endl;
	}
	return 0;
}