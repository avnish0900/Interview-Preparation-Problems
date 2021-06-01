class Solution {
    public boolean findTarget(TreeNode root, int k) {
        if(root==null){return  false;}
        List<Integer> arr =new ArrayList<>();
        find(root ,arr);
        int lo =0;
        int hi = arr.size()-1;
        while(lo<hi){
            if(arr.get(lo)+arr.get(hi)==k){return true;}
            if(arr.get(lo)+arr.get(hi)<k){
                lo++;
            }
            if(arr.get(lo)+arr.get(hi)>k){
                hi--;
            }
            
        }
        return false;
    }
    
    public void find(TreeNode root, List<Integer> arr){
        if(root!=null){
            find(root.left,arr);
            arr.add(root.val);
            find(root.right,arr);
        }
        return ;
    }
}
