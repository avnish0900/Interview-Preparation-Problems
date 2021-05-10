class Solution {
    int ans=0;
    int max=-1;
    public int deepestLeavesSum(TreeNode root) {
        depth(root,0);
        return ans;
    }
    public void depth(TreeNode node,int level){
        if(node==null){return ;}
        if(max<level){
            max=level;
            ans=node.val;
        }
        else if(level==max){
            ans+=node.val;
        }
        depth(node.left,level+1);
        depth(node.right,level+1);
    }
}
