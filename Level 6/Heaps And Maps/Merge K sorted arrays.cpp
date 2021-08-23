vector<int> Solution::solve(vector<vector<int> > &A) {
    priority_queue<int> q;
    
    for(int i=0;i<A.size();i++)
    {
        for(int j=0;j<A[i].size();j++)
        {
            q.push(A[i][j]);
        }
    }
    vector<int> v;
    while(!q.empty())
    {
        v.push_back(q.top());
        q.pop();
    }
    reverse(v.begin(),v.end());
    return v;
}

