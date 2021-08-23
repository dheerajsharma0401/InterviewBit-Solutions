int Solution::solve(vector<int> &A) {
    int sum=0;
    
    for(int i=0;i<A.size();i++)
    sum+=A[i];
    
    int mem[A.size()+1][sum+1];
    
    for(int i=0;i<A.size()+1;i++)
    mem[i][0]=1;
    
    for(int i=1;i<sum+1;i++)
    {
        mem[0][i]=0;
    }
    
    
    for(int i=1;i<=A.size();i++)
    {
        for(int j=1;j<=sum;j++)
        {
            if(A[i-1]<=j)
            {
                mem[i][j]=mem[i-1][j]+mem[i-1][j-A[i-1]];
            }
            else
            mem[i][j]=mem[i-1][j];
        }
    }
    
   // cout<<mem[3][11]<<endl;
    
    int max1=INT_MIN;
    for(int i=0;i<=sum/2;i++)
    {
        if(mem[A.size()][i])
        max1=max(max1,i);
    }
    
    return sum-2*max1;
    
    
    
}
