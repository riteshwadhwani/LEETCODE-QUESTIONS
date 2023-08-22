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

   void findLeaf(TreeNode* root,int &ans ,int &flag){
       if(root==NULL){
           return ;
       }
       if(root->left==nullptr && root->right==nullptr && flag==1){
           ans += root->val;
       }
      flag =1;
         findLeaf(root->left,ans,flag);
       
         flag =0;
        findLeaf(root->right,ans,flag);
       
   }
    int sumOfLeftLeaves(TreeNode* root) {
        int flag = 0;
       int  sum = 0;
    
        findLeaf(root,sum,flag);
   
       
       return sum;

        
        
    }
};