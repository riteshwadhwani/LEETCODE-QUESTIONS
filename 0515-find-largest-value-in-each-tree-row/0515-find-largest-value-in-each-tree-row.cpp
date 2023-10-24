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
    
    void findValues(vector<int>&arr, TreeNode* root){
        queue<TreeNode*>q;
        q.push(root);
        q.push(nullptr);
        int maxi = INT_MIN;

        while(!q.empty()){
          TreeNode* temp = q.front();
          q.pop();
          if(temp==nullptr){
            arr.push_back(maxi);
            maxi=INT_MIN;
              if(!q.empty()){
                  q.push(nullptr);
              }
          }
          else{
              cout<<temp->val;
            maxi=max(temp->val,maxi);
          if(temp->left){
              q.push(temp->left);
          }
          if(temp->right){
              q.push(temp->right);
          }

          }
        }
    }
    vector<int> largestValues(TreeNode* root) {
        vector<int>ans;
        if(root==nullptr){
            return ans;
        }
        
        findValues(ans,root);
        return ans;
    }
};