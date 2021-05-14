class Solution {
    int idx=0;
    public TreeNode bstFromPreorder(int[] preorder) {
        int n = preorder.length;
        int ll= -(int)1e9-1;
        int rr= (int)1e9+1;
        return dfs(preorder,ll,rr);
    }
    
    public TreeNode dfs(int[] preorder,int ll,int rr){
        if(idx>=preorder.length || preorder[idx]<ll || preorder[idx]>rr){
            return null;
        }
        TreeNode node = new TreeNode(preorder[idx++]);
        node.left = dfs(preorder,ll,node.val);
        node.right= dfs(preorder,node.val,rr);
        return node;
    }
}
