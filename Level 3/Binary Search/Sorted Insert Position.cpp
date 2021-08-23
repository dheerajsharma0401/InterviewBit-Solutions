int Solution::searchInsert(vector<int> &A, int B) {
    
    if(A[0]==B)
    return 0;
   
    int start=0;
    int end=A.size()-1;
    int mid=0;
    
    if(A[end]<B)
    return A.size();
    while(start<=end)
    {
        mid=(start)+(end-start)/2;
        if(A[mid]>B)
        end=mid-1;
        else
        if(A[mid]<B)
        start=mid+1;
        else
        return mid;
    }
    return start;
        
}

