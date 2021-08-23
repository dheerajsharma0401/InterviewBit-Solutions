vector<int> Solution::twoSum(const vector<int> &A, int B) {
unordered_map<int,int> mp;
vector<int> ans;
for(int i=0;i<A.size();i++)
{
    if(mp.find(B-A[i])!=mp.end())
    {
        ans.push_back(mp[B-A[i]]+1);
        ans.push_back(i+1);
        return ans;
    }
    else
        mp.insert({A[i],i});
}

        
    return ans;
}

