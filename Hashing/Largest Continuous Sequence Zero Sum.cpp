vector<int> Solution::lszero(vector<int> &A) {
    int n=A.size();
    int sum=0;
    int maxlen=INT_MIN;
    int f=-1,s=-1;
    unordered_map<int,int>mp;
    mp[0]=-1;
    
    for(int i=0;i<A.size();i++)
    {
        sum+=A[i];
        if(mp.find(sum)!=mp.end())
        {
            if(maxlen< (i-mp[sum]))
            {
                f=mp[sum];
                s=i;
                maxlen=i-mp[sum];
            }
        }
        else{
            mp[sum]=i;
        }
    }
    
    vector<int>v;
   
    for(int i=f+1;i<=s;i++)
    {
        v.push_back(A[i]);
    }
    
    
    return v;
}
