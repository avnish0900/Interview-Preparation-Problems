class Solution {
    public int majorityElement(int[] nums) {
        int candidate=0;
        int votes=0;
        for(int i : nums){
            if(i==candidate){votes+=1;}
            else{
                if(votes==0){
                    candidate=i;
                    votes=1;
                }else{
                    votes-=1;
                }
            }
        }
        return candidate;
    }
}
