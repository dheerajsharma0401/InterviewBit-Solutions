int Solution::minimize(const vector<int> &A, const vector<int> &B, const vector<int> &C) {

    int i = 0;
    int j = 0;
    int k = 0;
    int ans = INT_MAX;
    
    while(i<A.size() && j<B.size() && k< C.size()){
        ans = min(ans,max(max(abs(A[i]-B[j]),abs(B[j]-C[k])),abs(C[k]-A[i])));
        if(B[j] <= A[i] && B[j] <= C[k]) j++;
        else if(C[k] <= B[j] && C[k]<= A[i]) k++;
        else if(A[i] <=C[k] && A[i] <=B[j])i++;
    }
    return ans;
}

