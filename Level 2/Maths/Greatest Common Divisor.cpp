int Solution::gcd(int A, int B) {
    int m;
    if(A<B)
    m=A;
    else
    m=B;
    
    if(A==0||B==0)
    return A+B;
    if(A==B)
    return A;
    
    int max=1;
    for(int i=2;i<m;i++)
    {
        if(A%i==0 && B%i==0)
        {if(i>max)
            max=i;
        }
    }
    return max;
    
   
}