int Solution::numDistinct(string A, string B) {

int m = A.length();
int n = B.length();

int dp[m + 1][n + 1];
dp[0][0] = 1;

//no. of ways to make B from empty A
for(int i=1;i<=n;i++)
    dp[0][i] = 0;
    
//no. of ways to make empty B from A
for(int i=1;i<=m;i++)
    dp[i][0] = 1;

for(int i=1;i<=m;i++)
{
    for(int j=1;j<=n;j++)
    {
        //cant make of longer length array from shorter one
        if(j > i)
            dp[i][j] = 0;
        else
        {
            //ways to make till B[1..j-1] using A[1..i-1] + ways to make till B[1..j] using A[1..i-1]
            if(A[i-1] == B[j-1])
                dp[i][j] = dp[i-1][j-1] + dp[i-1][j];
            else
                //ways to make B[1..j] using A[1..i-1]
                dp[i][j] = dp[i-1][j];
        }
        
    }
}
return dp[m][n];

}