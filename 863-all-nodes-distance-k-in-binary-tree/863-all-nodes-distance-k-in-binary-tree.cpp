/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
class Solution {
public:
   void fillmap(TreeNode* root,TreeNode* prev,unordered_map<TreeNode*,TreeNode*>&mp)
   {
       if(root==NULL)
           return;
       mp[root]=prev;
       
       fillmap(root->left,root,mp);
       fillmap(root->right,root,mp);
       //return;
   }
     void findans(TreeNode*target,int k,set<TreeNode*>&s,unordered_map<TreeNode*,TreeNode*>&mp,vector<int>&ans)
     {
         if(target==NULL || k<0 || s.find(target)!=s.end())
             return;
         
         s.insert(target);
         if(k==0)
         {
             ans.push_back(target->val);
             //return;
         }
         findans(target->left,k-1,s,mp,ans);
          findans(target->right,k-1,s,mp,ans);
          findans(mp[target],k-1,s,mp,ans);
         //return ;
     }
    vector<int> distanceK(TreeNode* root, TreeNode* target, int k) {
      vector<int>ans;
      set<TreeNode*>s;
      unordered_map<TreeNode*,TreeNode*>mp;
      fillmap(root,NULL,mp);
      findans(target,k,s,mp,ans);
        return ans;
    }
};