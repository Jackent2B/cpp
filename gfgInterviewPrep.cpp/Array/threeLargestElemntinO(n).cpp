#include <bits/stdc++.h>
using namespace std;

void threeLargest(int arr[],int n){
    
 int  first = INT_MIN;
 int  second = INT_MIN;
 int  third = INT_MIN;

 for (int i = 0; i < n ; i ++) 
    { 
        /* If current element is greater than first*/
        if (arr[i] > first) 
        { 
            third = second; 
            second = first; 
            first = arr[i]; 
        } 
        /* If arr[i] is in between first and second then update second  */
        else if (arr[i] > second) 
        { 
            third = second; 
            second = arr[i]; 
        } 
        else if (arr[i] > third) 
            third = arr[i]; 
    }

    cout<<first<<" "<<second<<" "<<third; 
} 
   
   
/* Driver program to test above function */
int main() 
{ 
    int arr[] = {12, 13, 1, 10, 34, 1}; 
    int n = sizeof(arr)/sizeof(arr[0]); 
    threeLargest(arr, n); 
    return 0; 
} 

