#include <bits/stdc++.h>
#include <vector>
using namespace std;

int gettingMaximumProfit(vector<int> value,vector<int> weight,int A, int n){
	int arr[n+1][A+1];
	for (int i = 0; i < n+1; i++)
	{
		for (int j = 0; j < A+1; j++)
		{
			if (i==0 || j==0 ) arr[i][j]=0;
			else if(weight[i-1]>A)
				arr[i][j] = arr[i-1][j];
			else
				arr[i][j] = max(value[i-1]+arr[i-1][j-weight[i-1]],arr[i-1][j]);			
		}
	}
	return arr[n][A];
}


int main(){
	vector <string> groups = {"mmo", "oo", "cmw", "cc", "c"};
	int A = 5;
	int n = groups.size();

	vector<int> value;
	vector<int> weight;
		
			string str;
		//getting value and weight array;
			for (int i = 0; i < n; i++)
			{ 
				str = groups[i];
		        // To store the happiness 
		        // of the current group 
		        int c = 0; 
		        for (int j = 0; str[j]; j++) { 
		  
		            // Current person is a child 
		            if (str[j] == 'c') 
		                c += 4; 
		  
		            // Woman 
		            else if (str[j] == 'w') 
		                c += 3; 
		  
		            // Man 
		            else if (str[j] == 'm') 
		                c += 2; 
		  
		            // Old person 
		            else
		                c++; 
		        }
		        value.push_back(c);
		        weight.push_back(str.length());
			}

		int x = gettingMaximumProfit(value,weight,A,n);
		cout<<x<<endl;
	return 0;
}