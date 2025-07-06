class Solution {
public:
    void postorder(TreeNode* node, vector<int>& ans){
        if(node == nullptr){
            return;
        }
        postorder(node->left,ans);
        postorder(node->right,ans);
        ans.push_back(node->val);
    }
    vector<int> postorderTraversal(TreeNode* root) {
       vector<int> ans;
       postorder(root,ans);
       return ans; 
    }
};
