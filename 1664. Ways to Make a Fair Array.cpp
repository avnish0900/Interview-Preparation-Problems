class Solution {
public:
    int waysToMakeFair(vector<int>& nums) {
        int sum=0;
        for(int i=0;i<nums.size();i++){
            if (i & 1){
                sum-=nums[i];
            }
            else{
                sum+=nums[i];
            }
        }int ans =0;
        for(int i=0;i<nums.size();i++){
            if(i & 1){
                sum+=nums[i];
            }
            else{
                sum-=nums[i];
            }
            if(sum==0){
                ans++;
            }
            if (i & 1){
                sum+=nums[i];
            }
            else{
                sum-=nums[i];
            }
        }
        return ans;
    }
};
