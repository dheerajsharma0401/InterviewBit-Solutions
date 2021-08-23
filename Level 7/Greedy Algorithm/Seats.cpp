int Solution::seats(string A) {
    
    int jum=0;
    int min1=INT_MAX;
    for(int i=0;i<A.size();i++)
    {
        if(A[i]=='X')
        {
            int index=i+1;;
            for(int j=i+1;j<A.size();j++)
            {
                if(A[j]=='X'){
                jum=jum+(j-index);
                index++;}
            }
            if(min1>jum)
            min1=jum;
            
        }
        return jum;
    }
}
