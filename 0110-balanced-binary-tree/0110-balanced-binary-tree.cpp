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
private:
    int height(TreeNode* root, bool &res){
        if(root==NULL) return 0;
        int l = height(root->left,res);
        int r = height(root->right,res);
        if(abs(l-r)>1){
            res = false;
        }
        return 1+max(l,r);
    }
public:
    bool isBalanced(TreeNode* root) {
        bool res = 1;
        height(root,res);
        return res;
    }
};