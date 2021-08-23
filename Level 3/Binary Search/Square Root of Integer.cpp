int Solution::sqrt(int A) {
    long int min=1,max=A,mid;
    while(min<=max)
    {
        mid=min+(max-min)/2;
        
        if(mid*mid==A)
        return mid;
        
        else
        if(mid*mid>A)
        {
            max=mid-1;
        }
        else
        min=mid+1;
    }
      
}


