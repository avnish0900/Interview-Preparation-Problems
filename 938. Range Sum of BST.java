class Solution {
    public int rangeSumBST(TreeNode root, int low, int high) {
        List<Integer> arr = new ArrayList<>();
        solve(root,arr);
        int sum=0;
        for(int i: arr){
            if(i>=low && i<=high){sum+=i;}
        }
        return sum;
    }
    public void solve(TreeNode node,List<Integer> arr){
        if(node==null){return ;}
        solve(node.left,arr);
        arr.add(node.val);
        solve(node.right,arr);
    }
}
