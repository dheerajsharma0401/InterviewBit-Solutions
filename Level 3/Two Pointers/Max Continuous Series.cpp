vector<int> Solution::maxone(vector<int> &A, int B) {
    int n=A.size();
    int st=0,end=0,i=0,j=0,maxlen=INT_MIN;
    vector<int> v;
    while(j<n)
    {
        if(B>=0 and not A[j++]) B--;
        if(B<0 and not A[i++]) B++;
        if(maxlen<j-i)
        {
            maxlen=j-i;
            st=i,end=j;
        }
    }
    for(i=0;i<maxlen;i++)
    {
        v.push_back(st++);
    }
    return v;
}