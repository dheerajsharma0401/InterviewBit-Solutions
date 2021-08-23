int Solution::solve(string A, string B) {
    int n=A.length();
    int m=B.length();
    int mem[n+1][m+1];
    for(int i=0;i<=n;i++)
    {
        mem[i][0]=0;
    }
    for(int j=0;j<=m;j++)
    {
        mem[0][j]=0;
    }
    
    for(int i=1;i<n+1;i++)
    {
        for(int j=1;j<m+1;j++)
        {
            if(A[i-1]==B[j-1])
            {
                mem[i][j]=mem[i-1][j-1]+1;
            }
            else
            {
                mem[i][j]=max(mem[i-1][j],mem[i][j-1]);
            }
        }
    }
    return mem[n][m];
}
