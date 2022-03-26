/**
 * Definition for binary tree
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
 void solve(TreeNode* root, int &cnt )
 {
     if(root==NULL)
     {
         return;
     }
     if(root->left!=NULL)
     {
         if(abs(root->val - root->left->val) == 1)
         {
             cnt++;
         }
         
     }
     
     if(root->right!=NULL)
     {
         if(abs(root->val- root->right->val)==1)
         {
             cnt++;
         }
     }
     
     solve(root->right, cnt);
     solve(root->left, cnt);
 }
int Solution::consecutiveNodes(TreeNode* A) {
    int cnt=0;
    
    solve(A,cnt);
    return cnt;
}
