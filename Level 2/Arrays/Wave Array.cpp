vector<int> Solution::wave(vector<int> &A) {
    
    
    int start=0;
    int end=1;
    sort(A.begin(),A.end());
    while(start<A.size() && end<A.size())
    {
        swap(A[start],A[end]);
        start=start+2;
        end=end+2;
    }
    return A;
    
}

