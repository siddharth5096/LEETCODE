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
    vector<double> averageOfLevels(TreeNode* root) {
    queue<TreeNode*>q;
    vector<double>ans;
    q.push(root);
        while(!q.empty())
        {
            int sz= q.size();
            double sum=0;
            for(int i=0;i<sz;i++)
            {
                TreeNode*temp = q.front();
                q.pop();
                sum+=temp->val;
                if(temp->left!=NULL)
                    q.push(temp->left);
                if(temp->right!=NULL)
                    q.push(temp->right);
            }
            double avg=sum/sz;
            ans.push_back(avg);
        }
        return ans;
    }
};