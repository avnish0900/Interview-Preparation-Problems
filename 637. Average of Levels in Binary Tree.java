class Solution {
    public List<Double> averageOfLevels(TreeNode root) {
        List<Double> arr = new ArrayList<>();
        if(root==null){return arr;}
        Queue<TreeNode> q = new ArrayDeque<>();
        q.add(root);
        double sum =0;
        while(q.size()>0){
            sum=0;
            int size = q.size();
            for(int i=0;i<size;i++){
                TreeNode cur = q.remove();
                sum+=cur.val;
                if(cur.left!=null){q.add(cur.left);}
                if(cur.right!=null){q.add(cur.right);}
            }
            double avg = sum/size;
            arr.add(avg);
        }
        return arr;
    }
}
