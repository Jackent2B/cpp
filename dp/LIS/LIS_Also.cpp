// int LIS_solve(int prev, int curr,const vector<int> &A){
    
//         if(curr == A.size()) return 0;
        
//         int op1 = 0;
//         if(prev == -1 || A[prev] < A[curr]){
//             op1 =  1 + LIS_solve(curr, curr+1,A);
//         }        
//         int op2 = LIS_solve(prev, curr+1,A);
       
//         return max(op1, op2);
    
// }

// int Solution::lis(const vector<int> &A) {
//     return LIS_solve(-1,0,A);
// }

int Solution::lis(const vector<int> &V) {
        if (V.size() == 0) return 0;
        int longest[V.size() + 1];
        int maxLen = 1;
        memset(longest, 0, sizeof(longest));
            // longest[i] denotes the maximum length of increasing subsequence that ends 
            // with V[i].
        longest[0] = 1;
        for (int i = 1; i < V.size(); i++) {
            longest[i] = 1;
                // V[i] can only come after any V[j] such that V[j] < V[i].
                // We try appending V[i] after every such subsequence and update our 
                // longest[i]. 
                for (int j = 0; j < i; j++) {
                    if (V[j] < V[i]) longest[i] = max(longest[i], longest[j] + 1);
                }
                maxLen = max(maxLen, longest[i]);
            }
            return maxLen;
}