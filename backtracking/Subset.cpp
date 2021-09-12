//with using for loop.

void backtrack(vector<vector<int>>&v,vector<int> &A, int st,vector<int> &v1)
{
    v.push_back(v1);
    
    // if(st==A.size())
    // {
    //     return ;
    // }
    
    for(int i=st; i<A.size(); i++)
    {
        v1.push_back(A[i]);
        backtrack(v,A,i+1,v1);
        v1.pop_back();
    }
   

    
}

vector<vector<int> > Solution::subsets(vector<int> &A) {
    
    
    sort(A.begin(),A.end());
    vector<vector<int>>v;
    
    vector<int>v1;
    backtrack(v,A,0,v1);
    return v;
}
//-----------------------------------------------------------------------------------//
//without using for loop



void backtrack(vector<vector<int>>&ans,vector<int>&A, vector<int>&c, int index)
{
    if(index==A.size())
    {
        ans.push_back(c);
    
        return ;
    }
    
        backtrack(ans,A,c,index+1);
        c.push_back(A[index]);
        backtrack(ans,A,c,index+1);
        c.pop_back();
    
}

vector<vector<int> > Solution::subsets(vector<int> &A) {
vector<vector<int>>ans;
ans.clear();

sort(A.begin(),A.end());
vector<int>c;
c.clear();
backtrack(ans,A,c,0);
sort(ans.begin(),ans.end());
return ans;
    
}

//----------------------------------------------------------------------//
