class Solution {
    public List<Integer> postorderTraversal(TreeNode root) {
        List<Integer> arr =new ArrayList<>();
        solve(root,arr);
        return arr;
    }
    public void solve(TreeNode node,List<Integer> arr){
        if(node==null){return ;}
        solve(node.left,arr);
        solve(node.right,arr);
        arr.add(node.val);
    }
}
