int Solution::solve(string A) {
    
    int j=A.length()-1;
    int count=0;
    int i=0;
    while(i<=j)
    {
        if(A[i]==A[j])
        {
            i++;
            j--;
        }
        else{
        count++;
        
        i++;
        }
        
        
    }
   // cout<<count;
    if(count>1)
    return 0;
    else
    return 1;
}


