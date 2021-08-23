int Solution::solve(string A) {
    
    int i=0,j=A.length()-1;
    int count=0;
    int same=0;
    while(i<j)
    {
        if(A[i]!=A[j])
        {
            if(i==0)
            { j--;
            count++;
            }
            else
            {
                count+=i;
                i=0;
            }
           
        }
     
        else
        {
             i++;
            j--;
        }
    }
    
   
    return count;
}
