 class Solution {
    public List<Integer> preorderTraversal(TreeNode root) {
        List<Integer> arr =  new ArrayList<>();
        solve(root,arr);
        return arr;
    }
    public void solve(TreeNode node , List<Integer> arr){
        if(node==null){
            return ;
        }
        arr.add(node.val);
        solve(node.left,arr);
        solve(node.right,arr);
    }
}
