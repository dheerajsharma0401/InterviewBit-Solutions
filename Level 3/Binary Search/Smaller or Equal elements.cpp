int Solution::solve(vector<int> &A, int B) {
    
    int low=0;
    int count=0;
    int high=A.size()-1;
    while(low<=high)
    {
        int mid=low+(high-low)/2;
        
        if(A[mid]==B)
        {
            count++;
            low=mid+1;
            
        }
        else
        if(A[mid]>B)
        {
            high=mid-1;
        }
        else
        if(A[mid]<B)
        {
           
            low=mid+1;
        }
    }
    
    return high+1;
    
    return 0;
}

