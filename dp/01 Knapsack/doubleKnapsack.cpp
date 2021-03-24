#include <bits/stdc++.h>
#include <vector>
using namespace std;

int subsetsum(int set[],int n, int sum){
	vector<int> v;
 
	int arr[n+1][sum+1];

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
	
	for (int a = 0; a < sum; a++)
	{
			if (arr[n][a]==true)
				v.push_back(a);
	}

	int max=0;
	for (int z = 0; z < v.size(); z++)
		max = max(mn,v[z]);

	return max;
}

int main(){
	int set[] = {8, 3, 2};
	int sum = 11;
	int n = sizeof(set) / sizeof(set[0]);   
    int x = subsetsum(set,n,sum);	
    cout<<x<<endl;

	return 0;
}