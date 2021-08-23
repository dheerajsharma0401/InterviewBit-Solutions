int Solution::isPalindrome(int A) {
    long int num1=A;
    long int num2=0;
    if(num1<0)
    return false;
    while(num1!=0)
    {
        num2=num2*10+num1%10;
        num1=num1/10;
    }
    cout<<num2;
    if(A==num2)
    return true;
    else
    return false;
}