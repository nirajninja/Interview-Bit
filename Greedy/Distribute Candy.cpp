int Solution::candy(vector<int> &A) {
     int n=A.size();
    vector<int>l(n,1);
    vector<int>r(n,1);
  
    
    for(int i=1;i<A.size();i++)
    {
        if(A[i]>A[i-1])
        {
            l[i]=(l[i-1]+1);
        }
       
    }
   
 
    for(int i=n-2;i>=0;i--){
        if(A[i]>A[i+1])
        {
            r[i]=(r[i+1]+1);
        }
       
    }
    
   
    int sum=0;
    for(int i=0;i<A.size();i++)
    {
        sum+=max(l[i],r[i]);
    }
    
    return sum;
}
