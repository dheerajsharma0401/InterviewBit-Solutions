vector<int> Solution::intersect(const vector<int> &A, const vector<int> &B) {
    //set<int> s;
    vector<int> v;
int start1=0;
    int start2=0;
    while(start1<A.size() && start2<B.size())
    {
        if(A[start1]==B[start2]){
        v.push_back(A[start1]);
        start1++;
        start2++;
        }
        else
        if(A[start1]<B[start2])
        start1++;
        else
        start2++;
    } 
    
    return v;
}
