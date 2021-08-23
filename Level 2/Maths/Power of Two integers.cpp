int Solution::isPower(int A) {
    int i;
    int prod=1;
    
    if(A==0)
        return 0;
    
    if(A==1)
        return 1;
    
    for(i=1;i<=sqrt(A);i++)
    {
        if(pow(i,int((log(A)/log(i))))==A)
        return 1;
            
    }
      

    return 0;
}
