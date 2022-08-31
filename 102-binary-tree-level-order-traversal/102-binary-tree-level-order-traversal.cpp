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
    vector<vector<int>> levelOrder(TreeNode* root) {
        vector<vector<int>>ans;
        queue<TreeNode *>q;
     if(root==NULL)
         return ans;
        q.push(root);
        while(!q.empty())
        {
            int se=q.size();
               vector<int>temp;
            for(int i=0;i<se;i++)
            {
                TreeNode*tp= q.front();
                q.pop();
                temp.push_back(tp->val);
                if(tp->left!=NULL)
                    q.push(tp->left);
                if(tp->right!=NULL)
                    q.push(tp->right);
            }
            ans.push_back(temp);
        }
        return ans;
    }
};