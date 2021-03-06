class Solution {
    public int[] twoSum(int[] numbers, int target) {
        int lo = 0;
        int hi = numbers.length-1;
        int[] ans = new int[2];
        while(lo<hi){
            if(numbers[lo]+numbers[hi] == target){return ans = new int[]{lo+1,hi+1};}
            else if(numbers[lo]+numbers[hi]>target){
                hi--;
            }
            else{
                lo++;
            }
        }
        return ans;
    }
}
