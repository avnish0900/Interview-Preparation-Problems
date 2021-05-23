class Solution {
    public boolean leafSimilar(TreeNode root1, TreeNode root2) {
        List<Integer> arr =new ArrayList<>();
        List<Integer> vec =new ArrayList<>();
        aa(root1,arr);
        bb(root2,vec);
        if(arr.size()!=vec.size()){return false;}
        for(int i=0;i<arr.size();i++){
            if(arr.get(i)!=vec.get(i)){return false;}
        }return true;
    }
    public void aa(TreeNode root,List<Integer> arr){
        if(root==null){return ;}
        aa(root.left ,arr);
        if(root.left==null && root.right==null){
            arr.add(root.val);
        }
        aa(root.right,arr);
    }
    public void bb(TreeNode root,List<Integer> vec){
        if(root==null){return ;}
        bb(root.left ,vec);
        if(root.left==null && root.right==null){
            vec.add(root.val);
        }
        bb(root.right,vec);
    }
}
