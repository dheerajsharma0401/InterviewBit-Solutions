int Solution::colorful(int A) {
    
   set<int>s;
   vector<int> v;
   while(A)
   {
       int n=A%10;
       v.push_back(n);
       A=A/10;
   }
   
   
   for(int i=0;i<v.size();i++)
   {
      if( s.find(v[i])!=s.end())
      return 0;
      
      s.insert(v[i]);
   }
   int mul=1;
   for(int i=0;i<v.size()-1;i++)
   {
       mul=v[i];
       for(int j=i+1;j<v.size();j++)
       {
           mul=mul*v[j];
       if(s.find(mul)!=s.end())
       return 0;
       
       s.insert(mul);
   }
   
    
}

return 1;
}

