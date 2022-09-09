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
    vector<vector<int>> levelOrderBottom(TreeNode* root) {
        vector<vector<int>>ans;
        if(root == NULL){    
            return ans;
        }
        queue<TreeNode*>qu;
        int length;
        qu.push(root);
        while(!qu.empty()){
            length=qu.size();
            vector<int>temp;
            while(length--){
                TreeNode* x = qu.front();
                qu.pop();
                if(x->left) qu.push(x->left);
                if(x->right)    qu.push(x->right);
                temp.push_back(x->val);
            }
            ans.insert(ans.begin(),temp);
        }
        
        return ans;
    }
};
