
int Solution::solve(vector<int> &A) {
    int n=A.size();
    vector <int>v(n);
    v[n-1]=A[n-1];
    for(int i=n-2; i>=0; i--){
        v[i]=max(v[i+1], A[i]);
    } 
    int sum=0;
    set<int> st;
    st.insert(A[0]);
    for(int i=1; i<n-1; i++){
        st.insert(A[i]);
        if(A[i]>=v[i+1]) continue;
        auto it= st.find(A[i]);
        if(it==st.begin()) continue;
        it--;
        sum=max(sum, (*it + A[i] + v[i+1]));
    }
    return sum;
}