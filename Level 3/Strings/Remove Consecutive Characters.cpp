string Solution::solve(string A, int B) {
   string ans;
    for(int i=0;i<A.length();i++)
    {
        int flag=0;
       for(int j=i+1;j<i+B;j++)
       {
           if(A[i]!=A[j]){
               ans=ans+A[i];
               flag=1;
           
          
           }
          if(flag==1)
          break;
           
       }
       if(flag==0)
       i=i+B-1;
    }
    return ans;
       
    
    
}
