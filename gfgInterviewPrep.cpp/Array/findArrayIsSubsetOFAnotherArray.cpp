#include <bits/stdc++.h>
using namespace std;

bool isSubset(int arr1[], int arr2[], int n,int m ){
		unordered_map <int, int> mp;
		for (int i = 0; i < n; i++)
			mp[arr1[i]]=1; //it means the number is present in arr1

		for (int j = 0; j < m; j++)
		{
			if(mp[arr2[j]]!=1)
				return false;
		}
		return true;
}

int main(){
	    int arr1[] = {1,3,7,4,8,6}; 
        int arr2[] = {3,4,7}; 
          
        int n = sizeof(arr1)/sizeof(arr1[0]); 
        int m = sizeof(arr2)/sizeof(arr2[0]); 
              
        if(isSubset(arr1, arr2, n, m)) 
        cout<<"Yes"; 
        else
		cout<<"No";
	}