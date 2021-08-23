int Solution::firstMissingPositive(vector<int> &A) {
    
    
    
    sort(A.begin(),A.end());
    int num=1;
    int len=A.size();
    if(A[len-1]<0)
    num=1;
    else if(len==1)
    {
        if(A[len-1]<0)
        num=1;
        else
        num=A[len-1]+1;
    }
    else
    {
    int j,k;
    int sum=0,ideal=0;
    j=0;
        while(A[j]<=0)
        j++;
        int i,temp=1;
        
        for(i=j;i<len;i++)
        {
            if(A[i]!=temp)
            num=temp;
            else
            temp=temp+1;
        }
        num=temp;
        
     }
    
    
    return num;
    
}
