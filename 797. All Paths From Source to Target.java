class Solution {
    public List<List<Integer>> allPathsSourceTarget(int[][] graph) {
        List<List<Integer>> ans = new ArrayList<>();
        //List<Integer> arr = new ArrayList<>();
        //arr.add(0);
        Queue<List<Integer>> q = new LinkedList<>();
        int goal = graph.length-1;
        q.add(Arrays.asList(0));
        while(!q.isEmpty()){
            List<Integer> path = q.poll();
            //List<Integer> arr= new ArrayList<>();
            int src=path.get(path.size()-1);
            if(src==goal){
                ans.add(new ArrayList(path));
            }
            for(int node:graph[src]){
                List<Integer> newPath= new ArrayList(path);
                newPath.add(node);
                q.add(newPath);
            }
        }
        return ans;
    }
}
