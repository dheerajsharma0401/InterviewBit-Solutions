int mem[37];

int helper(int A)
{
     if(A==0)
    return 1;
    if(A<0)
    return 0;
    if(mem[A]!=-1)
    return mem[A];
    
    return mem[A]=helper(A-1)+helper(A-2);
    
}
int Solution::climbStairs(int A) {
    
   memset(mem,-1,sizeof(mem));
   return helper(A);
}
