class Solution {
    TreeNode reference=null;
    public final TreeNode getTargetCopy(final TreeNode original, final TreeNode cloned, final TreeNode target) {
        dfs(cloned,target);
        return reference;
    }
    public void dfs(TreeNode node, TreeNode target){
        if(node==null){return;}
        dfs(node.left, target);
        if(node.val==target.val){reference=node;}
        dfs(node.right, target);
    }
}
