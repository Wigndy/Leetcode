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
        vector<int> result;
        dl(root, result);
        return result;
    }
    void dl(TreeNode* root, vector<int>& result)
    {
        if(root == NULL)
            return;
        dl(root->left, result);
        result.push_back(root->val);
        dl(root->right, result);
    }/////Đệ quy dạng cơ bản xét duyện qua bên trái rồi sang bên phải với basecase root == NULL
};