string Solution::longestPalindrome(string A) {
    
    int max=0;
    int storei=0;
    int storej=0;
    int len=A.length();
    string s;
    if(A.length()<=1)
        return A;
        
        for(int i=0;i<A.length();i++)
        {
            int l=i;
            int r=i+1;
            int count=0;
           while(A[r]==A[l] && l>=0 && r<A.length())
            {
                
                count=r-l+1;
                if(count>max)
            {
                storei=l+1;
                storej=r-1;
                s=A.substr(l,count);
                max=count;
            }
                
                l--;
                r++;
            }
         
        }
    
  
        for(int i=0;i<A.length();i++)
        {
            int l=i;
            int r=i;
            int count=0;
            while(A[r]==A[l] && l>=0 && r<A.length())
            {
                
                count=r-l+1;
                if(count>max)
            {
                storei=l+1;
                storej=r-1;
                s=A.substr(l,count);
                max=count;
            }
                
                l--;
                r++;
            }
         
        }
    
   // cout<<storei<<" "<<storej;
        
       return s;
        
        
}

