int Solution::solve(string A) {
    string B=A;
    reverse(B.begin(),B.end());

    int len1=A.length();
    int mem[len1+1][len1+1];

    for(int i=0;i<=len1;i++){
    mem[i][0]=0;
    mem[0][i]=0;
    }

    for(int i=1;i<=len1;i++)
    {
            for(int j=1;j<=len1;j++)
            {
                if(A[i-1]==B[j-1])
                mem[i][j]=1+mem[i-1][j-1];
                else
                mem[i][j]=max(mem[i-1][j],mem[i][j-1]);
            }
    }
    return mem[len1][len1];
}
