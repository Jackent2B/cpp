#include <bits/stdc++.h>
using namespace std;

int getAns (vector<pair<int,int>> v, int n){

	int t[n];
	//it will automatically sort the array of pairs 
	//according to first elemnt of pair.
	sort(v.begin(),v.end());

	// Using sort() function to sort by 2nd element 
    // of pair 
    // sort(vect.begin(), vect.end(), sortbysec); 

	if(n==0 )
		return 0;

	int res = 0;
	for(int i=0; i<n ; i++){
		t[i]=1;
		for (int j = 0; j < n; j++)
		{
			/* code */
			if(v[j].second < v[i].first){
				t[i] = max(t[i], t[j]+1);
			}
		}
		res = max(res,t[i]);
	}
	return res;
}

int main(){

	int t;
	cin>>t;
	while(t--){
		int n;
		cin>>n;
		vector<pair<int,int>> v; 

		int a,b;
		for (int i = 0; i < n; ++i)
		{
			cin>>a;
			cin>>b;
   	   // Entering values in vector of pairs 
        v.push_back( make_pair(a,b) );
		}
		cout<<getAns(v,n)<<endl;
	}

	return 0;
}
