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
    
    void find(vector<int>&arr,TreeNode * root, int low,int high){
        if(root==nullptr){
            return;
        }
        find(arr,root->left,low,high);
        if(root->val>=low && root->val<=high){
            arr.push_back(root->val);
        }
        find(arr,root->right,low,high);
        
        
    }
    int rangeSumBST(TreeNode* root, int low, int high) {
        vector<int>arr;
        find(arr,root,low,high);
        int sum =0;
        for(int i =0;i<arr.size();i++){
            sum = sum + arr[i];
        }
        return sum;
        
    }
};