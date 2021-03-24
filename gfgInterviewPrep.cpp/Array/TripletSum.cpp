#include <bits/stdc++.h>
using namespace std;

bool tripletExist (int arr[], int n, int k){
		
		int l,r;
		//sort the array first
		sort(arr,arr+n);

		for (int i = 0; i < n-2; i++)
		{
			l=i+1;
			r=n-1;
			while(l<r){
				if (arr[i]+arr[l]+arr[r] == k){
					cout<<"Triplet is "<<arr[i]<<" "<<arr[l]<<" "<<arr[r]<<endl;
					return true;
				}
				else if(arr[i]+arr[l]+arr[r]<k)
					l++;
				else if(arr[i]+arr[l]+arr[r]>k)
					r--;
			}
		}
		return false;
}

int main(){
	int arr[] = { 1, 4, 45, 6, 10, 8};
	int n = sizeof(arr)/sizeof(arr[0]);
	int k = 22;
	if(tripletExist(arr,n,k))
		cout<<1<<endl;
	else
		cout<<0<<endl;
	return 0;
}