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
    int countNodes(TreeNode* root, int maxVal) {
        if(root == NULL){
            return 0;
        }

        int output = 0;

        if(root->val >= maxVal){
            output = 1;
        }

        maxVal = max(maxVal , root->val);

        output += countNodes(root -> left, maxVal);
        output += countNodes(root -> right, maxVal);

        return output;

        
    }

    int goodNodes(TreeNode* root){
        return countNodes(root, root->val);
    }
};