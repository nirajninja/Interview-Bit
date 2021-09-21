int find_path(int s, int A, vector<vector<int>>&adj, vector<int>&visited)
{
    visited[s]=true;
    if(s==A)
    {
        return 1;
    }
    for(auto it:adj[s])
    {
        if(visited[it]==false)
        {
            
            if(find_path(it,A,adj,visited)){
                return 1;
            }
        }
    }
    return 0;
}
int Solution::solve(int A, vector<vector<int> > &B) {
    
    vector<int> visted(A+1,0);
    vector<vector<int>> adj(A+1);
    for(int i=0; i<B.size(); i++)
    {
    adj[B[i][0]].push_back(B[i][1]);
    }
    
    return find_path(1,A,adj,visted);
    
}
