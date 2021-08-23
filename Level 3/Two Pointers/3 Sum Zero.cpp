vector<vector<int> > Solution::threeSum(vector<int> &A) {
    vector<vector<int>> res;
    sort(A.begin(),A.end());
    int len=A.size();
    if(len<3)
    return res;
    
    
    for(int i=0;i<len-1;i++)
    {
        if(i!=0 && A[i]==A[i-1])
        continue;
        long int start=i+1;
        long int end=len-1;
        while(start<end)
        {
            long long int sum = (long long int)A[i] + (long long int)A[start] + (long long int)A[end];
            //long int sum=A[i]+A[start]+A[end];
           
            if(sum==0)
            {
                
                res.push_back({A[i],A[start],A[end]});
                start++;
                end--;
                while(start<end && A[start]==A[start-1])start++;
                while(start<end && A[end]==A[end+1]) end++;
                
            
                
            }
            else
            if(sum>0)
            end--;
            else
            start++;
            
        }
        
    }
    return res;
}
