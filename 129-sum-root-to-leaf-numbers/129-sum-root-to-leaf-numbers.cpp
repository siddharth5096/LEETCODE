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
    void sup(TreeNode* root, string s, int& sum)
    {
        if (!root)
        {
            return;
        }
        s += to_string(root->val);
        if (!root->left && !root->right)
        {
            sum += stoi(s);
            // s.pop_back();
            return;
        }
        sup(root->left, s, sum);
        sup(root->right, s, sum);
        // s.pop_back();
    }
    int sumNumbers(TreeNode* root) {
       int sum=0;
       string s;
       sup(root, s , sum);
        return sum;
    }
};