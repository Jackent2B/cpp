#include <bits/stdc++.h>
using namespace std;

bool checkingpartition(int arr[],int n,int sum){
	if(sum==0)
		return true;
	else if(sum!=0 && n==0)
		return false;
	else if(arr[n-1]>sum)
		return checkingpartition(arr,n-1,sum);
	else
		return checkingpartition(arr,n-1,sum)||checkingpartition(arr,n-1,sum-arr[n-1]);
}


bool partitionprob(int arr[], int n){
	int sum=0;
	for (int i = 0; i < n; i++)
		sum = sum+arr[i];
	if (sum%2!=0)
		return false;
	else
		return checkingpartition(arr,n,sum/2);
}


int main(){
	int arr[] = {3, 1, 5, 9, 12};  
    int n = sizeof(arr)/sizeof(arr[0]);
    bool x = partitionprob(arr,n);
    if(x==true) cout<<"true"<<endl;
    else cout<<"false"<<endl;
	return 0; 
}