#include <bits/stdc++.h>
using namespace std;

bool subsetsum(int set[],int sum,int n){
	int arr[n+1][sum+1];
	for (int i = 0; i < n+1; i++){
		for (int j = 0; j < sum+1; j++)
		{
			if(j==0) return true;
			else if(j!=0&&i==0) false;
			else if(set[i-1]>j)
				arr[i][j]=arr[i-1][j];
			else 
				arr[i][j]=arr[i-1][j-set[i-1]] || arr[i-1][j];
		}
	}
	return arr[n][sum];
}

int main(){
	int set[] = { 3, 34, 4, 12, 5, 2 };
	int sum = 9; 
    int n = sizeof(set) / sizeof(set[0]);
    bool x = subsetsum(set,sum,n);
    if(x==true) cout<<"true"<<endl;
    else cout<<"false"<<endl;
	return 0;
}