
vector<int> Solution::plusOne(vector<int> &A) {
        int n=A.size()-1;
        int carry=1;
        vector<int> v;
        while(n>=0)
        {
            int sum=carry;
            sum=sum+A[n];
            carry=sum/10;
            sum=sum%10;
            v.push_back(sum);
            n--;
        }
        vector<int> r;
        if(carry)
        v.push_back(carry);
        int index=0;
        reverse(v.begin(),v.end());
   
        while(v[0]==0)
        {
            int last=v[v.size()-1];
            for(int i=0;i<v.size()-1;i++)
            v[i]=v[i+1];
            v.pop_back();
        }
   return v;
   }
  