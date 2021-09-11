int Solution::solve(vector<int> &A, int B) {
    
    
    int count=0;
    unordered_map<int,int>mp;
    for(int i=0;i<A.size();i++)
    {
        int c=A[i]^B;
        if(mp.find(c)!=mp.end())
        {
            count++;
        }
        mp[A[i]]++;
    }

    return count;
}

