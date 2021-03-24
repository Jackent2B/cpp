#include <bits/stdc++.h>
using namespace std;

int getValue(char c){
  switch(c) {
  case 'I':
    return 1;
    
  case 'V':
  	return 5;
  
  case 'X':
  	return 10;

  case 'L':
  	return 50;

  case 'C':
  	return 100;

  case 'D':
  	return 500;

  case 'M':
  	return 1000;

  default:
    return -1;
}
}

int getAns(string a){

	int res = 0;
	for(int i=0; i<a.length(); i++){
		int val1 = getValue(a[i]);
		
		if(i+1 < a.length()){
		  int val2 = getValue(a[i+1]);

		  if(val1 >= val2)
		  		res = res + val1;
		  else{
		  		res = res + val2 - val1;
		  		i++;
			}
		}
		else
			res = res+val1;

	}
	return res;
}

int main(){
	int t;
	cin>>t;
	while(t--){
		string a;
		cin>>a;

		cout<<getAns(a)<<endl;
		
	}
	return 0;
}