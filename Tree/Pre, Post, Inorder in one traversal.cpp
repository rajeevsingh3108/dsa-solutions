#include <vector>
using namespace std;

struct TreeNode {
    int data;
    TreeNode* left;
    TreeNode* right;
    
    TreeNode(int val) {
        data = val;
        left = right = nullptr;
    }
};

class Solution {
private:
    void getAllTraversal(TreeNode* root, vector<int>& inorder, vector<int>& preorder, vector<int>& postorder) {
        if (!root) return;

        preorder.push_back(root->data);                       // Preorder: before left
        getAllTraversal(root->left, inorder, preorder, postorder);
        inorder.push_back(root->data);                        // Inorder: between left and right
        getAllTraversal(root->right, inorder, preorder, postorder);
        postorder.push_back(root->data);                      // Postorder: after left & right
    }

public:
    vector<vector<int>> treeTraversal(TreeNode* root) {
        vector<int> inorder, preorder, postorder;
        getAllTraversal(root, inorder, preorder, postorder);
        return {inorder, preorder, postorder};
    }
};
