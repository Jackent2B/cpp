#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--){
	    int n;
	    cin>>n;
	    int arr[n];
	    for (int i = 0; i < n; ++i)
		    cin>>arr[i];
	    
	    //running loop till n/2
	    for (int a = 0; a < n/2; a++)
	    {		
	    	//printing numbers simultaneously
	   	    	cout<<arr[n-1-a]<<" ";
    	    	cout<<arr[a]<<" ";
	    }
	    	//if n is odd then we have to print it seprately.
	    if(n%2!=0) cout<<arr[n/2]<<endl;
	    else cout<<endl;
	}
	return 0;
}