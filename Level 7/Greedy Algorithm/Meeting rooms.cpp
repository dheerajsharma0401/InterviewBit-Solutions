

int Solution::solve(vector<vector<int> > &A) {
    sort(A.begin(),A.end());
    priority_queue<int,vector<int>,greater<int>> v;
    int meet=1;
    
    v.push(A[0][1]);
    //sort(A.begin(),A.end(),comparator);
    for(int i=1;i<A.size();i++)
    {
        if(v.top()>A[i][0])
        meet++;
        else
        {
            v.pop();
        }
            v.push(A[i][1]);
        
    }
    return meet;
}
