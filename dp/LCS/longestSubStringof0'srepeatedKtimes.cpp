#include <bits/stdc++.h>
using namespace std;

int longest_substring(string s, int k){

	int n = s.length();

	//if k>1 then we can get the answer by just doubling the string;
	//there is no need to repeat the string k times as we will obtain the same answer.
	if (k>1)
	{
		s=s+s;
		n=n+n;
	}
    cout<<s<<endl;
	int ans = 0;
	int result = 0;
	for (int i = 0; i < n; i++)
	{
		if(s[i]=='0'){	
			ans = ans +1;
			//getting max value of ans;
			result = max(ans,result);
		}else
			ans = 0;
	}

	return result;

}

// Driver code 
int main() 
{ 
    string s = "01001000"; 
    int k = 4; 
    cout << longest_substring(s, k); 
      
    return 0; 
}