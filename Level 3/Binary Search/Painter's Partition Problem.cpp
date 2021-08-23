int isValid(vector<int> &C,int A,int mx,int n)
{
    int painter=1;
    int load=0;
    for(int i=0;i<n;i++)
    {
        load+=C[i];
        if(load>mx)
        {
            painter++;
            load=C[i];
        }
        
        if(painter>A)
        return false;
    }
    return true;
}


int Solution::paint(int A, int B, vector<int> &C) {
    
    int maxx=C[0];
    
    
    int sum=C[0];
    
    for(int i=1;i<C.size();i++)
    {
        maxx=max(maxx,C[i]);
        sum+=C[i];
        
    }
    
    int low=maxx;
    int high=sum;
    long long int  res=-1;
    while(low<=high)
    {
        int mid=low+(high-low)/2;
        if(isValid(C,A,mid,C.size()))
        {
            res=mid;
            high=mid-1;
        }
        else
        low=mid+1;
        
    }
    return ((res%10000003)*(B%10000003))%10000003;
    
}
