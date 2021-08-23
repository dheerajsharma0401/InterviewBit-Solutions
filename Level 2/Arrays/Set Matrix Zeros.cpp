void Solution::setZeroes(vector<vector<int> > &A) {
    int rowonez=0;
    int colonez=0;
    int  n11=A.size();
    int  n12=A[0].size();
    for(int i=0;i<n12;i++)
    {
        if(A[0][i]==0){
        rowonez=1;
        break;
        }
        
    }
    for(int i=0;i<n11;i++)
    {
        if(A[i][0]==0){
        colonez=1;
        break;
        }
        
    }
    
    for(int i=1;i<n11;i++)
    {
        for(int j=1;j<n12;j++)
        {
            if(A[i][j]==0)
            {
                A[i][0]=0;
                A[0][j]=0;
            }
        }
    }
    
    for(int i=1;i<n11;i++)
    {
        for(int j=1;j<n12;j++)
        {
            if(A[i][0]==0||A[0][j]==0)
            {
                A[i][j]=0;
               
            }
        }
    }
    
    if(rowonez==1)
    {
        for(int i=0;i<n12;i++)
        {
            A[0][i]=0;
        }
    }
        if(colonez==1)
    {
        for(int i=0;i<n11;i++)
        {
            A[i][0]=0;
        }
    }
    
    }
