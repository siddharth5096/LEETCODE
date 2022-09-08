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
    vector<int> inorderTraversal(TreeNode* root) {
        stack<TreeNode*> tr;
        vector<int>s;
        TreeNode * curr=root;
        while(curr!=NULL || tr.empty()==false)
        {
            while(curr!=NULL)
            {
                tr.push(curr);
                curr=curr->left;
            }
            curr=tr.top();
            tr.pop();
            s.push_back(curr->val);
            curr=curr->right;
        }
        return s;
    }
};