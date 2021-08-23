int Solution::maximumGap(const vector<int> &A) {
    int maxx=INT_MIN;
       if(A.size()==1)
    return 0;
 
    vector<pair<int,int>> v;
    for(int i=0;i<A.size();i++)
    {
        v.push_back({A[i],i});
    }
    sort(v.begin(),v.end());
    
    
 
    sort(v.begin(),v.end());
    int min=v[0].second;
    
    int diff=INT_MIN;
  for(int i=1;i<v.size();i++)
  {
       
       if(v[i].second<min)
       min=v[i].second;
       
       int sum;
       sum=v[i].second-min;
       if(min>diff)
       diff=min;
       
        
    }
    
    return diff;
    
}