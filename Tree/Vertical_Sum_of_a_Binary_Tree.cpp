/**
 * Definition for binary tree
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
 void solve(TreeNode* root, map<int,int>&mp, int index)
 {
     if(root==NULL)
     {
        return;
     }
     
     mp[index]+=root->val;
     solve(root->left, mp, index-1);
     solve(root->right, mp , index+1);
 }
vector<int> Solution::verticalSum(TreeNode* A) {
    vector<int>v;
    map<int,int>mp;
    solve(A,mp,1 );
    
    for(auto it:mp)
    {
        v.push_back(it.second);
    }
    return v;
    
    
}
