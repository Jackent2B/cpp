int distinctSub(string A, string B, int n,int m) {

    if(n==0 && m==0)
        return 1;

    if(n==0)
        return 0;
    if(m==0)
        return 1;
    if(m > n)
           return 0;
    else
        {
            //ways to make till B[1..j-1] using A[1..i-1] + ways to make till B[1..j] using A[1..i-1]
            if(A[n-1] == B[m-1])
               return dp[n][m] = distinctSub(A,B,n-1,m-1) + distinctSub(A,B,n-1,m);
            else
                //ways to make B[1..j] using A[1..i-1]
                return dp[n][m] = distinctSub(A,B,n-1,m-1) + distinctSub(A,B,n-1,m);
         
        }    
}
