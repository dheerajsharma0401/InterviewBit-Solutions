vector<int> Solution::searchRange(const vector<int> &A, int B) {
    
    
    int start=0;
    int end=A.size()-1;
    vector<int> v;
    int mid;
    while(start<=end)
    {
       
        
        if(A[start]==B)
        {
        v.push_back(start);
        start++;
        }
        else
        start++;
        
        if(A[end]==B)
        v.push_back(end);
        else
        end--;
      
    }
    if(v.size()==0)
    {
        v.push_back(-1);
        v.push_back(-1);
        
    }
    
    vector<int> res;
    sort(v.begin(),v.end());
    res.push_back(v[0]);
    res.push_back(v[v.size()-1]);
    return res;
}


