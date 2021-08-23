
int isPrime(int n)
{
    for(int i=2;i<=sqrt(n);i++)
    {
        if(n%i==0) return false;
    }
    return true;
}

vector<int> Solution::primesum(int n) {
    vector<int> v;
    for(int i=2;i<=n/2;i++)
    {
        if( isPrime(i) && isPrime(n-i) )
        {
            v.push_back(i);
            v.push_back(n-i);
            return v;
        }
    }
}
