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
    int countNodes(TreeNode* root) {
        int value=0;
        if(root){
            if((root->left==NULL) && (root->right==NULL)){
                value=1;
            }
            else{
                value =1+countNodes(root->left)+countNodes(root->right);
            }
        }
    return value;    
    }
};