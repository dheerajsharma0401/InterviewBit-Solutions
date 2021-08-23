vector<int> Solution::slidingMaximum(const vector<int> &arr, int k) {
    
      int i=0;
      int j=0;
      
      deque<int> q;
      vector<int> v;
      int mx=INT_MIN;
      int N=arr.size();
      
      while(j<N)
      {
         if(q.empty())
         q.push_front(arr[j]);
         else
         {
             if(arr[j]>q.back())
             {
                 while(q.size()>0 && arr[j]>q.back())
                 q.pop_back();
                 
                 
             }
             q.push_back(arr[j]);
         }
        
         if(j-i+1<k)
         j++;
         else
         if(j-i+1==k)
         {
             v.push_back(q.front());
             if(arr[i]==q.front())
             q.pop_front();
             
             i++;
             j++;
         }
       
          
      }
      return v;
}
