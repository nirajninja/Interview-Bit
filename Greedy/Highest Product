int Solution::maxp3(vector<int> &A) {
    int n=A.size();
    sort(A.begin(),A.end());
    int m1=A[n-1]*A[n-2]*A[n-3];
    int m2=A[0]*A[1]*A[n-1];
    return max(m1,m2);
}
