int LIS_solve(int prev, int curr,const vector<int> &A){
    
        if(curr == A.size()) return 0;
        
        int op1 = 0;
        if(prev == -1 || A[prev] < A[curr]){
            op1 =  1 + LIS_solve(curr, curr+1,A);
        }        
        int op2 = LIS_solve(prev, curr+1,A);
       
        return max(op1, op2);
    
}

int Solution::lis(const vector<int> &A) {
    return LIS_solve(-1,0,A);
}
