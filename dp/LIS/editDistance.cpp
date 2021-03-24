int t[1001][1001];
int min(int x, int y, int z) 
{ 
    return min(min(x, y), z); 
}

int editDistance(string x, string y, int n, int m){
    if(n==0)
        return m;

    if(m==0)
        return n;

    if(t[n][m] != -1)
        return t[n][m]; 

    else if(x[n-1]==y[m-1])
        return t[n][m]= editDistance(x,y,n-1,m-1);
    else
        return t[n][m]= 1+min(editDistance(x,y,n-1,m),
            editDistance(x,y,n,m-1),
            editDistance(x,y,n-1,m-1));
}

int Solution::minDistance(string A, string B) {
    memset(t,-1,sizeof(t));
    int n = A.length();
    int m = B.length();
    return editDistance(A,B,n,m);
}