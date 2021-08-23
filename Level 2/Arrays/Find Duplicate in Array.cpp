int Solution::repeatedNumber(const vector<int> &A) {
    
    int len=A.size(),res;
    vector<int >arr(A.size()+1,0);
    for(int i=1;i<=len;i++)
    {
        arr[A[i-1]]++;
    }
    auto it = find(arr.begin(), arr.end(), 2);
    if (it != arr.end()) 
    {
     int index = it - arr.begin();
        res=index;
    }
    else
    res=-1;
  
   
   return res;
    
}
