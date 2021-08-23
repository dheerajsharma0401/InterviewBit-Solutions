int Solution::threeSumClosest(vector<int> &A, int B) {
    int minimum=INT_MAX;
    int minsum;
    sort(A.begin(),A.end());
    for(int i=0;i<A.size()-1;i++)
    {
        int start=i+1;
        int end=A.size()-1;
        
        while(start<end)
        {
            int sum=A[i]+A[start]+A[end];
            int diff=abs(sum-B);
            
           if(diff==0)
           {
               return B;
           }
           else
           if(diff<minimum)
           {
               minimum=diff;
               minsum=sum;
               
           }
           if(sum<B)
           start++;
           else
           end--;
           
            }
            
        }
    
    return minsum;
}
