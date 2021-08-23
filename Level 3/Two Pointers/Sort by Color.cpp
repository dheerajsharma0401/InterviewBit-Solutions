void Solution::sortColors(vector<int> &A) {
    int start=0;
   
 
    int red =0, blue =A.size()-1, color = 0;
    while(color <= blue)//we arrange 0's and 2's, 1's will already be in place
    {
        if(A[color]==0)
        {
            swap(A[red++],A[color++]);
        }
        else if(A[color]==2)
        {
            swap(A[blue--],A[color]);
        }
        else
        {
            color++;
        }
    }
}
   