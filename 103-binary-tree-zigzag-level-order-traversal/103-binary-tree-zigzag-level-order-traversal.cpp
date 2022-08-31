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
    vector<vector<int>> zigzagLevelOrder(TreeNode* root) {
     vector<vector<int>>ans;
     queue<TreeNode *>q;
    if(root==NULL)
        return ans;
    
    q.push(root);
        int flag=0;
        while(!q.empty())
        {
            int sz=q.size();
            vector<int>ls;
            for(int i=0;i<sz;i++)
            {
                TreeNode *temp=q.front();
                q.pop(); 
                ls.push_back(temp->val);
        
                    if(temp->left!=NULL)
                        q.push(temp->left);
                    if(temp->right!=NULL)
                        q.push(temp->right);
            }
            if(flag==0){ 
                flag=!flag; 
            }
            else
            {
                flag=!flag; 
                reverse(ls.begin(),ls.end());
            }
                ans.push_back(ls); 
        }
        return ans;
    }
};