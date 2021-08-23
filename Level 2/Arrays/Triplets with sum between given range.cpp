int Solution::solve(vector<string> &A) {
    
    vector<float> v;
    if(A.size()<3)
    return 0;
    
   
    for(int i=0;i<A.size();i++)
    {
        if(stof(A[i])<2)
        v.push_back(stof(A[i]));
    }
    
  //  sort(v.begin(),v.end());
   // cout<<v.size();
    
    
   // for(int i=0;i<v.size();i++)
//cout<<v[i]<<" ";


 float a=v[0];
 float b=v[1];
 float c=v[2];
 float sum;
    for(int i=3;i<v.size();i++)
    {
    sum=a+b+c;
       float temp=v[i];
        
        if(sum>1 && sum<2)
        return 1;
        else
        if(sum>=2)
        {
            if(a>b && a>c)
            a=temp;
            else
            if(b>a && b>c)
            b=temp;
            else
            c=temp;
            
        }
        else
        {
            if(a<b&&a<c)
            a=temp;
            else
            if(b<a&& b<c)
            b=temp;
            else
            c=temp;
        }
    }
        
        if(a+b+c<2 && a+b+c>1)
        return 1;
        
        
}
