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
    void check(TreeNode* root, int x, int y, int level[2], int parent[2], int curLevel, TreeNode* curParent){
    if(root == NULL) return;
    if(root->val == x){
        level[0] = curLevel;
        parent[0] = curParent->val;
    }
    if(root->val == y){
        level[1] = curLevel;
        parent[1] = curParent->val;
    }
    check(root->left, x, y, level, parent, curLevel+1, root);
    check(root->right, x, y, level, parent, curLevel+1, root);
}
    
bool isCousins(TreeNode* root, int x, int y) {
    int level[2] = {-1,-1};
    int parent[2] = {-1,-1};
    check(root,x,y,level,parent,0,new TreeNode(-1));
    if(level[0] == level[1] && parent[0] != parent[1]){
        return true;
    }
    return false;
    }
};