#include <bits/stdc++.h>
using namespace std;

//knapsack function
int knapsack(int val[],int wt[],int W,int n){
	if(n==0||W==0)   //if number of elememts are zero or maximum
		return 0;    //weight of knapsack is zero then return 0;
	else if (wt[n-1]<=W)
			return max(val[n-1]+knapsack(val,wt,W-wt[n-1],n-1),
				       knapsack(val,wt,W,n-1));
	else 
		return knapsack(val,wt,W,n-1);
}

int main(){
	int val[] = { 60, 100, 120 }; 
    int wt[] = { 10, 20, 30 };
    int W = 50; //maximum weight of knapsack
    int n = sizeof(val) / sizeof(val[0]); //maximum size of array
    int value = knapsack(val,wt,W,n);
    cout<<value<<endl;
	return 0;
}
