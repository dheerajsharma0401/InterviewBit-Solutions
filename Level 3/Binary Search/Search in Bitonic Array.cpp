int find(int low,int high,vector<int> &A)
{
    if(A[0]>A[1])
    return 0;
    if(A[high]>A[high-1])
    return high;
    low+=1;
    high-=1;
    
    while(low<=high)
    {
        int mid=low+(high-low)/2;
        
        if(A[mid]>A[mid-1] && A[mid]>A[mid+1])
        return mid;
        else
        if(A[mid-1]>A[mid])
        high=mid-1;
        else
        if(A[mid+1]>A[mid])
        low=mid+1;
        
    }
    
    return 0;
}
int binary(vector<int> &A,int low,int high,int key)
{
    while(low<=high)
    {
        int mid=low+(high-low)/2;
        if(A[mid]==key)
        return mid;
        else
        if(key>A[mid])
        low=mid+1;
        else
        high=mid-1;
    }
    return -1;
}
int rbinary(vector<int> &A,int low,int high,int key)
{
    while(low<=high)
    {
        int mid=low+(high-low)/2;
        if(A[mid]==key)
        return mid;
        else
        if(key>A[mid])
        high=mid-1;
        else
        high=mid+1;
    }
    return -1;
}
int Solution::solve(vector<int> &A, int B) {
    
    int low=0;
    int high=A.size()-1;
    
    int index=find(low,high,A);
    if(B==A[index])
    return index;
    if(B>A[index])
    return -1;
    int i1=binary(A,0,index,B);
    int i2=rbinary(A,index+1,A.size()-1,B);
    
  // cout<<i1<<" "<<i2<<endl;
    if(i1==-1 && i2==-1)
    return -1;
    else
    if(i1==-1)
    return i2;
    else if(i2==-1)
    return i1;
    //return index;
}
