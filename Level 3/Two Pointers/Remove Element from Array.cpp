int Solution::removeElement(vector<int> &A, int B) {
   
    int n=A.size();
    
    int i=0;
    int t=A[0];
    int c=0;
   while(i<n)
   {
        if(A[i]!=B){
       A[c++]=A[i];
        
            
        }
        i++;
   }
    return c;
}

