/**
 * Definition for binary tree
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */

int  solve(TreeNode* A,TreeNode* B)
{
    if(A==NULL && B==NULL)
    return 1;
    if(A==NULL ||B==NULL)
    return 0;
    return (A->val==B->val && solve(A->left,B->left) && solve(A->right,B->right));
    
}
int Solution::isSameTree(TreeNode* A, TreeNode* B) {
return solve(A,B);
}

