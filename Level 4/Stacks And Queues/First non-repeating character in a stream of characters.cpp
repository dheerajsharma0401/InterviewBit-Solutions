string Solution::solve(string A) {
    
    string s="";
    map<char,int> m;
    queue<char> q;
    
    for(int i=0;i<A.size();i++)
    {
        q.push(A[i]);
        m[A[i]]++;
        
        while(!q.empty())
        {
            if(m[q.front()]>1)
            q.pop();
            else
            {s.push_back(q.front());
            break;
            }
        }
        if(q.empty())
        s.push_back('#');
        
        }
        return s;
    }


