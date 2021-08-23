int Solution::jump(vector<int> &A) {
    int jumps=0;
    int currend=0;
    int currmax=0;
    int n=A.size();
    
    for(int i=0;i<n-1;i++)
    {
        currmax=max(currmax,i+A[i]);
        
        if(i==currend)
        {
            jumps+=1;
            currend=currmax;
        }
        
        if(currend>=n-1)
        break;
    }
    
    if(currend<n-1)
    return -1;
    
    return jumps;
}