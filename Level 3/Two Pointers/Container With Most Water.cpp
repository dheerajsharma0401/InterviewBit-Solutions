int Solution::maxArea(vector<int> &A) {
    int max=INT_MIN;
    if(A.size()<=1)
    return 0;
    int j=A.size()-1;
    int i=0;
    while(i<j)
    {
        int prod=0;
        if(A[i]<=A[j])
        {
            prod=(j-i)*A[i];        
            i++;
        }
        else
        {
            prod=(j-i)*A[j];
            j--;
        }
        if(prod>max)
        max=prod;
        
        if(i==j)
        break;
    
    }
        
    
    return max;
}
