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
    void dp(TreeNode* root, string s, vector<string> &ans){
        if(root == NULL)
            return;
        string insertion = to_string(root->val);
        if(root->left == NULL && root->right == NULL){
            s += insertion;
            ans.push_back(s);
            return;
        }
        dp(root->left, s+insertion+"->", ans);
        dp(root->right, s+insertion+"->", ans);
    }
    vector<string> binaryTreePaths(TreeNode* root) {
        vector<string> ans;
        dp(root, "",ans);
        return ans;
    }
};