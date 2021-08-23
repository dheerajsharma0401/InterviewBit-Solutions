int Solution::power(string A) {
long double a= stold(A);
if(a==1)
{
    return 0;
}

if(fmod(log2(a),1)==0)
{
    return 1;
}


return 0;
}

