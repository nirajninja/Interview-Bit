int Solution::mice(vector<int> &A, vector<int> &B) {
    sort(A.begin(),A.end());
    sort(B.begin(),B.end());
    int s=INT_MIN;
    for(int i=0;i<A.size();i++)
    {
        s=max(s,abs(B[i]-A[i]));
        
    }
    return s;
}
