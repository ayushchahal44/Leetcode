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
    int recDia(TreeNode* root,int &res){
        if(root==nullptr){
            return 0;
        }
        int lH=recDia(root->left,res);
        int rH=recDia(root->right,res);
        res = max(res,lH+rH);
        return 1 + max(lH,rH);
    }
public:
    int diameterOfBinaryTree(TreeNode* root) {
        int res = 0;
        recDia(root,res);
        return res;
    }
};