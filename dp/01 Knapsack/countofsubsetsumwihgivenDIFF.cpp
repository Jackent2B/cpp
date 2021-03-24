#include <bits/stdc++.h>
#include <vector>
using namespace std;

int countOfsubsetsumWithGivenDiff(int set[],int n, int diff){
	vector<int> v;

	int sum=0;
	for (int x=0;x<n;x++)
	    sum = sum+set[x]; 

	int s1 = (sum+diff)/2; //see notes for this

	int arr[n+1][s1+1];

	for (int i = 0; i < n+1; i++){
		for (int j = 0; j < s1+1; j++)
		{
			if(j==0)  arr[i][j]=true;
			else if(j!=0&&i==0) arr[i][j]=false;
			else if(set[i-1]>j)
				arr[i][j]=arr[i-1][j];
			else 
				arr[i][j]=arr[i-1][j-set[i-1]] + arr[i-1][j];
		}
	}
	
	return arr[n][s1];

}

int main(){
	int set[] = {1,1,2,3};
	int diff=1;
	int n = sizeof(set) / sizeof(set[0]);   
    int x = countOfsubsetsumWithGivenDiff(set,n,diff);	
    cout<<x<<endl;

	return 0;
}