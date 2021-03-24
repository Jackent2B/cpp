#include <bits/stdc++.h>
using namespace std;

int getLongestSubstr(string s){
	
	int maxLength = INT_MIN;
	unordered_map<char,int> m;
	int winidowStart = 0;
	int winidowEnd = 0;

	for (int winidowEnd = 0; winidowEnd < s.length(); winidowEnd++)
	{
		m[s[winidowEnd]]++;
		while(m[s[winidowEnd]]>1){
			if(m[s[winidowEnd]]==1)
				m.erase(s[winidowStart]);
			else
				m[s[winidowStart]]--;
			
			winidowStart++;
		}
		maxLength = max(maxLength,winidowEnd-winidowStart+1);
	}
	return maxLength;
	
}

int main(){
    int t;
    cin>>t;
	while(t--){
	    string s;
	    cin>>s;
	    int ans = getLongestSubstr(s);
	    cout<<ans <<endl;
	}
	return 0;
}