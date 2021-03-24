#include <bits/stdc++.h>
using namespace std;

bool getAns(int arr[], int n, int k){
	//map to keep count of every element
	unordered_map <int,int> m;
	for (int i = 0; i < n; i++)
	{
		if (m.find(arr[i]) != m.end())
		{
			if (i-m[arr[i]]<=k)
			{
				return true;
			}
		}
		m[arr[i]]=i; //store value with their index
		
	}
	return false;
}


int main(){
	int arr[] = {5,6,8,2,4,6,9};
	int n = sizeof(arr)/sizeof(arr[0]);
	int k = 4;
	bool ans = getAns(arr,n,k);
	if (ans)
		cout<<"Duplicates found";
	else
		cout<<"No Duplicates found";
	return 0;
}