int Solution::longestSubsequenceLength(const vector<int> &A) {

    if(A.size()==0)
    return 0;
    int n=A.size();
    int lis[n];
    int lds[n];
    for(int i=0;i<n;i++)
    {
        lis[i]=1;
        lds[i]=1;
    }

    for(int i=1;i<n;i++)
    {
        for(int j=0;j<i;j++)

        {
            if(A[i]>A[j])
                lis[i]=max(lis[i],lis[j]+1);
        }
    }


    for(int i=n-2;i>=0;i--){
        for(int j=n-1;j>i;j--)
        {
            if(A[i]>A[j])
                lds[i]=max(lds[i],lds[j]+1);
        }
    }

    int maxx=lis[0]+lds[0]-1;

    for(int i=1;i<n;i++)
    {
        if(lis[i]+lds[i]-1>maxx)
        maxx=lis[i]+lds[i]-1;
    }

    return maxx;


}