#include <bits/stdc++.h>
using namespace std;

int getMajorityElement(int arr[], int n){

	unordered_map<int, int> m; 
    for(int i = 0; i < n; i++) 
        m[arr[i]]++; 
    
    int count = 0; 
    
    int flag = 0;
    for(auto i : m) 
    { 
    	if (i.second>n/2){
    		flag=1;
    	   	return i.first;
    		break;
    	}

    } 
    if (flag==0)
    	return -1;
}


int main(){
	int t;
	cin>>t;
	while(t--){
		int n;
		cin>>n;
		int arr[n];
		for (int i = 0; i < n; ++i)
			cin>>arr[i];
    	cout << getMajorityElement(arr, n)<<endl;
	}
	return 0;
}