#include <bits/stdc++.h>
using namespace std;

bool subsetsum(int set[],int sum,int n){
	if(sum==0) return true;
	else if(sum!=0 && n==0) return false;
	else if(set[n-1]>sum)
		return subsetsum(set,sum,n-1);
	else 
		return subsetsum(set,sum,n-1)||subsetsum(set,sum-set[n-1],n-1);
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