class Solution {
public:
    vector<int> findDisappearedNumbers(vector<int>& nums) {
        vector<int> ans;
        int index = 0;
        for(int i=0; i<nums.size(); i++){
            if(nums[i] > 0){
                index = nums[i];
            }
            if(nums[i] < 0){
                index = abs(nums[i]);
            }
            index--;
            if(nums[index] > 0){
                nums[index] = -nums[index];
            }
        }
        for(int i=0; i<nums.size(); i++){
            if(nums[i] > 0){
                ans.push_back(i+1);
            }
        }
        return ans;
    }
};
