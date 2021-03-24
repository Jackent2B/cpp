#include <bits/stdc++.h>
using namespace std;

void getResultofEachElement(int arr[], int n){
	
	vector<int> v; // to store output result of each element.

	stack<int> s;  // to iterate.

	int count;
	
	//traversing array from last
	for (int i = 0; i<n; i++)
	{
		//if stack is empty then result is -1.
		count = 1;
		if(s.size()==0)
			v.push_back(count);
		//if stack is non empty and s.top()>arr[i] then run a while loop.
		//till we get contiguous elemnts which are smaller than arr[i].
		else if (s.size()>0 && s.top()<=arr[i]){
			while(s.size()>0 && s.top()<=arr[i]){
				count++;
				s.pop();
			}
			v.push_back(count);
		}
			
		//if stack is non empty and s.top()<=arr[i].
		else if(s.size()>0 && s.top()>arr[i]){
			v.push_back(count);
		}
		s.push(arr[i]);
	}

	for (int j = 0; j<n; j++)
		cout<<v[j]<<" ";
}

int main(){
	int t;
	cin>>t;
	while(t--){
		int n;
		cin>>n;
		int arr[n];
		for (int x = 0; x < n; x++)
			cin>>arr[x];
		getResultofEachElement(arr,n);
	}
	return 0;
}