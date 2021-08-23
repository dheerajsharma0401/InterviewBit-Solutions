int mem[101][101];
int helper(vector<vector<int>> &A ,int x,int y,int m,int n)
{
    
    if(A[x][y]==1)
        return 0;
    if(mem[x][y]!=-1)
        return mem[x][y];
    if(x==m && y==n)
        return 1;
    else
    if(x<m && y<n)
        return mem[x][y]=helper(A,x+1,y,m,n)+helper(A,x,y+1,m,n);
    else
    if(x==m && y<n)
        return mem[x][y]=helper(A,x,y+1,m,n);
    else
    if(x<m && y==m)
    {
        return mem[x][y]=helper(A,x+1,y,m,n);
    }

}

int Solution::uniquePathsWithObstacles(vector<vector<int> > &A) {

memset(mem,-1,sizeof(mem));
int m=A.size();
int n=A[0].size();
return helper(A,0,0,m-1,n-1);

}
