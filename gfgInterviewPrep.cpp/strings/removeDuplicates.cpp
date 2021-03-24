#include <bits/stdc++.h>
using namespace std;

int main(){
	int t;
	cin>>t;
	while(t--){
		string a;
		//here we have used cin>>ws
		//in some questions, we have to use this. it is used to remove white spaces
		getline(cin>>ws,a);
		string s;
		unordered_map <char,int> m;
		for (int i = 0; i < a.length(); i++){
			if(m[a[i]]==0){
			    m[a[i]]++;
			    s=s+a[i];
			}
		}
		cout<<s<<endl;
	}
	return 0;
}