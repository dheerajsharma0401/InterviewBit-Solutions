int Solution::search(const vector<int> &A, int B) {
    
  int index;
    int start=0;
    int end=A.size()-1;
    
    while(start<=end)
    {
        int mid=(start+end)/2;
        if(A[mid]==B)
        return mid;
        
        if(A[0]<=A[mid])
        { if(A[0]<=B && A[mid]>B)
            end=mid-1;
            else
            start=mid+1;
            
        }
       else
       {
           if(A[mid]<B && A[A.size()-1]>B)
           start=mid+1;
            else
           end=mid-1;
            
       }
    }
    return -1;
    
}

