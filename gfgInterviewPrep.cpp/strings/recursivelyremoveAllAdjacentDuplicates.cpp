#include <bits/stdc++.h>
using namespace std;

void solveAns(string a){
	if(a.length() == 1)
		{cout<<a<<endl; return;}

	//hypothesis
	string temp = a.substr(0,a.length()-1);
	solveAns(temp);

	string last = a.substr(a.length()-1);
	if(last==a[a.length()-1])
		{cout<<a;return;}
	else
		{cout<<a+last;return}
}


int main(){
	int t;
	cin>>t;
	while(t--){
		string a;
		cin>>a;
		solveAns(a);
	}
	return 0;
}