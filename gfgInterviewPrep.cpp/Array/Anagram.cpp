#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin >> t;
	while(t--){
		string a,b;
		cin >> a>> b;
		int count1[26]={0};
		int count2[26]={0};
		
		//increasing the count of each letter by iterartingg over an first string
		for (int i = 0; i < a.length(); i++)
			count1[a[i]-97]++;
			
        //increasing the count of each letter by iterartingg over an second string
		for (int j = 0; j < b.length(); j++)
			count2[b[j]-97]++;
			
	    bool flag = true;
	    for (int cmp = 0; cmp < 26; cmp++)
	    	{
	    		if(count1[cmp]!=count2[cmp]){
	    			flag=false;
	    			break;
	    		}
	    	}
	    if(flag) cout<<"YES"<<endl;
	    else cout<<"NO"<<endl;		
	}
	return 0;
}