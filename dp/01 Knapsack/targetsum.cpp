#include <bits/stdc++.h>
#include <vector>
using namespace std;

int getCount(int set[],int n,int num){
	
	int arr[n+1][num+1];
	for (int i = 0; i < n+1; i++)
	{
		for (int j = 0; j < num+1; j++)
		{
			if (j==0) 
				arr[i][j]=1;
			else if( j!=0 && i==0 ) arr[i][j] = 0;
			else if(set[i-1]>num)
				arr[i][j] = arr[i-1][j];
			else
				arr[i][j] = arr[i-1][j-set[i-1]] + arr[i-1][j];
		}
	}
 	return arr[n][num];	
}


int targetSum(int arr[],int n,int s){
	
	int sum = 0;
	for (int i = 0; i < n; i++)
			sum = sum+arr[i];

	int num = (s + sum)/2;
	int val1 = getCount(arr,n,num);

 return val1;	
}

int main(){
	int arr[] = {1, 1, 1, 1, 1};
	int s = 3;
	int n = sizeof(arr)/sizeof(arr[0]);
	int x = targetSum(arr,n,s);
	cout << x << endl;
	return 0;
}