
int maxSubArray(const int* A, int n1) {
    
    int sum=0;
    int max=-2147483648;
    int i;
    if(n1==1)
    return A[0];
    else
    {
    for(i=0;i<n1;i++)
    {
        
       
            //max=A[i];
            sum=sum+A[i];
            
            if(max<sum)
            max=sum;
            
            if(sum<0)
            sum=0;
        
    }
    
    return max;}
}
