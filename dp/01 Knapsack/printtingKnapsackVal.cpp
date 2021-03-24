#include <bits/stdc++.h>
using namespace std;

//knapsack function
int knapsack(int val[],int wt[],int W,int n){
	
	int arr[n+1][W+1];
	for (int i = 0; i < n+1; i++){
		for (int j = 0; j < W+1; j++){
			if (i==0||j==0)
				arr[i][j]=0;
			else if(wt[i-1]>j)
				arr[i][j]=arr[i-1][j];
			else 	
				arr[i][j]=max(val[i-1]+arr[i-1][j-wt[i-1]],arr[i-1][j]);	  	
		}
	}
	//return arr[n][W];


}

int main(){
	int val[] = { 60, 100, 120 }; 
    int wt[] = { 10, 20, 30 };
    int W = 50; //maximum weight of knapsack
    int n = sizeof(val) / sizeof(val[0]);
   	int value = knapsack(val,wt,W,n);
    cout<<value<<endl; 
	return 0;
}