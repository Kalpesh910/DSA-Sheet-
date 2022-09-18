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
    TreeNode* reverseOddLevels(TreeNode* root) {
        queue<TreeNode*>qu;
        if(root==NULL || root->left==NULL || root->right==NULL)  return root;
        qu.push(root);
        stack<int>rev;
        int level = 0;
        while(!qu.empty()){
            int si = qu.size();
            for(int i=0; i<si; i++)
            {
                TreeNode* node = qu.front();
                if(level%2==1){
                    node->val = rev.top();
                    rev.pop();
                }
                qu.pop();
                if(node->left){
                    qu.push(node->left);
                    if(level%2==0){
                        rev.push(node->left->val);
                        // cout << rev.top()->val;
                    }
                }
                if(node->right){
                    qu.push(node->right);
                    if(level%2==0){
                        rev.push(node->right->val);
                        // cout << rev.top()->val;
                    }
                }   
            }
            level++;
        }
        return root;
    }
};
