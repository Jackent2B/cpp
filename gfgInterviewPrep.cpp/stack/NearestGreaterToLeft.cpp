#include <bits/stdc++.h>
using namespace std;

void getResultofEachElement(int arr[], int n){
	
	vector<int> v; // to store output result of each element.

	stack<int> s;  // to iterate.

	//traversing array from last
	for (int i = 0; i<n; i++)
	{
		//if stack is empty then result is -1.
		if(s.size()==0)
			v.push_back(-1);
		//if stack is non empty and s.top()>arr[i] then push s.top().
		else if (s.size()>0 && s.top()>arr[i])
			v.push_back(s.top());

		//if stack is non empty and s.top()<=arr[i].
		else if(s.size()>0 && s.top()<=arr[i]){
			while(s.size()>0 && s.top()<=arr[i]){
				s.pop();
			}
			if (s.size()==0){
				v.push_back(-1);
			}
			else{
				v.push_back(s.top());
			}
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