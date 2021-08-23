vector<int> Solution::prevSmaller(vector<int> &A) {
    vector<int> v;
     
    v.push_back(-1);
    for(int i=1;i<A.size();i++)
    {
       if(A[i]>A[i-1])
       v.push_back(A[i-1]);
       else
       {
           
           int j=i-1;
           while(v[j]!=-1)
           {
               if(v[j]<A[i]){
               v.push_back(v[j]);
               break;
               }
               
               j--;
           }
           
           if(v[j]==-1)
          v.push_back(-1);
       }
               
    }
          
    return v;
}
