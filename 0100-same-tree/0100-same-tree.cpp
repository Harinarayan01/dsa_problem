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
    void preor(TreeNode* root,vector<int>&ans){
        if(root!=NULL){
            preor(root->left,ans);
            ans.push_back(root->val);
            preor(root->right,ans);
        }
        else{
            ans.push_back(1000);
        }
    }
    void inor(TreeNode* root,vector<int>&ans){
        
        if(root!=NULL){
            ans.push_back(root->val);
            inor(root->left,ans);
            inor(root->right,ans);
        }
        else{
            ans.push_back(1000);
        }
    }
    bool isSameTree(TreeNode* p, TreeNode* q) {
        
        vector<int>pre1,pre2,in1,in2;
        inor(p,pre1);
        inor(q,pre2);
        preor(p,in1);
        preor(q,in2);
        if(pre1==pre2 && in1==in2){
            return true;
        }
        else{
            return false;
        }
        
    }
};