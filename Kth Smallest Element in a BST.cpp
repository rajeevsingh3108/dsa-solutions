class Solution {
public:
    void helper(TreeNode* root, vector<int> &ans){
        if(root->left)
            helper(root->left, ans);
        ans.push_back(root->val);
        if(root->right)
            helper(root->right, ans);
    }

    int kthSmallest(TreeNode* root, int k) {
        vector<int> ans;
        helper(root, ans);
        return ans[k-1];
    }
};
