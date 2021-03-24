int Solution::solve(vector<vector<int> > &A, int B) {
    
    int n = A.size();
    int m = A[0].size();
    
    int i = 0;
    int j = m-1;
    
    while(i<=n-1 && j >= 0){
        if(B < A[0][0] || B > A[n-1][m-1])
            return -1;
        else if(B == A[i][j])
            return (i+1)*1009+(j+1);
        else if (B < A[i][j])
            j--;
        else if (B > A[i][j])
            i++;
    }
    
}