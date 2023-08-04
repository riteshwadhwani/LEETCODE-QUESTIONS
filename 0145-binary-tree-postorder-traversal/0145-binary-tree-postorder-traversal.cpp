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
    
    void postOrder(vector<int>&arr, TreeNode* &root){
        if(root==nullptr){
            return;
        }
        postOrder(arr,root->left);
        postOrder(arr,root->right);
        arr.push_back(root->val);
    }
    vector<int> postorderTraversal(TreeNode* root) {
        vector<int>arr;
        if(root==nullptr){
            return arr;
        }
        postOrder(arr,root);
        return arr;
        
        
    }
};