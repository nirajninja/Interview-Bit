int Solution::solve(string A) {

    unordered_map<char,int>mp;

    for(int i=0;i<A.size();i++)
    {
        mp[A[i]]++;
    }
    int c=0;
    for(auto it:mp)
    {
        if(it.second%2!=0)
        {
            c++;
        }
    }
    int n=A.size();
    if(c>1) return 0;
    if(c==1 && n%2!=0) return 1;
    if(c==0 && n%2==0) return 1;
    return 0;
}
