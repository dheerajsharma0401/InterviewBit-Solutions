int Solution::searchMatrix(vector<vector<int> > &A, int B) {
    if(A[0][0]>B)
        return 0;
    int len=A.size()-1;
    int l=A[len].size()-1;
    if (A[len][l]<B)
        return 0;
    if(A[0][0]==B)
        return 1;
    if(A[len][l]==B)
        return 1;
    
    for(int i=0;i<A.size();i++)
    {
        int len2=A[i].size()-1;
        
      if(A[i][0]==B)
        return 1;
    
        if(A[i][0]<=B && A[i][len2]>=B)
        {
          
            for(int j=0;j<A[i].size();j++)
            {
                if(A[i][j]==B)
                    return 1;
                
            }
        }
      
    }
    return 0;
    
}



