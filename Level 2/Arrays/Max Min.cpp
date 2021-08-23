int Solution::solve(vector<int> &A) {
    
    
    sort(A.begin(),A.end());
    int len=A.size();
    int sum=A[0]+A[len-1];
    
    return sum;
}
