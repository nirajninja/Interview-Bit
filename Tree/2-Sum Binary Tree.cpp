/**
 * Definition for binary tree
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
 
 int solve(unordered_map<int,int>&mp,TreeNode* A,int B )
 {
     if(A==NULL) return 0;
     if(mp.find(B - (A->val))!=mp.end())
     {
         return 1;
     }
     mp[A->val]++;
    return solve(mp, A->left,  B) || solve(mp, A->right, B);
     //return 0;
 }
int Solution::t2Sum(TreeNode* A, int B) {

    unordered_map<int,int>mp;
    mp.clear();
    return  solve(mp,A,B);
}
