int Solution::lis(const vector<int> &A) {
    vector<int> v;
    v.push_back(A[0]);
    for(int i=1;i<A.size();i++)
    {
        if(v.back()<A[i])
        v.push_back(A[i]);
        else
        {
            int idx=lower_bound(v.begin(),v.end(),A[i])-v.begin();
            v[idx]=A[i];
        }
    }
    return v.size();
}
