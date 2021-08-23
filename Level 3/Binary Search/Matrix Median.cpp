int Solution::findMedian(vector<vector<int> > &A) {
    
    
    for(int i=1;i<A.size();i++)
    {
        for(int j=0;j<A[i].size();j++)
        {
            A[0].push_back(A[i][j]);
        }
    }
    
    sort(A[0].begin(),A[0].end());
    int len=A[0].size();
   
    
    return A[0][(len/2)];
}


