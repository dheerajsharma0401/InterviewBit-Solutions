int Solution::removeDuplicates(vector<int> &A) {
    // Do not write main() function.
    // Do not read input, instead use the arguments to the function.
    // Do not print the output, instead return values as specified
    int n=A.size();
    if(n==1||n==0)
    return n;
   int i=1;
   int c=0;
   int t=A[0];
   while(i<n)
   {
       if(t!=A[i])
       {
           A[c++]=t;
           t=A[i];
           
       }
       i++;
   }
    A[c++]=t;
    return c;
    // Still have a doubt. Checkout www.interviewbit.com/pages/sample_codes/ for more details
}
