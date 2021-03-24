using namespace std;
#include <bits/stdc++.h>

int main() {
	//code
	int T;
	cin >> T;
	while(T--)
	{
	    int n;
	    cin >> n;
	    vector<int>a(n+1);
	    for(int i = 0; i < n; i++)
	    cin >> a[i];
	    a[n] = 0;
	    int mn = 0;
	    int mx = 0;
	    int flag = 0;
	    for(int i = 1; i <= n; i++)
	    {
	        
	        
	        if(a[i] < a[i-1] && (i-1) != mn && a[i-1]-a[mn] > 0)
	        {
	            cout << "("+to_string(mn)+" "+ to_string((i-1)) + ") ";
	            mn = i;
	            flag = 1;
	        }
	        
	        
	        if(a[mn] > a[i])
	        mn = i;
	    }
	    if(flag == 0)
	    cout << "No Profit\n";
	    else
	    cout <<"\n";
	}
	return 0;
}