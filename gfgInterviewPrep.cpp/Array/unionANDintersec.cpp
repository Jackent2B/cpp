//union and intersection in sorted arrays

#include <bits/stdc++.h>
using namespace std;

bool binarySearch(int arr[],int n, int x){
	int start = 0;
	int end = n-1;
	while(start<=end){
		int mid = (start+end)/2;
		if (x==arr[mid])
			return true;
		else if(x<arr[mid])
			end = mid-1;
		else if(x>arr[mid])
			start = mid+1;
	}

}

void unionAndIntersc(int arr1[], int arr2[] , int n, int m){
	int interscetion=0;
	bool ans;
	for (int i = 0; i < m; i++)
	{
		ans=binarySearch(arr1,n,arr2[i]);
		if (ans==true)
			interscetion++;
	}
	int un = n+m-interscetion;
	cout<<"Intersection "<<interscetion<< " Union" << un<<endl;

}

int main(){
	int arr1[] = {85, 54, 34, 25, 6, 1};
	int arr2[] = {85,2};
	int n = sizeof(arr1)/sizeof(arr1[0]);
	int m = sizeof(arr2)/sizeof(arr2[0]); 
	unionAndIntersc(arr1,arr2,n,m);
	return 0;
}