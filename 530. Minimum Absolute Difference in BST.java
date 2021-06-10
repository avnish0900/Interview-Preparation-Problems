class Solution {
    public int getMinimumDifference(TreeNode root) {
        List<Integer> arr= new ArrayList<>();
        solve(root,arr);
        int min_diff=Integer.MAX_VALUE;
        for(int i=1;i<arr.size();i++){
            min_diff = Math.min(arr.get(i)-arr.get(i-1),min_diff);
        }
        return min_diff;
    }
    public void solve(TreeNode root, List<Integer>arr){
        if(root==null){return ;}
        solve(root.left,arr);
        arr.add(root.val);
        solve(root.right,arr);
    }
}
