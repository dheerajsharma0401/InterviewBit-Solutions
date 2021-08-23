int Solution::candy(vector<int> &A) {
    int N=A.size();
    vector<int> left(N,1);
    for(int i=1;i<A.size();i++)
    {
            if(A[i]>A[i-1])
            left[i]=left[i-1]+1;
    }
    
       vector<int> right(N,1);
    for(int i=N-2;i>=0;i--)
    {
            if(A[i]>A[i+1])
            right[i]=right[i+1]+1;
    }
    int cand=0;
       for(int i=0;i<N;i++)
       cand=cand+max(left[i],right[i]);
       
    
    
    return cand;
}
