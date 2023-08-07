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

    int totalCount(TreeNode* root, int &count){
        if(root== nullptr){
            return  0;
        }
        count++;
        totalCount(root->left, count);
        totalCount(root->right,count);
        return count;
    }
    int countNodes(TreeNode* root) {
        int count =0;

        return totalCount(root,count);
   
    }
};