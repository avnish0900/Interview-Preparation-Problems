class Solution {
    int sum=0;
    public TreeNode bstToGst(TreeNode root) {
        solve(root);
        return root;
    }
    public int solve(TreeNode node){
        if(node==null){return 0;}
        int right=solve(node.right);
        sum+=node.val;
        node.val=sum;
        int left =solve(node.left);
        return sum;
    }
}
