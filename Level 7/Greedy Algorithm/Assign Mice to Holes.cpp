int Solution::mice(vector<int> &A, vector<int> &B) {
    int moves=0;
    sort(A.begin(),A.end());
    sort(B.begin(),B.end());
    int min1=INT_MIN;
    for(int i=0;i<A.size();i++)
    {
        moves=abs(A[i]-B[i]);
        if(moves>min1)
        min1=moves;
    }
    return min1;
}
