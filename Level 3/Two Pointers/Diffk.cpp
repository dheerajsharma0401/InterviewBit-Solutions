int Solution::diffPossible(vector<int> &A, int B) {
    
    int start=0;
    int end=0;
    int n=A.size();
    while(start<n && end<n)
    {
        
        
        if(start!=end && A[end]-A[start]==B)
        return 1;
        else
        if(A[end]-A[start]<B)
        end++;
        else
        start++;
       }
        
    
    return 0;
    
}

