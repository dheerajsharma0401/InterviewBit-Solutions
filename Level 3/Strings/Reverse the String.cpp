string Solution::solve(string A) 
{
    string ans="", w;
    stringstream ss(A);
    while(ss>>w)
    {
      //  cout<<w;
        ans=" "+w+ans;
    }
    return ans.substr(1);
}

