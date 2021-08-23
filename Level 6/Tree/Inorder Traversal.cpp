/**
 * Definition for binary tree
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
vector<int> Solution::inorderTraversal(TreeNode* A) {

    stack<TreeNode*> q;
    vector<int> v;
   // q.push(A);
    TreeNode* curr=A;
    while(!q.empty()||curr!=NULL)
    {
      while(curr!=NULL)
      {
          q.push(curr);
          curr=curr->left;

      }

       curr=q.top();
       q.pop();
       v.push_back(curr->val);
       curr=curr->right;
       
       

    }

    return v;
}