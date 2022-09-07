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
    void sample(TreeNode* root, string &str)
    {
        if (root == NULL)
         return;
        
         str+=to_string(root->val);
        if(root->left==NULL && root->right==NULL)
            return;
   
        if(root->left )
        {
            str+="(";
                sample(root->left,str);
            str+=")";
        }
    
        if(root->right)
        {
            if (!root->left) str+= "()";
            str+="(";
                sample(root->right,str);
            str+=")";
        }
        
    }
    string tree2str(TreeNode* root) {  
    string str="";
    sample(root,str);
      return str;
       }
};