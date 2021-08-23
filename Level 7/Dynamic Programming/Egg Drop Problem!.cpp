int binomial(int x, int n,int k)
{
    long long int sum = 0, term = 1;
    for (int i = 1; i <= n; ++i) {
        term *= x - i + 1;
        term /= i;
        sum += term;
        if(sum>k)
        {
            return sum;
        }
    }
    return sum;
}

int sole(int e,int k)
{

    int low = 1;
    int high = k;

    while (low < high) {
    int mid = (low+high)/2;

    long long int a = binomial(mid,e,k);
//cout << a << " " << “a”<< endl;
    if(a<k)
    {
//cout << l << "randi "<<endl;
    low = mid+1;

    }   
    else{   
    high = mid;

    }
}
return low;

}

int Solution::solve(int A, int B) {
int a = sole(A,B);
return a;
}
