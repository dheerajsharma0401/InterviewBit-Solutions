int Solution::canJump(vector<int> &A) {
    int reach=0;
    int n=A.size()-1;
    int maxx=0;
    for(int i=0;i<A.size();i++)
    {
        reach=max(reach,i+A[i]);
        if(maxx==i)
        {
            maxx=reach;
        }
        
        if(maxx>=n)
        return 1;
    }
    if(maxx<n)
    return -1;
}
