#include <bits/stdc++.h>
using namespace std;

long ANDProduct(long n,long m){
	int x = n;
	for (int i = n; i <= m; i++)
			x = x&i;
	return x;	
}


int main(){
	int t;
	cin>>t;
	while(t--){
			long n,m;
			cin>>n>>m;
			int x = ANDProduct(n,m);
			cout<<x<<endl;	
	}
	return 0;
} 