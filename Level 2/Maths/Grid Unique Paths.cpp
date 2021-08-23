int sumpath(int i,int j,int A,int B)
{
    if(i==B-1)
        return 1;
    else if (j==A-1)
        return 1;
    else
        return (sumpath(i+1,j,A,B)+sumpath(i,j+1,A,B));
}
int Solution::uniquePaths(int A, int B) {
    return (sumpath(0,0,A,B)); 
}

