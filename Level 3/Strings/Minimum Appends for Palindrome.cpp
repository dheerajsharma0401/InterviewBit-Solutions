
int Solution::solve(string A) {
    int cnt=0;
    int n=A.size();
    int i=0;int j=n-1;

    while(i<=j){
        if(A[i]==A[j]){
            i++;
            j--;
        }
        else{
            i++;
            cnt+=(n-j);
            j=n-1;
        }
    }
    return cnt;
}//abede
