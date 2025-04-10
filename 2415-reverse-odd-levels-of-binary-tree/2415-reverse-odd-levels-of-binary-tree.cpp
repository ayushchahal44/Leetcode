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
    void dfs(TreeNode* left,TreeNode* right,int n){
        if(!left || !right) return;
        if(n%2==1) swap(left->val,right->val);
        dfs(left->left,right->right,n+1);
        dfs(left->right,right->left,n+1);
    }
    TreeNode* reverseOddLevels(TreeNode* root) {
        if(root==nullptr) return nullptr;
        dfs(root->left,root->right,1);
        return root;
    }
};