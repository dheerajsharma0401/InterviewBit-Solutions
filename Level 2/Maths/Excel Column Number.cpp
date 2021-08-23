int Solution::titleToNumber(string A) {
    int len=A.length();
    int c=64;
    string str;
    int l=len-1;
    int i;
    int sum=0;
    for(i=0;i<len;i++)
    {
        sum=sum*26+(int(A[i])-c);
    }
    return sum;
    
}
