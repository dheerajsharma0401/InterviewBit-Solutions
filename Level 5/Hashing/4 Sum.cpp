vector<vector<int> > Solution::fourSum(vector<int> &A, int B) {
    vector<vector<int>> v;
    set<vector<int>> s;
    sort(A.begin(),A.end());
    for(int i=0;i<A.size()-1;i++)
    {
        for(int j=i+1;j<A.size();j++)
        {
            int start=j+1;
            int end=A.size()-1;
            while(start<end)
            {
                if(A[i]+A[j]+A[start]+A[end]==B)
                {
                    s.insert({A[i],A[j],A[start],A[end]});
                    start++;
                    end--;
                }
                else
                if(A[i]+A[j]+A[start]+A[end]<B)
                {
                    start++;
                }
                else
                end--;
            }
        }
    }
    
    for(auto i:s)
    
    {
        v.push_back(i);
    }
    return v;
}
