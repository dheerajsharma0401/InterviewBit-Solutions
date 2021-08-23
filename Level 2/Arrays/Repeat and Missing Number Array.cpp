vector<int> Solution::repeatedNumber(const vector<int> &A) {
    
    vector<int>v(A.size()+1,0);
    int len=A.size();
    for(int i=1;i<=len;i++)
    v[A[i-1]]=v[A[i-1]]+1;
    
    int flag=0,i,miss,repeat;
    auto it=find(v.begin(),v.end(),2);
   
   repeat=it-v.begin();
   auto it1=find(v.begin()+1,v.end(),0);
   miss=it1-v.begin();
   
   vector<int> res;
   res.push_back(repeat);
   res.push_back(miss);
   
   
   
    return res;
}