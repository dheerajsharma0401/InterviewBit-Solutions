int dp[1002][10002];

int helper(vector<vector<int>> &A, int n, int curr)
{
    if(n==A.size())
    return 0;
    
    if(dp[n][curr]!=-1)
    return dp[n][curr];
    
    if(curr<A[n][0])
    {
        return dp[n][curr]=max(1+helper(A,n+1,A[n][1]),helper(A,n+1,curr));
    }
    else
    return dp[n][curr]=helper(A,n+1,curr);
}

int Solution::solve(vector<vector<int> > &A) {
     memset(dp, -1, sizeof(dp));
     return helper(A,0,0);
}
