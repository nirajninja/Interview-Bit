int Solution::majorityElement(const vector<int> &A) {
    
    
    int cand=0,count=0;
    for(int i=0;i<A.size();i++)
    {
        if(count==0)
        {
            cand=A[i];
        }
        
        if(cand==A[i])
        {
            count++;
        }
        else{
            count--;
        }
    }
    
    return cand;
}
