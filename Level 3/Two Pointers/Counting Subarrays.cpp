int Solution::solve(vector<int> &A, int B) {
    
    int sum;
    int count=0;
    for(int i=0;i<A.size();i++)
    {
        sum=0;
    for(int j=i;j<A.size();j++)
    {
        sum=sum+A[j];
        if(sum<B)
        count++;
        else
        break;
    }
    }
    
    return count;
   
}