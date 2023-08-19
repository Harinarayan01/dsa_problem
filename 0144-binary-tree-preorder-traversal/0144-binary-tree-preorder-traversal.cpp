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
   vector<int>preorder(TreeNode* root,vector<int>&ans){
       if(root!=NULL){
           
       
       ans.push_back(root->val);
       preorder(root->left,ans);
       preorder(root->right,ans);
       } 
   return ans;    
   }
    vector<int> preorderTraversal(TreeNode* root) {
        vector<int>ans;
       return  preorder(root,ans);
    }
};