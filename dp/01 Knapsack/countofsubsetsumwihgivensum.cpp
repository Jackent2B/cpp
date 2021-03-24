#include <bits/stdc++.h>
using namespace std;

int subsetsum(int set[],int sum,int n){
	if(sum==0) return 1;
	else if(sum!=0 && n==0) return 0;
	else if(set[n-1]>sum)
		return subsetsum(set,sum,n-1);
	else 
		return subsetsum(set,sum,n-1)+subsetsum(set,sum-set[n-1],n-1);
}

int main(){
	int set[] = { 3, 34, 4, 12, 5, 2 };
	int sum = 9; 
    int n = sizeof(set) / sizeof(set[0]);
    int x = subsetsum(set,sum,n);
    else cout<<x<<endl;
	return 0;
}