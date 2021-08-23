int Solution::canCompleteCircuit(const vector<int> &A, const vector<int> &B) {
    
    int fuel=0;
    for(int i=0;i<A.size();i++)
    {
        if(B[i]>A[i])
        continue;
        fuel=A[i];
        int flag=0;
        for(int j=i;j<A.size();j++)
        {
            
            if(B[j]>fuel){
                flag=1;
            
            break;}
            else
            if(B[j]<fuel)
            {
                fuel-=B[j];
                fuel=fuel+A[j];
            }
            
        }
        if(flag==0)
        return i;
    }
    
    return -1;
}
