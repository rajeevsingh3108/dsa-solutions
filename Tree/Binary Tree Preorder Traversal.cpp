class Solution {
public:
    void preorder(TreeNode* node, vector<int>& ans){
        if(node== nullptr){
            return;
        }
        ans.push_back(node->val);
        preorder(node->left, ans);
        preorder(node->right, ans);
    }
    vector<int> preorderTraversal(TreeNode* root) {
        vector<int> ans;
        preorder(root,ans);
        return ans;
    }
};
