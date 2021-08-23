int Solution::bulbs(vector<int> &A) {
    int count=0;
    
    if(A.size()==1)
    {
        if(A[0]==1)
        return 0;
        else
        return 1;
        
    }
    
    for(int i=0;i<A.size();i++)
    {
        if(A[i]==count%2) count++;
        
            
    }
        
    
    return count;
    
}
