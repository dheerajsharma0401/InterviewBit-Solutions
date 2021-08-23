vector<int> Solution::findSubstring(string A, const vector<string> &B) {
    unordered_map<string, int> words, temp;
    int n1 = A.size(), n2 = B.size(), j;
    if(n2 == 0) {
        return {};
    }
    string word;
    vector<int> ans;
    int len = B[0].size();
    for(int i = 0; i < n2; ++i) {
        ++words[B[i]];
    }
    
    for(int i = 0; i < n1; ++i) {
        temp = words;
        j = i;
        while(j + len <= n1) {
            word = string(A.begin() + j, A.begin() + j + len);
            if(temp.find(word) != temp.end()) {
                --temp[word];
                if(temp[word] == 0) {
                    temp.erase(word);
                }
                j += len;
            }
            else {
                break;
            }
        }
        if(temp.empty()) {
            ans.push_back(i);
        }
    }
    return ans;
}