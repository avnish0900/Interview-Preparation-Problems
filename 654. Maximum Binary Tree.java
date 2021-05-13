class Solution {
    public TreeNode constructMaximumBinaryTree(int[] nums) {
        return solve(nums,0,nums.length-1);
    }
    public int max(int[] nums,int s, int e){
        int max=Integer.MIN_VALUE;
        int idx=-1;
        for(int i=s;i<=e;i++){
            if(max<nums[i]){
                idx=i;
                max=nums[i];
            }
        }
        return idx;
    }
    public TreeNode solve(int[] nums, int s, int e){
        if(s>e){return null;}
        if(s==e){return new TreeNode(nums[e]);}
        int mid=max(nums,s,e);
        TreeNode node = new TreeNode(nums[mid]);
        node.left=solve(nums,s,mid-1);
        node.right=solve(nums,mid+1,e);
        return node;
    }
}

