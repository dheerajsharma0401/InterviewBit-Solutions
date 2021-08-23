
int helper(vector<int> &A, vector<int> &B, int C,int n)
{
    int mem[n+1][C+1];
    for(int i=0;i<n+1;i++)
    {
        mem[i][0]=0;
    }
      for(int i=0;i<C+1;i++)
    {
        mem[0][i]=0;
    }
    
    
  /* 
    for(int i=1;i<n+1;i++)
{
    for(int j=1;j<C+1;j++)
    {
        if(B[i-1]<=j)
        {
            mem[i][j]=max((A[i-1]+mem[i-1][j-B[i-1]]),mem[i-1][j]);
        }
        else
        {
            mem[i][j]=mem[i-1][j];
        }
    }
}
return mem[n][C];

  */
       for(int i=1;i<n+1;i++)
       {
            for(int j=1;j<C+1;j++)
   {
           if(B[i-1]<=j){
          // mem[i][j]=max((A[i-1]+mem[i-1][j-B[i-i]]),mem[i-1][j]);
           mem[i][j]=max((A[i-1]+mem[i-1][j-B[i-1]]),mem[i-1][j]);
           }
           else
           {
           mem[i][j]=mem[i-1][j];
           }
           
          
       }
   }

return mem[n][C];
}
int Solution::solve(vector<int> &A, vector<int> &B, int C) {
    
    ///memset(mem,0,sizeof(mem));
    return helper(A,B,C,A.size());
    
}

