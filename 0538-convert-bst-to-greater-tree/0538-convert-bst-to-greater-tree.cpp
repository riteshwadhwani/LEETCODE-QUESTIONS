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

    void sumTree(int &sum, TreeNode* root){
        if(root==nullptr){
            return;
        }
        sumTree(sum,root->right);
        sum = sum + root->val;
        root->val = sum;
        sumTree(sum,root->left);
    }
    TreeNode* convertBST(TreeNode* root) {
        int sum =0;
        sumTree(sum,root);

        return root;


        
    }
};