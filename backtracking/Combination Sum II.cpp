void choose(vector<int> &A,int index,int target,vector<int>&curr, vector<vector<int>>&ans)
{
    if(target==0)
    {
        ans.push_back(curr);
        return;
    }
    
    for(int i=index;i<A.size();i++)
    {
      //  if(i>index  && curr[i]==curr[i-1])continue; 
        if(target<A[i]) break;
        curr.push_back(A[i]);
        choose(A,i+1,target-A[i],curr,ans);
        curr.pop_back();
    }
}

vector<vector<int> > Solution::combinationSum(vector<int> &A, int B) {
    
    sort(A.begin(),A.end());
    vector<vector<int>>ans;
    vector<int>curr;
    choose(A,0,B,curr,ans);
    
      set<vector<int>>s;
        for(auto x:ans)
        {
            s.insert(x);
        }
        
        ans.clear();
        for(auto x:s)
        {
            ans.push_back(x);
        }
        
        return ans;
    

    
    
    // Do not write main() function.
    // Do not read input, instead use the arguments to the function.
    // Do not print the output, instead return values as specified
    // Still have a doubt. Checkout www.interviewbit.com/pages/sample_codes/ for more details
}


//--------------------------
//without using loops

void choose(vector<int> &A,int index,int target,vector<int>&curr, vector<vector<int>>&ans)
{
    if(index==A.size())
    {if(target==0)
    {
        ans.push_back(curr);
     //   return;
    }
    return;
    }
    
    // for(int i=index;i<A.size();i++)
    // {
    //   // if(i>index  && curr[i]==curr[i-1])continue; 
    //     if(target<A[i]) break;
    //     curr.push_back(A[i]);
    //     choose(A,i+1,target-A[i],curr,ans);
    //     curr.pop_back();
    // }
    
    curr.push_back(A[index]);
    choose(A,index+1,target-A[index],curr,ans);
    curr.pop_back();
    choose(A,index+1,target,curr,ans);
    
    
}

vector<vector<int> > Solution::combinationSum(vector<int> &A, int B) {
    
    sort(A.begin(),A.end());
    vector<vector<int>>ans;
    vector<int>curr;
    choose(A,0,B,curr,ans);
    
      set<vector<int>>s;
        for(auto x:ans)
        {
            s.insert(x);
        }
        
        ans.clear();
        for(auto x:s)
        {
            ans.push_back(x);
        }
        
        return ans;
    

    
    
    // Do not write main() function.
    // Do not read input, instead use the arguments to the function.
    // Do not print the output, instead return values as specified
    // Still have a doubt. Checkout www.interviewbit.com/pages/sample_codes/ for more details
}
