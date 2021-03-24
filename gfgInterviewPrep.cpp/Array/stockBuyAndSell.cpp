#include <bits/stdc++.h>
using namespace std;

void getDays(int arr[], int n){

	//array should contain atleast 2 days to perform buy and sell
	//otherwise return.
	if (n<2)
		return;

	int buyDay = -1;
	int sellDay = -1;
	for (int i = 0; i < n-1; i++)
	{

		//local minima
								 //note here we are incrementing 'i'.
		for (int j = i; j < n-1; i++)
		{
			if (j==n-1) break; //it means it reached the end.
			else if (arr[j]<arr[j+1])
				{ buyDay = j; break;}
			else 
				continue;
		}
		

		//local maxima
		for (int k = (i+1); k < n-1; i++)
		{
			if (arr[k]>arr[k+1])
				{ sellDay = k; break;}
			else
				continue;
		}
		cout << "( " << buyDay << " " << sellDay<<")" << endl;
	}
}




int main(){
	int arr[] = { 100, 180, 260, 310, 40, 535, 695 }; 
    int n = sizeof(arr) / sizeof(arr[0]); 
    	getDays(arr, n);
	return 0;
}