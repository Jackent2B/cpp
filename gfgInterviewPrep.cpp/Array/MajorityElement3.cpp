#include <bits/stdc++.h>
using namespace std;

int MajorityElementCandidate(int arr[], int n){

    int first = INT_MAX;
    int count1 = 1;

    int second = INT_MAX;
    int count2 = 1;

    for (int i = 1; i < n; i++)
    {
        if(first == arr[i])
            count1++;
        else if(first == arr[i])
            count2++;

        else if(count1==0){
            first = arr[i];
            count1++;
        }
        else if(count2==0){
            second = arr[i];
            count2++;
        }
        else{
            count1--;
            count2--;
        }
    }
    
    count1 = 0; 
    count2 = 0; 
  
    // Again traverse the array and find the 
    // actual counts. 
    for (int i = 0; i < n; i++) { 
        if (arr[i] == first) 
            count1++; 
  
        else if (arr[i] == second) 
            count2++; 
    } 
  
    if (count1 > n / 3) 
        return first; 
  
    if (count2 > n / 3) 
        return second; 
  
    return -1;
}


int main(){
	int t;
	cin>>t;
	while(t--){
		int n;
		cin>>n;
		int arr[n];
		for (int i = 0; i < n; ++i)
			cin>>arr[i];
    	int x = MajorityElementCandidate(arr,n);

        //checking if the candidate for majority element is actually in majority
        //or not
        int countMjority = 0;
        for (int i = 0; i < count; ++i)
        {
            if(arr[i] == x)
                countMjority++;
        }

        if(countMjority >n/2)
            return x;
        else
            return 0;

	}
	return 0;
}