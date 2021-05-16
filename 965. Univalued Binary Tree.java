class Solution {
    public boolean isUnivalTree(TreeNode root) {
        List <Integer> arr= new ArrayList<>();
        solve(root,arr);
        Collections.sort(arr);
        for(int i=1;i<arr.size();i++){
            if(arr.get(i)!=arr.get(i-1)){return false;}
        }
        return true;
    }
    public void solve(TreeNode node,List<Integer> arr){
        if(node==null){return ;}
        solve(node.left,arr);
        arr.add(node.val);
        solve(node.right,arr);
    }
}
