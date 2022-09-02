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
    void sam(TreeNode* root, int low, int high , int &sum)
    {
        if(root==NULL)
            return;
        
        if(root->val <= high && root->val >= low)
            sum+=root->val;
        
        sam(root->left,low,high,sum);
        sam(root->right,low,high,sum);
    }
    int rangeSumBST(TreeNode* root, int low, int high) {
    int sum=0;
        sam(root,low,high,sum);
      return sum;
    }
};