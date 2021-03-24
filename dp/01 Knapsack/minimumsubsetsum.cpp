#include <bits/stdc++.h>
#include <vector>
using namespace std;

int subsetsum(int set[],int n){
	vector<int> v;

	int sum=0;
	for (int x=0;x<n;x++)
	    sum = sum+set[x]; 

	int arr[n+1][sum+1];

	//subset sum problem
	//to check whether sum can be made using subset or not
	for (int i = 0; i < n+1; i++){
		for (int j = 0; j < sum+1; j++)
		{
			if(j==0)  arr[i][j]=true;
			else if(j!=0&&i==0) arr[i][j]=false;
			else if(set[i-1]>j)
				arr[i][j]=arr[i-1][j];
			else 
				arr[i][j]=arr[i-1][j-set[i-1]] || arr[i-1][j];
		}
	}
	
	//to push the elemnets which can be served as sum using subset(S1).

	//value of n is kept fixed as the size of array because we need to 
	//check when all the elemnts are present in the array.
		for (int a = 0; a < sum/2; a++)
		{
			if (arr[n][a]==true)
				v.push_back(a);
		}

		for (int z = 0; z < v.size(); z++)
			cout<<v[z]<<endl;


	int mn=INT_MAX;
	for (int z = 0; z < v.size(); z++)
		mn = min(mn,sum-2*v[z]);

	return mn;
}

int main(){
	int set[] = { 1,2,7 };
	int n = sizeof(set) / sizeof(set[0]);   
    int x = subsetsum(set,n);	
    cout<<x<<endl;

	return 0;
}