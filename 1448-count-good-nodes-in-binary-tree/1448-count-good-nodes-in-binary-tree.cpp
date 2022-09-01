/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
    
void sam(TreeNode* root, int x, int &cnt)
{
    if(root==NULL)
        return ;
    
    if(root->val>=x)
    {
          cnt++;
        x=root->val;
    }
      
    
    sam(root->left,x,cnt);
    sam(root->right,x,cnt);
}
    int goodNodes(TreeNode* root) {
        int x= root->val;
        int cnt=0;
        sam(root,x,cnt);
        return cnt;
    }
};