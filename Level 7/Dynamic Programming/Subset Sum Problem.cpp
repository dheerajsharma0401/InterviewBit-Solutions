#include<bits/stdc++.h>

int Solution::solve(vector<int> &A, int B) {
  
    
  int mem[A.size()+1][B+1];
  
 for(int i=0;i<=A.size();i++)
 {
     mem[i][0]=1;
 }
  for(int i=1;i<=B;i++)
  {
      mem[0][i]=0;
  }
    
    for(int i=1;i<=A.size();i++)
    {
        for(int j=1;j<=B;j++)
        {
            if(A[i-1]<=j)
            {
                mem[i][j]=max(mem[i-1][j],mem[i-1][j-A[i-1]]);
            }
            else
            mem[i][j]=mem[i-1][j];
        }
    }
    
    return mem[A.size()][B];
    
}

