// Util function to find minimum sum for a path 
int minSumPath(vector<vector<int> >& A) 
{ 

    int ans[A.size()]; //to store results
    int n = A.size() - 1; 
  
    // For the bottom row 
    for (int i = 0; i < A[n].size(); i++)  
        ans[i] = A[n][i];     
  
    // Calculation of the remaining rows, 
    // in bottom up manner. 
    for (int i = A.size() - 2; i >= 0; i--)  
        for (int j = 0; j < A[i].size(); j++)  
            ans[j] = A[i][j] + min(ans[j], 
                                    ans[j + 1]); 
  
    // return the top element 
    return ans[0]; 
} 
  
int main() 
{ 
    vector<vector<int> > A{ { 2 }, 
                            { 3, 9 }, 
                            { 1, 6, 7 } }; 
    cout << minSumPath(A); 
    return 0; 
} 