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
    vector<int> rightSideView(TreeNode* root) {
        vector<int>ans;
        queue<TreeNode*>qu;
        qu.push(root);
        if(root==NULL)  return{};
        if(root->left==NULL && root->right==NULL)   return{root->val};
        while(!qu.empty()){
            int si = qu.size();
            vector<int>temp;
            for(int i=0; i<si; i++){
                TreeNode* x = qu.front();
                temp.push_back(x->val);
                qu.pop();
                if(x->left){
                    qu.push(x->left);
                }
                if(x->right){
                    qu.push(x->right);
                }
            }
            ans.push_back(temp[temp.size()-1]);
        }
        return ans;
    }
};
