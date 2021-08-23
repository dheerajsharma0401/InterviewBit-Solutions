int Solution::diffPossible(const vector<int> &A, int B) {
    
    vector<int>v;
    for(int i=0;i<A.size();i++)
    {
        v.push_back(A[i]);
    }
    sort(v.begin(),v.end());
    int start=0;
    int end=0;
    
    while(start<v.size() && end<v.size())
    {
        if(v[end]-v[start]==B &&start!=end)
        {
            return 1;
        }
        else
        if(v[end]-v[start]<B)
        end++;
        else
        start++;
        
    }
    return 0;
}

