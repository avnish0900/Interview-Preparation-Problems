class Solution {
    List <Integer> arr = new ArrayList<>();
    public List<Integer> inorderTraversal(TreeNode root) {
        solve(root,arr);
        return arr;
    }
    public void solve(TreeNode root, List<Integer> arr){
        if(root==null){return;}
        solve(root.left,arr);
        arr.add(root.val);
        solve(root.right,arr);
    }
}
