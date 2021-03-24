#include <bits/stdc++.h>
using namespace std;

void getanswer(long long int n,long long int m){
	if(n==1 && m==1)
		cout<<n*m<<endl;
	else
		cout<<(n*m)-1<<endl;
}


int main(){
	long long int n,m;
	cin>>n>>m;
	getanswer(n,m);
	return 0;
} 