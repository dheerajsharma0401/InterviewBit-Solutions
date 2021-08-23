int Solution::removeDuplicates(vector<int> &A) {
    int n=A.size();
    if(A.size()<=2)
    return A.size();
    int count=0;
    for(int i=0;i<A.size();i++)
    {
        if(i<n-2 && A[i]==A[i+1] && A[i+1]==A[i+2]) continue;
        else
        {
            A[count]=A[i];
            count++;}
        
    }
    return count;
   
}
