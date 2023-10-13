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
    void inOrderTr(TreeNode* root,     vector<int>&inOrder){
        if(root==nullptr){
            return;
        }
        inOrderTr(root->left,inOrder);
        inOrder.push_back(root->val);
        inOrderTr(root->right,inOrder);
    }
    
    int findK(vector<int>arr,int k){
        int i =0;
        while(k!=0){
            i++;
            k--;
            
        }
        return arr[i-1];
    }
    int kthSmallest(TreeNode* root, int &k) {
     
    vector<int>inOrder;
    inOrderTr(root,inOrder);
    int ans = findK(inOrder,k);

        
        return ans;
    
    }
};