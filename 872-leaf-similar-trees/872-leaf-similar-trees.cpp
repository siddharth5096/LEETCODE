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
    void check(TreeNode *r , vector<int>&res)
    {
        if(r==NULL) return;
        if(r->left==NULL && r->right==NULL)
            res.push_back(r->val);
        
        check(r->left, res);
        check(r->right, res);
    }
    bool leafSimilar(TreeNode* root1, TreeNode* root2) {
           vector<int>l1;
            vector<int>l2;
        check(root1,l1);
        check(root2,l2);
        return l1==l2;    
    }
    
};