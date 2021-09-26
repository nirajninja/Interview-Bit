int Solution::solve(vector<int> &A) {
    
unordered_map<int,int>mp;
int s=0;
int maxlen=-1;
for(int i=0;i<A.size();i++)
{
    if(A[i]==0)
    {
        s-=1;
        
    }
    else{
        s+=1;
    }
    
    if(s==1)
    {
        maxlen=i+1;
    }
    
    if(mp.find(s)==mp.end())
    {
         mp[s]=i;
    }
     if(mp.find(s-1)!=mp.end()){
      
         maxlen=max(maxlen,  i - mp[s-1]);
    }
    
}

return maxlen;
    
    
    
}
