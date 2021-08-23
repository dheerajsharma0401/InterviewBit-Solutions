int Solution::adjacent(vector<vector<int> > &A) {
    
    for(int i=0;i<A[0].size();i++)
    {
        A[0][i]=max(A[0][i],A[1][i]);
        
        
    }
    
    vector<int> dp(A[0].size(),0);
    
    dp[0]=A[0][0];
    dp[1]=max(A[0][0],A[0][1]);
    
    for(int i=2;i<A[0].size();i++)
    {
        dp[i]=max(dp[i-2]+A[0][i],dp[i-1]);
    }
    
    return dp[A[0].size()-1];
}
