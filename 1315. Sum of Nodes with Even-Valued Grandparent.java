class Solution {
    int sum=0;
    public int sumEvenGrandparent(TreeNode root) {
        solve(root,false,false);
        return sum;
    }
    public void solve(TreeNode root,boolean parent,boolean gparent){
        if(root!=null){
            if(gparent){
                sum+=root.val;
            }
                solve(root.left,root.val%2==0,parent);
                solve(root.right,root.val%2==0,parent);
            
        }
    }
}
