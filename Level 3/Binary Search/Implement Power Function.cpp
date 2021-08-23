int Solution::pow(int x, int n, int d) {
    long long int ans = 1;
    if(x==0)
        return 0;
    long long nn=n;
    if(n<0)
    nn=nn*(-1);
    
    while(nn!=0)
    {
        if(nn%2)
        {
            nn=nn-1;
            ans=ans*x;
        }
        else
        {
            x=x*x;
            nn=nn/2;
        }
    }
    
    if(ans<0)
        return d+ans;
    
    return ans;
    
    
}

