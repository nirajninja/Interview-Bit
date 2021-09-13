int Solution::diffPossible(const vector<int> &A, int B) {
    
    unordered_map<int,int>mp;
    int count=0;
    for(int i=0;i<A.size();i++)
    {
        int sum=A[i]+B;
    
       if(mp.find(sum)!=mp.end() || mp.find(A[i]-B)!=mp.end())
        {
          return 1;
        }
        mp[A[i]]++;
    
    }
    return 0;
}
