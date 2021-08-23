void Solution::merge(vector<int> &A, vector<int> &B) {
    // Do not write main() function.
    // Do not read input, instead use the arguments to the function.
    // Do not print the output, instead return values as specified
    // Still have a doubt. Checkout www.interviewbit.com/pages/sample_codes/ for more details

    vector<int>v;
    int start1=0;
   int start2=0;
   while(start1<A.size() && start2<B.size())
   {
       if(A[start1]<=B[start2])
       {
           v.push_back(A[start1]);
           start1++;
       }
       else
       {
           v.push_back(B[start2]);
           start2++;
       }
   }
   //cout<<start1<<start2;
   if(start1==A.size())
   {
       while(start2<B.size())
       {
           v.push_back(B[start2]);
           start2++;
       }
   }
   else
   if(start2==B.size())
   {
       while(start1<A.size())
       {
           v.push_back(A[start1]);
           start1++;
       }
   }
   int i=0;
   for(i=0;i<A.size();i++)
   {
       A[i]=v[i];
       
   }
   
   while(i<v.size())
   {
       A.push_back(v[i]);
       i++;
   }
      
    
}
