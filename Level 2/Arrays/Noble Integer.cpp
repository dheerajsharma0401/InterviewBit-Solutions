int Solution::solve(vector<int> &A) {
    
    sort(A.begin(),A.end());
  if(A[A.size()-1]==0) return 1;
    for(int i=0;i<A.size()-1;i++)
    {
       
        int index;
        int p=A[i];
        if(A[i]!=A[i+1])
        {
         index=A.size()-1-i;
        
        if(p==index)
        return 1;
        }
        
       
            
        }
      
    return -1;
}