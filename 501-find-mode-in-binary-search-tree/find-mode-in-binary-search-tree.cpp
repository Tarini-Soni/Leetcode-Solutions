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
    vector<int> findMode(TreeNode* root) {
        unordered_map<int, int>freq;
        vector<int> ans;

        queue<TreeNode*>q;
        q.push(root);

        int maxFreq = 0;

        while(!q.empty()){
            TreeNode* current = q.front();
            q.pop();

            freq[current->val]++;
            maxFreq = max(maxFreq , freq[current->val]);

            if(current -> left != NULL){
                q.push(current-> left);
            }

            if(current -> right != NULL){
                q.push(current -> right);
            }

        }

        for (auto it : freq) {
            if (it.second == maxFreq) {
                ans.push_back(it.first);
            }
        }

        return ans;
        
    }
};