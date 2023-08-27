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
    bool isBalance = true;
    int height(TreeNode* root){
        if(root==nullptr){
            return 0;
        }
        int left = height(root->left);
        int right = height(root->right);
        int ans = max(left,right)+1;
        if(isBalance && abs(left-right)>1){
            isBalance = false;
        }
        return ans;
        
    }
    bool isBalanced(TreeNode* root) {
        height(root);
        return isBalance;
    }
};