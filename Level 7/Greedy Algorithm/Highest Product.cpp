bool comparator(int a,int b)
{
    if(a>b)
    return true;
    else
    return false;
}


int Solution::maxp3(vector<int> &A) {
    vector<int> v(A);
    sort(v.begin(),v.end(),comparator);
    int  prod=v[0]*v[1]*v[2];
    int pod2=v[0]*v[A.size()-1]*v[A.size()-2];
    
    if(prod>pod2)
    
    return (prod);
    else
    return pod2;
}
