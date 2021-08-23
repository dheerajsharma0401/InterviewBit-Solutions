long long dp[1001][1001];


long long mincost(int w, const vector<int> &wt, const vector<int> &cost,int index)
{
    if(w==0)
        return 0;
    if(index==wt.size())
        return 0;
    if(dp[index][w]!=-1)
        return dp[index][w];
    
    if(wt[index]<=w)
    {
        return dp[index][w]=min(mincost(w,wt,cost,index+1),cost[index]+mincost(w-wt[index],wt,cost,index));
    }
    else
        return dp[index][w]=mincost(w,wt,cost,index+1);
}
int Solution::solve(const vector<int> &A, const vector<int> &B, const vector<int> &C) {
    
    
    memset(dp,-1,sizeof(dp));
    int sum=0;
    for(int i=0;i<A.size();i++)
    {
        sum+=mincost(A[i],B,C,0);
    }
    
    
    
    return sum;
}
