vector<int> Solution::solve(vector<int> &A, vector<int> &B, vector<int> &C) {

    vector<int>ans;
    unordered_map<int,int>mp1,mp2,mp3;
    set<int>s;
    for(int i=0;i<A.size();i++)
    {
        mp1[A[i]]++;
        s.insert(A[i]);
    }
    
    for(int i=0;i<B.size();i++)
    {
        mp2[B[i]]++;
    
            s.insert(B[i]);
    }
        for(int i=0;i<C.size();i++)
    {
        mp3[C[i]]++;
            s.insert(C[i]);
    }
    
    for(auto it:s)
    {
        if( (mp1.find(it)!=mp1.end() && mp2.find(it)!=mp2.end() ) 
    ||(mp2.find(it)!=mp2.end() && mp3.find(it)!=mp3.end() )
        || (mp1.find(it)!=mp1.end() && mp3.find(it)!=mp3.end() )
        )
        {
            ans.push_back(it);
        }
    }
    
    
    sort(ans.begin(),ans.end());
    return ans;
    
}


