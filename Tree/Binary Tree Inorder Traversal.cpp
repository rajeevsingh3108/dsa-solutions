class Solution {
    static void inorder(TreeNode node,List<Integer> ans ){
        if(node == null){
            return;
        }
        inorder(node.left,ans);
        ans.add(node.val);
        inorder(node.right,ans);
    }
    public List<Integer> inorderTraversal(TreeNode root) {
        List<Integer> ans= new ArrayList<>();
        inorder(root,ans);
        return ans;
    }
}
